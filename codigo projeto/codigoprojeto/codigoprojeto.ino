//Programa : RFID - Controle de Acesso leitor RFID
//Autor : FILIPEFLOP

#include <SPI.h>
#include <MFRC522.h>
#include <LiquidCrystal.h>
unsigned int EchoPin = 7;
unsigned int TrigPin = 8;
unsigned long Time_Echo_us = 0;

unsigned long Len_mm_X100 = 0;
unsigned long Len_Integer = 0;
unsigned int Len_Fraction = 0;

#define SS_PIN 10
#define RST_PIN 9
#define LED_PIN 6
MFRC522 mfrc522(SS_PIN, RST_PIN);   // Create MFRC522 instance.

// LiquidCrystal lcd(6, 7, 5, 4, 3, 2);

char st[20];

void setup()
{
  pinMode(EchoPin, INPUT);
  pinMode(TrigPin, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  Serial.begin(9600);   // Inicia a serial
  SPI.begin();      // Inicia  SPI bus
  mfrc522.PCD_Init();   // Inicia MFRC522
  Serial.println("Aproxime o seu cartao do leitor...");
  Serial.println();
  //Define o número de colunas e linhas do LCD:
  // lcd.begin(16, 2);
  mensageminicial();
}

void acessoLiberado() {
  digitalWrite(LED_PIN, HIGH);
  delay(3000);
  digitalWrite(LED_PIN, LOW);
}

void acessoNegado() {
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
}

void sensorProximidade() {
  digitalWrite(TrigPin, HIGH);
  delayMicroseconds(50);
  digitalWrite(TrigPin, LOW);
  Time_Echo_us = pulseIn(EchoPin, HIGH);

  if ((Time_Echo_us < 60000) && (Time_Echo_us > 1))
  {

    Len_mm_X100 = (Time_Echo_us * 34) / 2;
    Len_Integer = Len_mm_X100 / 1000;
    Len_Fraction = Len_mm_X100 % 100;
    if (Len_Integer > 11) {
    }
    Serial.print("Present Length is: ");
    Serial.print(Len_Integer, DEC);
    Serial.print(".");
    if (Len_Fraction < 10)
      Serial.print("0");
    Serial.print(Len_Fraction, DEC);
    Serial.println("cm");
    delay(1000);
  }
}


void loop()
{
  sensorProximidade();
  // Look for new cards
  if ( ! mfrc522.PICC_IsNewCardPresent())
  {
    return;
  }
  // Select one of the cards
  if ( ! mfrc522.PICC_ReadCardSerial())
  {
    return;
  }
  //Mostra UID na serial
  Serial.print("UID da tag :");
  String conteudo = "";
  byte letra;
  for (byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    conteudo.concat(String(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " "));
    conteudo.concat(String(mfrc522.uid.uidByte[i], HEX));
  }
  Serial.println();
  Serial.print("Mensagem : ");
  conteudo.toUpperCase();
  if (conteudo.substring(1) == "96 2C 26 F8") //UID 1 - Chaveiro
  {
    Serial.println("Ola Kevenny !");
    Serial.println();
    Serial.println("Acesso liberado!");
    acessoLiberado();
    // lcd.clear();
    // lcd.setCursor(0,0);
    // lcd.print("Ola FILIPEFLOP !");
    // lcd.setCursor(0,1);
    // lcd.print("Acesso liberado!");
    delay(3000);
    mensageminicial();
  }

  if (conteudo.substring(1) == "C9 91 C3 56") //UID 2 - Cartao
  {
    Serial.println("Ola Cartao !");
    Serial.println();
    Serial.println("Acesso Negado");
    acessoNegado();
    // lcd.clear();
    // lcd.setCursor(0,0);
    // lcd.print("Ola Cartao !");
    // lcd.setCursor(0,1);
    // lcd.print("Acesso Negado !");
    delay(3000);
    mensageminicial();
  }
}

void mensageminicial()
{
  Serial.println("Aproxime seu cartão do leitor.");
  // lcd.clear();
  // lcd.print(" Aproxime o seu");
  // lcd.setCursor(0,1);
  // lcd.print("cartao do leitor");
}
