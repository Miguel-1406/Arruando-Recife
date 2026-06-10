# 🗺️ Arruando o Recife

> **Projeto desenvolvido para a Amostra Tech Design – CESAR School**
>
> *“Arruar: O ato de caminhar pelas ruas sem rumo; perambular, vagar e explorar as vias urbanas.”*

---

## 📝 Descrição do Projeto

**Arruando o Recife** é um jogo competitivo híbrido (tabuleiro e eletrônica) com mecânicas de sobrevivência e alta interação entre os jogadores, profundamente inspirado na cultura, geografia e história do Recife. 

Aqui, não há vencedores dividindo o pódio: **quem chegar primeiro à Rosa dos Ventos ganha o jogo**. No entanto, para sobreviver ao trajeto com recursos escassos, os jogadores entram em um dilema constante. O jogo permite uma dinâmica ambígua onde você pode cooperar temporariamente com outros participantes para superar barreiras, ou usar de pura **sabotagem** e roubo de recursos para eliminar a concorrência pelo caminho.

### 🌟 O Grande Diferencial: Comunicação Não-Verbal e Inclusão
O aspecto mais inovador do projeto é a **ausência de comunicação verbal**. Toda a interação, blefe, cooperação ou sinalização de sabotagem entre os competidores acontece exclusivamente por meio de sinais emitidos por um sistema integrado com **Arduino** (usando luzes e vibrações) e pela interpretação sensorial. Isso constrói uma experiência estratégica altamente imersiva, empática e **completamente inclusiva para pessoas surdas ou com deficiências auditivas**, quebrando barreiras tradicionais de acessibilidade nos jogos cotidianos.

---

## 🎯 Objetivos e Impactos

### Objetivos
* **Comunicação Não-Verbal Efetiva:** Criar uma nova linguagem sensorial para a resolução de impasses e interações estratégicas.
* **Acessibilidade Universal:** Desenvolver mecânicas pensadas nativamente para a inclusão de deficientes auditivos.
* **Mecânicas Híbridas:** Integrar perfeitamente o ecossistema físico (tabuleiro, cartas) com o ecossistema eletrônico (Arduino).
* **Valorização Regional:** Implementar e difundir elementos da cultura nordestina e pernambucana.

### Impactos Esperados
* Transmitir conforto, acolhimento e equidade a jogadores não-ouvintes.
* Servir como ferramenta lúdica de ensinamento da cultura do Recife de forma dinâmica.
* Trazer visibilidade e novos parâmetros de design para a criação de jogos genuinamente acessíveis.

---

## ⚙️ Componentes e Tecnologias

O protótipo combina elementos físicos de prototipagem rápida e componentes de hardware integrados por código:

* **Hardware & Eletrônica:**
    * Placa Arduino
    * LEDs (Sinalização de eventos, bônus e punições)
    * Sensor de Movimento
    * Resistores & Protoboard
    * Fios condutores especiais para os LEDs
    * Caixa de papelão e Placa de MDF (Estrutura do tabuleiro)
* **Ambiente de Software:**
    * Arduino IDE (Programação e upload do firmware de controle do hardware)
* **Materiais de Construção Física e Arte:**
    * Impressora 3D (para peças/componentes específicos)
    * Papéis para elementos Pop-up e Cartas de papel
    * Dados

---

## 🎲 Lógica de Funcionamento e Regras

1. **Preparação:** A jornada começa com o competidor mais velho e segue no sentido horário. Cada participante recebe uma mochila compacta com quatro espaços de inventário, pré-carregada com itens essenciais como água e comida, além de tres moedas que representam suas vidas e sustentam a sobrevivência.
2. **O Tabuleiro e o Movimento:** Os jogadores perambulam por uma rota complexa e cheia de imprevistos pelo **Recife Antigo**, correndo contra o tempo para alcançar a **Rosa dos Ventos antes que seus recursos vitais se esgotem.
3. **Dinâmica de Turnos:** A movimentação no percurso é determinada pelo lançamento de dados, mas a sorte é condicionada pela eletrônica: a luz ativa na casa pisada dita o destino. Uma cor específica pode sinalizar uma punição severa ou um bônus.
4. **Gerenciamento de Crise e Alianças:** Ao longo do trajeto, os participantes devem gerenciar cuidadosamente seus suprimentos em um dilema constante entre velocidade e precaução. O Arduino atua como o **núcleo emissor**, onde cada luz acesa dita ações em tempo real. Os jogadores podem se ajudar mutuamente para superar emergências rapidamente, mas essas alianças duram apenas até onde for conveniente.
5. **Mecânica de Sabotagem:** A competitividade atinge o ápice com o uso de cartas, onde os jogadores utilizam comandos específicos para **roubar recursos diretamente de seus oponentes**, atrasando os rivais e garantindo a própria vantagem.
6. **Vitória e Fim de Jogo:** A vitória é individual e conquistada pelo **primeiro jogador que chegar à Rosa dos Ventos**. Os demais são eliminados ao longo do percurso por escassez total de suprimentos ou pelas sabotagens alheias.

---

## 🚀 Análise de Mercado e Diferenciais Competitivos

O projeto foi validado sob métricas rigorosas de Design de Experiência e Engenharia:

* **Qualidade e Desempenho:** Resposta ágil dos sensores e sinalizadores visuais em tempo real, garantindo fluidez e eliminando travas na gameplay.
* **Preço e Viabilidade:** Construído com materiais acessíveis de baixo custo (MDF, papelão, componentes eletrônicos básicos), provando que acessibilidade de ponta não exige orçamentos exorbitantes.
* **Inovação e Experiência do Usuário (UX):** Unir mecânicas de traição, blefe e cooperação em um ambiente silencioso cria uma atmosfera única de tensão, foco e conexão sensorial profunda entre os jogadores.
* **Público-Alvo Analisado:** Comunidade surda, entusiastas de jogos de tabuleiro modernos (Board Games competitivos de alta interação), educadores e estudantes de cultura regional.
* **Diferencial Competitivo:** Rompe com o clichê de que jogos acessíveis para PcDs precisam ser puramente educativos ou cooperativos pacíficos. *Arruando o Recife* traz a competitividade e a adrenalina da sabotagem para todos, provando que a acessibilidade está na base das regras, não na simplificação da experiência.

---

## 🛠️ Competências Desenvolvidas

Para tornar este projeto realidade, a equipe integrou conhecimentos multidisciplinares em:
* Pesquisa aprofundada sobre dificuldades de comunicação enfrentadas por deficientes auditivos em jogos.
* Imersão histórica e cultural sobre Recife e Pernambuco.
* Criação de interfaces físicas tangíveis (HCI) ligando objetos reais ao Arduino.
* Design de Comunicação Não-Verbal: Criação de uma nova linguagem sensorial para resolução e criação de impasses.
* Modelagem 3D, ilustração manual/digital e engenharia de papel (Pop-up).

---

## 📸 Galeria do Protótipo

### Conceito Visual e Componentes Físicos
*(Espaço reservado para as fotos do protótipo e ilustrações do grupo)*

| Design da Caixa e Tabuleiro | Cartas de Recursos e Elementos Pop-up |
| :---: | :---: |
| <img src="image_720b9e.png" alt="Protótipo Caixa" width="300px"> | <img src="image_720b49.png" alt="Componentes Pop-up" width="300px"> |

---

## 👥 Equipe Desenvolvedora

Projeto executado com muito orgulho pelas mentes brilhantes de:

* **Camila Dias**
* **Manuella Fontenelle**
* **Brenda Rodrigues**
* **Isabel Araujo**
* **Letícia Dornas**
* **João Miguel Ramos**
* **Felipe Araujo**
* **Lucas Silva**
* **Luiz Eduardo Albuquerque**

---
⭐ *Desenvolvido no ecossistema de inovação do CESAR School.*
