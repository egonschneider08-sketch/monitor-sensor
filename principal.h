#include "Projeto.h"

void setup() {
  Serial.begin(9600);
  
  setupSensores();
  setupAtuadores();
  setupDisplay();
  setupMemoria();
}

void loop() {
  lerSensores();
  controlarAtuadores();
  atualizarDisplay();
  gerenciarMemoria();

  // Print Serial original mantido no main
  Serial.print("Nivel: ");
  Serial.print(nivel);
  Serial.print("% | Consumo: ");
  Serial.print(consumo);
  Serial.print(" L | Bomba: ");
  Serial.println(bombaLigada ? "Ligado" : "Desligado");

  delay(300);
}
