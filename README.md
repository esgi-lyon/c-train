# C starter

# run

- Follow this for auto build on save [answer](https://stackoverflow.com/a/64583641/11132253)

- Or `make`

# Windows

powershell : 

```pw
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://chocolatey.org/install.ps1'))
choco install mingw -y
choco install make -y
```
or
```pw
Invoke-WebRequest -Uri "https://github.com/microsoft/winget-cli/releases/download/v0.1.4331-preview/Microsoft.DesktopAppInstaller_8wekyb3d8bbwe.appxbundle" -OutFile "C:\TEMP\WinGet.appxbundle"
Add-AppxPackage "C:\TEMP\WinGet.appxbundle"
winget install -e --id GnuWin32.Make
winget install -e --id Bloodshed.Dev-C++
```