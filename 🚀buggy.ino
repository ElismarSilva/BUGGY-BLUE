
/*Projeto buggy desenvolvido por Elismar Silva
  19 de Novembro 2022
   Github(https://github.com/Olamundoio)
*/

//inclusao das blibliotecas>>
#include <SensorUltrasonico.h> //inclusao da biblioteca 
#include <Servo.h>
#define direcao 2  // pino do servo da direcao
#define motor_E 3 // pino do servo do lado esquerdo
#define motor_D 4 // pino do servo do lado direito
#define farol   5 // pino dos farois 
#define buzina  7 // pino da buzina 

SensorUltrasonico dist_Cm(10, 11);

// criacao de objeto dos servos
Servo motor_Esquerdo;
Servo motor_Direito;
Servo motor_direcao;

void direcao_E();
void direcao_Centro();
void Parado();
void direcao_D();
void Frente();
void Tras();



void setup() {

  motor_direcao.attach(direcao);
  motor_Esquerdo.attach( motor_E);
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
  //Variaveis auxiliares
  static boolean oN_Off = false;  // variavel aux do comando farol('L' liga / desliga)
  static boolean aux = false; // variavel aux do comando frente('F' frente / tras)


  if(Serial.available()) {
    char comando = Serial.read();
    Serial.println(comando);


    switch (comando) {

      case 'F': {
          aux = !aux;
          if (aux == true) {
            Frente();
          } else
            Parado();
          break;
        }

      case 'T': {
          Tras();
          break;
        }
      case't': {
          Parado();
          break;
        }

      case 'E': {
          direcao_E();
          break;
        }
      case 'D': {
          direcao_D();
          break;
        }
      case 'C': {
          direcao_Centro();
          break;
        }
      case 'B': {
          for (int i = 0; i < 2; i++) {
            tone(buzina, 280);
            delay(100);
            noTone(buzina);
            delay(100);
          }
        }
    }

    if (comando == 'L' ) {
      oN_Off = !oN_Off;
      if (oN_Off == true)
        digitalWrite(farol, true);
      else
        digitalWrite(farol, false);
    }

  }
}

//Funções
void Frente() {
  motor_Esquerdo.write(180); // os motores se movimentam no sentido horario
  motor_Direito.write(0);
}
void Tras() {
  motor_Esquerdo.write(0); // os mtores se movimentam no sentido anti-horario
  motor_Direito.write(180);
}
void Parado() {
  motor_Esquerdo.write(90); // os motores param de girar
  motor_Direito.write(90);
}
void direcao_E() {
  motor_direcao.write(120); // o servo motor gira para esquerda

}
void direcao_Centro() {
  motor_direcao.write(97); // o servo motor fica centralizado
}
void direcao_D() {
  motor_direcao.write(74); // o servo motor gira para a direita
}
