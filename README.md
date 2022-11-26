# Colaboradores

[Kevenny](https://www.github.com/KevennyJS)

[Ericles](https://www.github.com/Ericles-Porty)

[Maria Milena](https://www.github.com/MariaMilena)




## Introdução
## Objetivo Geral

#### Nosso projeto foi iniciado a partir do incentivo do professor André, durante a matéria optativa da Universidade Federal de Sergipe, Tópicos Especiais de Hardware. Este, tem como Objetivo principal a automação residencial levando em consideração a comodidade e economias que a tecnologia pode proporcionar.
## Objetivo Especifico

- Gerenciamento e auditoria de pessoas na propriedade.
- Controle de luzes com objetivo liga-las com a presença de pessoas no ambiente, assim como desliga-las quando não houverem.
- Abertura e fechamento automatico de portas pela presença.
## Solução proposta
    
#### A solução proposta sugere a utilização de microcontroladores como ESP32 ou Arduino para gerenciar os modulos que são acomplados aos microcontroladores (como RFID, Ultrassonico, etc) em conjunto com middlewares para que possam ser automatizados e auditados.
## Arquitetura da solução
## Materiais e métodos


![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045876476068778114/unknown.png)

### O Sensor de Distância Ultrassônico US-015 é capaz de medir distâncias de 2cm a 4m com excelente precisão. Este módulo possui um circuito pronto com emissor e receptor acoplados e 4 pinos (VCC, Trigger, ECHO, GND) para medição.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045877266665705552/unknown.png)

### O módulo RFID é um sistema composto por uma antena (também chamada de transceptor) que recebe e armazena os dados de um token, que pode ser um cartão ou um bottom. O transceptor emite, através de uma antena, sinais de rádio para ativar o Tag, que por sua vez, reponde uma mensagem ao receptor com a informações armazenadas em seu chip. Uma tag é composta, basicamente, por um chip, que armazena informações, e uma antena.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045877839561506976/unknown.png)

### O Display LCD 16x2 é um modelo de display vastamente utilizado em projetos onde se necessita uma interface homem-máquina (IHM). Ele é composto por 16 colunas e 2 linhas com a escrita na cor branca e sua backlight (luz de fundo) azul para exibição de caracteres, letras e números de forma clara e nítida, melhorando a visibilidade para quem recebe a informação. O Display LCD 16x2 utiliza o controlador HD44780, utilizado em toda indústria de LCD's como base de interface que pode ser operado em 4 ou 8-bits paralelamente. Sua conexão é feita através de 16 pinos, sendo 12 deles para conexão básica com o microcontrolador e 11 deles pinos de entrada/saída (I/O) e os demais pinos para ajuste de contraste através de potenciômetros, trimpots e afins e para a alimentação da backlight. Também é possível fazer a comunicação I2C com um microcontrolador. Fácil interação com qualquer microcontrolador, como Arduino, Raspberry, Pic, entre outros, o display 16x2 ideal para empresas de tecnologia, projetistas, estudantes, hobbystas e iniciantes na profissão de programação.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045878181552476180/unknown.png)

### A placa Arduino MEGA 2560 é uma ótima opção para expandir seus projetos, quando há a necessidade de mais pinos ou quantidade de memória FLASH. Possui desempenho parecido com a placa Arduino UNO, porém possibilitando maior quantidades de recursos, como mais entradas analógicas e saídas PWM.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045878510243303434/unknown.png)

### Led difuso é um led onde o encapsulamento plástico é fosco, assim vc consegue visualizar ele facilmente na liz do dia. geralmente é utilizado apenas para vc saber que algo está ligado e tal. Os outros tipos são "cristalinos", onde a luz é direcionada pra frente.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045878637808848926/unknown.png)

### Os potenciômetros são usados nos equipamentos para permitir a mudança do regime de operação! Por exemplo, o potenciômetro de volume permite o aumento ou diminuição do nível da intensidade do som, já o potenciômetro de brilho permite o controle de luminosidade das imagens.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045878818440740904/unknown.png)

### A resistência elétrica é definida como a capacidade que um corpo tem de opor-se à passagem da corrente elétrica. A unidade de medida da resistência no SI é o Ohm (Ω), em homenagem ao físico alemão George Simon Ohm, e representa a razão volt/Ampére. Quando um condutor é submetido a uma diferença de potencial, ele passa a ser percorrido por uma corrente elétrica, que é constituída pelo movimento de elétrons livres no interior do condutor. Quando esses elétrons livres entram em movimento, começam a colidir entre si e com os átomos do condutor. Quanto maior o número de colisões, maior a dificuldade encontrada pela corrente elétrica em “atravessar” o condutor. Essa dificuldade de movimento das cargas é que caracteriza a resistência elétrica. A resistência elétrica varia conforme o comprimento, a largura e a natureza do material do condutor, além da temperatura a que ele é submetido.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045879184087593030/unknown.png)

### Protoboard ou matriz de contato é uma placa com diversos furos e conexões condutoras verticais e horizontais para a montagem de circuitos elétricos experimentais. Seu uso tem a vantagem de dispensar a soldagem. As placas variam entre 830 e 6000 furos. Uma protoboard possui orifícios dispostos em colunas e linhas.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045879647801462878/unknown.png)

### Os Jumpers são pequenos fios condutores que podem ser conectados a uma protoboard para interligar dois pontos do circuito em projetos eletrônicos, geralmente utilizados em conexões com Arduino, Raspberry Pi, entre outros.
![Logo](https://cdn.discordapp.com/attachments/1036750972598374460/1045880902619770931/unknown.png)

### Servomotor é um atuador eletromecânico, que apresenta movimento proporcional a um comando, como dispositivos de malha fechada, ou seja: recebem um sinal de controle eletrônico; que verifica a posição atual para controlar o seu movimento indo para a posição desejada com velocidade monitorada externamente sob feedback de um dispositivo denominado taco ou sensor de efeito Hall ou encoder, dependendo do tipo de servomotor e aplicação.
## Conclusões