// Pinos do botão e LEDs
const int botao = 2;
const int ledsJogo[] = {8, 9, 10, 11}; // LEDs do sorteio

unsigned long tempoAlvo;
bool sorteioDisponivel = false;

// Controle de tempo para o alerta do microfone
unsigned long tempoFimSom = 0; 
const int tempoLuzSom = 2000; // Tempo que as luzes ficam acesas após o som (2 segundos)

// --- CONFIGURAÇÃO DE ALTA SENSIBILIDADE PARA VOZ ---
const int AJUSTE_SENSIBILIDADE = 15; // Deixamos bem baixo (ajuste entre 10 e 25 se necessário)
const int JANELA_AMOSTRAGEM = 50;    // Tempo em milissegundos para ouvir a voz (50ms)

void setup() {
  Serial.begin(9600);
  pinMode(botao, INPUT_PULLUP);
  
  for (int i = 0; i < 4; i++) {
    pinMode(ledsJogo[i], OUTPUT);
  }

  randomSeed(analogRead(A2)); 
  definirNovoTempo();
}

void loop() {
  // --- CAPTURA DE ONDA DA VOZ (PEAK-TO-PEAK) ---
  unsigned long inicioAmostragem = millis();
  int picoMaior = 0;
  int picoMenor = 1023;

  // Coleta dados durante 50ms muito rápido para capturar a voz humana
  while (millis() - inicioAmostragem < JANELA_AMOSTRAGEM) {
    int leitura = analogRead(A1);
    
    if (leitura < 1023 && leitura > 0) { // Ignora leituras erradas
      if (leitura > picoMaior) {
        picoMaior = leitura; // Guarda o ponto mais alto da onda da voz
      }
      if (leitura < picoMenor) {
        picoMenor = leitura; // Guarda o ponto mais baixo da onda da voz
      }
    }
  }

  // A variação real (amplitude da voz) é a distância entre o ponto mais alto e o mais baixo
  int amplitudeVoz = picoMaior - picoMenor;

  // --- MONITOR SERIAL ---
  Serial.print("Volume_da_Voz:");
  Serial.print(amplitudeVoz);
  Serial.print(" Limite_Sensibilidade:");
  Serial.println(AJUSTE_SENSIBILIDADE);

  // Se a amplitude da voz for maior que o limite, detecta som
  bool somDetectado = (amplitudeVoz > AJUSTE_SENSIBILIDADE);

  // Se detectar voz, joga o cronômetro para o futuro
  if (somDetectado) {
    tempoFimSom = millis() + tempoLuzSom; 
  }

  // --- REGRAS DE PRIORIDADE ---
  if (millis() < tempoFimSom) {
    // ACENDE TODAS AS LUZES SEM PISCAR
    for (int i = 0; i < 4; i++) {
      digitalWrite(ledsJogo[i], HIGH);
    }
    definirNovoTempo();
    sorteioDisponivel = false;
    
  } else {
    unsigned long tempoAtual = millis();

    if (!sorteioDisponivel && tempoAtual >= tempoAlvo) {
      sorteioDisponivel = true;
    }

    if (sorteioDisponivel) {
      bool estadoPisca = (millis() / 100) % 2; 
      for (int i = 0; i < 4; i++) {
        digitalWrite(ledsJogo[i], estadoPisca);
      }

      if (digitalRead(botao) == LOW) {
        int vencedor = random(0, 4); 
        for (int i = 0; i < 4; i++) {
          digitalWrite(ledsJogo[i], LOW);
        }
        digitalWrite(ledsJogo[vencedor], HIGH);
        delay(5000); 
        digitalWrite(ledsJogo[vencedor], LOW);
        sorteioDisponivel = false;
        definirNovoTempo();
      }
      
    } else {
      for (int i = 0; i < 4; i++) {
        digitalWrite(ledsJogo[i], LOW);
      }
    }
  }
  
  // Removemos o delay daqui para que a amostragem seja o próprio tempo de espera do loop
}

void definirNovoTempo() {
  tempoAlvo = millis() + random(3000, 6000);
}