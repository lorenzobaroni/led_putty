# 🚀 Controle de LEDs e Buzzer com Raspberry Pi Pico W

Este projeto implementa um sistema de controle para LEDs RGB (vermelho, azul e verde) e um buzzer, utilizando a comunicação serial com a Raspberry Pi Pico W. Os comandos são enviados via terminal, como o PuTTY, para ativar diferentes LEDs ou o buzzer na placa.

## Link do Vídeo Ensaio

[Demonstração de Funcionamento do Projeto](https://www.youtube.com/watch?v=MYEgqEFYRBc)

## 🛠️ Funcionalidades

#### Controle individual de LEDs RGB:

- ```RED``` - Liga o LED vermelho (GPIO 13) e desliga os demais.
- ```BLUE``` - Liga o LED azul (GPIO 12) e desliga os demais.
- ```GREEN``` - Liga o LED verde (GPIO 11) e desliga os demais.
- ```WHITE``` - Liga os três LEDs ao mesmo tempo (luz branca).

#### Controle do Buzzer:

- ```BUZZER``` - Ativa o buzzer (GPIO 21) por 2 segundos.

#### Desligar sistema:

- ```OFF``` - Desliga todos os LEDs e o buzzer.

#### Reiniciar o sistema:

- ```REBOOT``` - Reinicia o dispositivo no modo de armazenamento USB.

#### Resposta em terminal:

Cada comando exibe mensagens no terminal indicando o status atual do sistema.

## 🖥️ Requisitos

#### Hardware:

- Placa Raspberry Pi Pico W.
- LEDs RGB conectados aos pinos GPIO 11, 12 e 13.
- Buzzer conectado ao pino GPIO 21.
- Conexão via cabo USB ao computador.

#### Software:

- Ferramenta de terminal PuTTY.
- VSCode
- SDK do Raspberry Pi Pico (pico-sdk) configurado no ambiente de desenvolvimento.

## 📂 Estrutura do Código

#### Principais funções

- ```init_gpio:``` Configura os pinos GPIO como saída para os LEDs e o buzzer.

- ```all_off:``` Desliga todos os LEDs e o buzzer.

- ```activate_buzzer:``` Ativa o buzzer por uma duração definida.

- ```main:``` Aguarda comandos via terminal e executa ações com base nos comandos recebidos.

## Comandos disponíveis

| Comando   | Ação                                                                 |
|-----------|----------------------------------------------------------------------|
| ```RED```  | Liga o LED vermelho e desliga os demais LEDs. Exibe "ON: RED".       |
| ```BLUE```      | Liga o LED azul e desliga os demais LEDs. Exibe "ON: BLUE".          |
| ```GREEN```     | Liga o LED verde e desliga os demais LEDs. Exibe "ON: GREEN".        |
| ```WHITE```    | Liga todos os LEDs simultaneamente. Exibe "ON: WHITE".               |
| ```BUZZER```    | Ativa o buzzer por 500 ms. Exibe "ON: BUZZER".                       |
| ```OFF```       | Desliga todos os LEDs e o buzzer. Exibe "SYSTEM: OFF".               |
| ```REBOOT```    | Reinicia o dispositivo no modo de armazenamento USB. Exibe "HABILITANDO O MODO GRAVAÇÃO". |


## 🧪 Como Executar

- Conecte a Raspberry Pi Pico W ao computador.
- Compile e carregue o código na placa utilizando o ambiente de desenvolvimento do Pico SDK.
- Abra o terminal (PuTTY) e conecte-se à porta COM atribuída à Pico W.
- Envie os comandos listados acima e observe a resposta no terminal.

## Licença

Este programa foi desenvolvido como um exemplo educacional e pode ser usado livremente para fins de estudo e aprendizado.

## Autores

- LORENZO GIUSEPPE OLIVEIRA BARONI
- LUIZ VICTOR RIBEIRO SANTOS
- MARY NICOLE DE SOUSA MENDES
- ÍTALO ALVES TENÓRIO DE ALMEIDA
- JOÃO PEDRO FERREIRA DE JESUS
- JOÃO PAULO SANTOS LUZ PEREIRA
- FELIPE SILVA QUEIROZ
