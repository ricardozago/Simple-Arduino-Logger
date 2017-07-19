# Simple Arduino Logger

Este é um simples Firmware de Arduino Uno que faz a leitura das portas analógicas A0 e A1 e envia o valor em decimal para uma interface gráfica escrita em Python utilizando Tkinter. Esta interface pode salvar os dados recebidos em formato XLS e a janela de plot PNG .

Abaixo é ensinado como fazer a configuração inicial.

![Interface](https://github.com/ricardozago/Simple-Arduino-Logger/blob/master/Interface.png)

# Configuração inicial

Faça o download da suite de programação do Arduino em seu [site](https://www.arduino.cc/en/Main/Software). Abra o arquivo Firmware/firmware.ino, vá em Ferramentas depois em Placas e selecione a sua (provavelmente Arduino Uno), selecione também a porta que ele está conectado.

Pode-se instalar o Python 3.6 e posteriormente os pacotes necessários, porém recomenda-se a instalação da distribuição [Anaconda](https://www.continuum.io/downloads), que já conta com os pacotes necessários como o Tkinter e Pandas. Na hora de instalar marque as opções "Add Anaconda to the system PATH environment variable" e "Register Anaconda as the system Python 3.6". Só é necessário fazer a instalação do Pyserial com o seguinte comando:

    pip install pyserial
    
Repare que o Anaconda possui um sistema de instalação de pacotes chamado conda, que também possui o Pyserial, porém a versão é antiga e não é compatível com a interface gráfica. Se você tiver problema em executar o comando acima, possivelmente o Anaconda não foi adicionado ao Path do sistema.

Para executar o programa abra uma Prompt de Comando (ou Windows PowerShell), abra a pasta onde você colocou o arquivo Interface/interface.py e o execute com:

    python interface.py
