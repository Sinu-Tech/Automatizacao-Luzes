# Colaboradores

[Kevenny](https://www.github.com/KevennyJS)

[Ericles](https://www.github.com/Ericles-Porty)

[Maria Milena](https://www.github.com/MariaMilena)

## Introdução

Antes, imaginava-se um cenário onde as casas automatizadas apenas eram reais em filmes de ficção científica, porém, este contexto ja está se tornando realidade para algumas pessoas. 

O funcionamento de uma automação residencial, dá-se por um conjunto de equipamentos tecnológicos com a capacidade de executar eventos programados afim de oferecer praticidade e facilidade as pessoas.

## Objetivo Geral

Nosso projeto foi iniciado a partir do incentivo do professor André, durante a matéria optativa da Universidade Federal de Sergipe, Tópicos Especiais de Hardware. Este, tem como Objetivo principal a automação residencial levando em consideração a comodidade e economias que a tecnologia pode proporcionar.
## Objetivo Especifico

- Gerenciamento e auditoria de pessoas na propriedade.
- Controle de luzes com objetivo liga-las com a presença de pessoas no ambiente, assim como desliga-las quando não houverem.
- Abertura e fechamento automatico de portas pela presença.
## Solução proposta
    
A solução proposta sugere a utilização de microcontroladores como ESP32 ou Arduino para gerenciar os modulos que são acomplados aos microcontroladores (como RFID, Ultrassonico, etc) em conjunto com middlewares para que possam ser automatizados e auditados.
## Arquitetura da solução

Demonstração de conexão com o Sensor de distância

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1046801237087101048/Fantastic_Lappi-Stantia.png" alt="drawing" width="700"/>

(Infelizmente na aplicação onde eu estava construindo o esquema visual, não tinha sensor FRID pra poder demonstrar a conexão dele com o servomotor)

## Materiais e métodos

<img src="https://user-images.githubusercontent.com/29051590/204102079-29a569ed-54cc-4b80-bc17-590cc8726f13.png" alt="drawing" width="700"/>

Para auditoria e logs, foi usado o serviço do Firebase, onde são armazenados contendo uma descrição e horário do que e quando foi acionado.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045876476068778114/unknown.png" alt="drawing" width="200"/>

O Sensor de Distância Ultrassônico US-015 é capaz de medir distâncias de 2cm a 4m com excelente precisão. Este módulo possui um circuito pronto com emissor e receptor acoplados e 4 pinos (VCC, Trigger, ECHO, GND) para medição.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045877266665705552/unknown.png" alt="drawing" width="200"/>

O módulo RFID é um sistema composto por uma antena (também chamada de transceptor) que recebe e armazena os dados de um token, que pode ser um cartão ou um bottom. O transceptor emite, através de uma antena, sinais de rádio para ativar o Tag, que por sua vez, reponde uma mensagem ao receptor com a informações armazenadas em seu chip. Uma tag é composta, basicamente, por um chip, que armazena informações, e uma antena.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045877839561506976/unknown.png" alt="drawing" width="200"/>

O Display LCD 16x2 é um modelo de display vastamente utilizado em projetos onde se necessita uma interface homem-máquina (IHM). Ele é composto por 16 colunas e 2 linhas com a escrita na cor branca e sua backlight (luz de fundo) azul para exibição de caracteres, letras e números de forma clara e nítida, melhorando a visibilidade para quem recebe a informação. O Display LCD 16x2 utiliza o controlador HD44780, utilizado em toda indústria de LCD's como base de interface que pode ser operado em 4 ou 8-bits paralelamente. Sua conexão é feita através de 16 pinos, sendo 12 deles para conexão básica com o microcontrolador e 11 deles pinos de entrada/saída (I/O) e os demais pinos para ajuste de contraste através de potenciômetros, trimpots e afins e para a alimentação da backlight. Também é possível fazer a comunicação I2C com um microcontrolador. Fácil interação com qualquer microcontrolador, como Arduino, Raspberry, Pic, entre outros, o display 16x2 ideal para empresas de tecnologia, projetistas, estudantes, hobbystas e iniciantes na profissão de programação.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045878181552476180/unknown.png" alt="drawing" width="200"/>

A placa Arduino MEGA 2560 é uma ótima opção para expandir seus projetos, quando há a necessidade de mais pinos ou quantidade de memória FLASH. Possui desempenho parecido com a placa Arduino UNO, porém possibilitando maior quantidades de recursos, como mais entradas analógicas e saídas PWM.


<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045878510243303434/unknown.png" alt="drawing" width="200"/>

Led difuso é um led onde o encapsulamento plástico é fosco, assim vc consegue visualizar ele facilmente na luz do dia. geralmente é utilizado apenas para vc saber que algo está ligado e tal. Os outros tipos são "cristalinos", onde a luz é direcionada pra frente.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045878637808848926/unknown.png" alt="drawing" width="200"/>


Os potenciômetros são usados nos equipamentos para permitir a mudança do regime de operação! Por exemplo, o potenciômetro de volume permite o aumento ou diminuição do nível da intensidade do som, já o potenciômetro de brilho permite o controle de luminosidade das imagens.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045878818440740904/unknown.png" alt="drawing" width="200"/>

A resistência elétrica é definida como a capacidade que um corpo tem de opor-se à passagem da corrente elétrica. A unidade de medida da resistência no SI é o Ohm (Ω), em homenagem ao físico alemão George Simon Ohm, e representa a razão volt/Ampére. Quando um condutor é submetido a uma diferença de potencial, ele passa a ser percorrido por uma corrente elétrica, que é constituída pelo movimento de elétrons livres no interior do condutor. Quando esses elétrons livres entram em movimento, começam a colidir entre si e com os átomos do condutor. Quanto maior o número de colisões, maior a dificuldade encontrada pela corrente elétrica em “atravessar” o condutor. Essa dificuldade de movimento das cargas é que caracteriza a resistência elétrica. A resistência elétrica varia conforme o comprimento, a largura e a natureza do material do condutor, além da temperatura a que ele é submetido.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045879184087593030/unknown.png" alt="drawing" width="200"/>

Protoboard ou matriz de contato é uma placa com diversos furos e conexões condutoras verticais e horizontais para a montagem de circuitos elétricos experimentais. Seu uso tem a vantagem de dispensar a soldagem. As placas variam entre 830 e 6000 furos. Uma protoboard possui orifícios dispostos em colunas e linhas.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045879647801462878/unknown.png" alt="drawing" width="200"/>

Os Jumpers são pequenos fios condutores que podem ser conectados a uma protoboard para interligar dois pontos do circuito em projetos eletrônicos, geralmente utilizados em conexões com Arduino, Raspberry Pi, entre outros.

<img src="https://cdn.discordapp.com/attachments/1036750972598374460/1045880902619770931/unknown.png" alt="drawing" width="200"/>

Servomotor é um atuador eletromecânico, que apresenta movimento proporcional a um comando, como dispositivos de malha fechada, ou seja: recebem um sinal de controle eletrônico; que verifica a posição atual para controlar o seu movimento indo para a posição desejada com velocidade monitorada externamente sob feedback de um dispositivo denominado taco ou sensor de efeito Hall ou encoder, dependendo do tipo de servomotor e aplicação.
## Conclusões

Levando em consideração todo o projeto desenvolvido, podemos perceber que a utilização de microcontroladores para a automação de casas e ambientes, além de serem mais baratas, podem ser programaveis para uma melhor adequação a demanda e necessidade do utilizador.

## Referencias:

[Sensor Ultrassonico](https://www.piauino.com.br/pd-836959-modulo-sensor-de-distancia-ultrassonico-us-015.html)

[RFID](https://flaviobabos.com.br/rfid-arduino/)

[Display](https://www.filipeflop.com/blog/como-utilizar-o-display-lcd-16x2/)

[Arduino MEGA](https://embarcados.com.br/arduino-mega-2560/#:~:text=A%20placa%20Arduino%20MEGA%202560%20é%20uma%20ótima%20opção%20para,entradas%20analógicas%20e%20saídas%20PWM.)

[Leds](https://www.robocore.net/modules.php?name=Forums&file=viewtopic&t=3130#:~:text=Led%20difuso%20é%20um%20led,nunca%20vi%20de%20outra%20forma)

[Potênciometro](https://www.mundodaeletrica.com.br/potenciometro-o-que-e-como-funciona/#:~:text=Os%20potenciômetros%20são%20usados%20nos,controle%20de%20luminosidade%20das%20imagens.)

[Resistencia](https://brainly.com.br/tarefa/14401487)

[Protoboard](https://pt.wikipedia.org/wiki/Placa_de_ensaio)

[Jumppers](https://escapuliu.com.br/o-que-e-um-jumper-arduino/)

[Servomotor](https://pt.wikipedia.org/wiki/Servomotor#:~:text=O%20Servomotor%20é%20um%20atuador,velocidade%20monitorada%20externamente%20sob%20feedback)