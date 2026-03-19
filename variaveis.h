#include "Projeto.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);
Servo valvula;

const int potPin = A0;
const int motorPin = 9;
const int servoPin = 10;
const int led10 = 2;
const int led30 = 3;
const int led50 = 4;
const int led70 = 5;
const int led90 = 6;

int nivel = 0;
int nivelAnterior = 0;
unsigned long consumo = 0;
unsigned long consumoSalvo = 0;
bool bombaLigada = false;
unsigned long tempoAnterior = 0;
unsigned long tempoEEPROM = 0;
int tela = 0;
const int enderecoEEPROM = 0;
