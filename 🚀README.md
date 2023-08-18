

# Projeto do Buggy e Aplicativo

Este repositório contém dois projetos relacionados a um Buggy: um projeto para controlar o Buggy por meio de um Arduino e outro projeto que envolve o desenvolvimento de um aplicativo para controlar o Buggy utilizando o App Inventor.

## Buggy Controlado por Arduino

Este é um projeto de buggy controlado remotamente utilizando um Arduino e diversos componentes eletrônicos. O projeto permite controlar a direção, velocidade, faróis e buzina do buggy por meio de comandos enviados via comunicação serial.

### Autor e Biblioteca Ultrassônica

Este projeto utiliza uma biblioteca ultrassônica personalizada desenvolvida por Elismar Silva, que permite medições precisas de distâncias usando um sensor ultrassônico. A biblioteca foi criada especialmente para este projeto e facilita a integração do sensor aos sistemas de controle do buggy.

A biblioteca ultrassônica pode ser encontrada no repositório [https://github.com/ElismarSilva/SensorUltrasonico) 

### Funcionalidades

- Controle de direção: Você pode girar o buggy para a esquerda, centro ou direita.
- Controle de movimento: O buggy pode se mover para frente e para trás.
- Faróis: É possível ligar e desligar os faróis do buggy.
- Buzina: Acione a buzina para emitir um som.

### Componentes Utilizados

- Sensor Ultrassônico: Utilizado para medir a distância de obstáculos.
- Servos Motores: Controlam a direção e movimento do buggy.
- LEDs: Indicam o estado dos faróis.
- Buzzer: Utilizado para emitir o som da buzina.
- Arduino: Controla todos os componentes e executa os comandos.

### Configuração

1. Conecte os componentes de acordo com o esquema de pinagem.
2. Carregue o código do projeto no Arduino.
3. Abra o monitor serial para enviar comandos.

### Comandos

- 'F': Move o buggy para frente.
- 'T': Move o buggy para trás.
- 'E': Gira a direção do buggy para a esquerda.
- 'D': Gira a direção do buggy para a direita.
- 'C': Centraliza a direção do buggy.
- 'B': Aciona a buzina.
- 'L': Liga/desliga os faróis.

## Projeto do Buggy App Inventor

Este projeto inclui o arquivo .aia do projeto do Buggy desenvolvido no App Inventor. O arquivo .aia contém todas as informações e elementos necessários para recriar o aplicativo Buggy.

### Como Baixar e Usar o Arquivo .aia

Você pode baixar o arquivo .aia diretamente clicando no link abaixo:

- Arquivo do aplicativo para controle do BUGGY [Baixar Arquivo .aia](Buggy2.aia)

1. Baixe o arquivo .aia para o seu computador.
2. Abra o App Inventor (https://appinventor.mit.edu/) em seu navegador.
3. Faça login em sua conta no App Inventor ou crie uma nova conta, se necessário.
4. No App Inventor, vá para a seção "Meus Projetos".
5. Clique em "Importar Projeto (.aia) do meu computador".
6. Selecione o arquivo .aia que você baixou anteriormente.
7. O projeto do Buggy será importado para o App Inventor.
8. Você pode visualizar e editar o projeto conforme necessário.

### Observações

- Este projeto foi criado para fins educacionais e de aprendizado.
- Certifique-se de verificar os requisitos e configurações necessárias no App Inventor para garantir um bom funcionamento do aplicativo.

## Créditos

Autor: Elismar Silva 




