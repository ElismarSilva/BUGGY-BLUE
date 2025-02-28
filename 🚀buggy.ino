/* Projeto buggy desenvolvido por Elismar Silva
   19 de Novembro 2022
   Github(https://github.com/ElismarSilva)
*/

// Inclusão das bibliotecas
#include <SensorUltrasonico.h>  // Inclusão da biblioteca do sensor ultrassônico
#include <Servo.h>

#define direcao 2  // Pino do servo da direção
#define motor_E 3  // Pino do servo do lado esquerdo
#define motor_D 4  // Pino do servo do lado direito
#define farol 5    // Pino dos faróis
#define buzina 7   // Pino da buzina

SensorUltrasonico dist_Cm(10, 11);

// Criação dos objetos dos servos
Servo motor_Esquerdo;
Servo motor_Direito;
Servo motor_direcao;

void direcao_E();
void direcao_Centro();
void Parado();
void direcao_D();
void Frente();
void Tras();

bool aux = false;  // Variável para alternar entre andar e parar

void setup() {
  motor_direcao.attach(direcao);
  motor_Esquerdo.attach(motor_E);
  motor_Direito.attach(motor_D);
  pinMode(farol, OUTPUT);
  pinMode(buzina, OUTPUT);
  Serial.begin(9600);
  digitalWrite(farol, HIGH);
  direcao_Centro();
}

void loop() {
  double dist = dist_Cm.distanciaCM();
  Serial.println(dist);

  if (Serial.available()) {
    char comando = Serial.read();
    Serial.println(comando);

    switch (comando) {
      case 'F':
        {
          if (dist > 15) {
            aux = !aux;  // Alterna entre andar e parar
          }

          if (aux == true && dist > 15) {
            Frente();
          } else {
            Parado();
          }
          break;
        }
      case 'T':
        {
          Tras();
          break;
        }
      case 'P':
        {
          Parado();
          break;
        }
      case 'E':
        {
          direcao_E();
          break;
        }
      case 'D':
        {
          direcao_D();
          break;
        }
      case 'C':
        {
          direcao_Centro();
          break;
        }
      case 'B':
        {
          for (int i = 0; i < 2; i++) {
            tone(buzina, 280);
            delay(100);
            noTone(buzina);
            delay(100);
          }
          break;
        }
      case 'L':
        {
          static bool oN_Off = false;
          oN_Off = !oN_Off;
          digitalWrite(farol, oN_Off);
          break;
        }
    }
  }

  // Se o robô estiver andando para frente e um obstáculo aparecer, ele para
  if (aux && dist <= 15) {
    Parado();
    aux = false;
  }
}

// Funções de controle do robô
void Frente() {
  motor_Esquerdo.write(180);
  motor_Direito.write(0);
}

void Tras() {
  motor_Esquerdo.write(0);
  motor_Direito.write(180);
}

void Parado() {
  motor_Esquerdo.write(90);
  motor_Direito.write(90);
}

void direcao_E() {
  motor_direcao.write(120);
}

void direcao_Centro() {
  motor_direcao.write(97);
}

void direcao_D() {
  motor_direcao.write(74);
}
