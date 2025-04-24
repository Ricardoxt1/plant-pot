# 🌱 PlantPot Tamagotchi - Cultivando conexões
Sistema de monitoramento hídrico e irrigação automatizada

## 📋 Descrição
O PlantPot Tamagotchi é um vaso inteligente que monitora a umidade do solo e condições ambientais, \
controla automaticamente a irrigação da cultura, exibe emoções da planta conforme seu "estado de \
saúde" e envia todos os dados coletados para a nuvem (ThingSpeak) para monitoramento remoto.

### 🛠 Componentes Necessários
- ESP32 (qualquer versão com Wi-Fi)
- Sensor de Umidade do Solo (capacitivo)
- Sensor DHT11 (temperatura e umidade do ar)
- Display OLED 128x64 (I2C)
- Módulo Relé 5V
- Mini Bomba d'Água 3-5V
- LED de sinalização 
- Resistores e jumpers

## ⚙️ Funcionalidades Principais
### Monitoramento Automático:
- Verifica umidade do solo a cada 3 horas;
- Ativa irrigação quando a umidade está baixa
- Detecta excesso de umidade.

### Feedback Visual:
- Display OLED mostra emoções correspondentes ao estado de saúde da planta;
- LED para alertas de mal funcionamento ou falta de água no reservatório;
- Apresentação em gráficos do histórico de leitura dos sensores e ativação da bomba,\
através da plataforma ThingSpeak.

### Lógica da automação:
- Contadores de aferição são utilizados para monitorar quando é necessária a irrigação e quando \
a planta está exposta a umidade excessiva;
- A partir de 10 leituras de solo excessivamente seco, o LED é ativado e o Display apresenta a \
mensagem "Irrig. Comprometida".

## 🚀 Como Usar
1. Compile o código no ESP32;
2. Conecte todos os componentes conforme o esquema; (desenvolver esquerma)
3. Configure as credenciais de Wi-Fi e API Write do canal do ThingSpeak;
4. Monitore a planta através do display ou remotamente pelos gráficos e reabasteça o reservatório \
quando necessário.

## ⚠️ Solução de Problemas
Obs: Antes de quaisquer validações verifique se as bibliotecas estão instaladas e atualizadas e se \
a versão/modelo da placa esta correto e atualizado de forma devida. 
### Display não funciona:
- Verifique conexões I2C;
- Confira o endereço (0x3C ou 0x3D);
- Teste com exemplo simples da biblioteca Adafruit_SSD1306.

### Leituras inconsistentes:
- Verifique posicionamento do sensor no solo;
- Calibre os valores mínimo/máximo conforme as necessidades apresentadas pelo solo utilizado.

### 📝 Licença
Este projeto está licenciado sob a MIT License - veja o arquivo LICENSE para detalhes.

# 🙌 Créditos
Desenvolvido por Danielli dos Santos Borges e Ricardo ALexandre Ferreira, sob orientação do \
Prof° Dr° JOão Ricardo Favan e coorientação da Prof Dr Eloiza Martins Primo Capeloci, como \
Trabalho de Graduação da Fatec Shunji Nishimura.
