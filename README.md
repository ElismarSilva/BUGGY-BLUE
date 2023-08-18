# Buggy Controlado por Arduino

Este é um projeto de buggy controlado remotamente utilizando um Arduino e diversos componentes eletrônicos. O projeto permite controlar a direção, velocidade, faróis e buzina do buggy por meio de comandos enviados via comunicação serial.

## Autor e Biblioteca Ultrassônica

Este projeto utiliza uma biblioteca ultrassônica personalizada desenvolvida por Elismar Silva, que permite medições precisas de distâncias usando um sensor ultrassônico. A biblioteca foi criada especialmente para este projeto e facilita a integração do sensor aos sistemas de controle do buggy.

A biblioteca ultrassônica pode ser encontrada no repositório [https://github.com/ElismarSilva/SensorUltrasonico).

## Funcionalidades

- Controle de direção: Você pode girar o buggy para a esquerda, centro ou direita.
- Controle de movimento: O buggy pode se mover para frente e para trás.
- Faróis: É possível ligar e desligar os faróis do buggy.
- Buzina: Acione a buzina para emitir um som.

## Componentes Utilizados

- Sensor Ultrassônico: Utilizado para medir a distância de obstáculos.
- Servos Motores: Controlam a direção e movimento do buggy.
- LEDs: Indicam o estado dos faróis.
- Buzzer: Utilizado para emitir o som da buzina.
- Arduino: Controla todos os componentes e executa os comandos.

## Configuração

1. Conecte os componentes de acordo com o esquema de pinagem.
2. Carregue o código do projeto no Arduino.
3. Abra o monitor serial para enviar comandos.

## Comandos

- 'F': Move o buggy para frente.
- 'T': Move o buggy para trás.
- 'E': Gira a direção do buggy para a esquerda.
- 'D': Gira a direção do buggy para a direita.
- 'C': Centraliza a direção do buggy.
- 'B': Aciona a buzina.
- 'L': Liga/desliga os faróis.

## Créditos

Autor: Elismar Silva
