@echo off
start "arma2" /min /high arma2oaserver.exe -port=2302 "-config=C:\DZE_Server_Config\15_namalsk.cfg" "-cfg=C:\DZE_Server_Config\basic.cfg" "-profiles=C:\DZE_Server_Config" -name=server "-mod=@namalsk;@DayZ_Epoch;@DayZ_Epoch_Server;"
