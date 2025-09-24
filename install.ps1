# install.ps1
# Script d’installation et configuration de l’environnement (Windows PowerShell)

###############################
#   basic ssh config
###############################

function KeyGen {
    if (-Not (Test-Path "$HOME\.ssh")) {
        New-Item -ItemType Directory -Path "$HOME\.ssh" | Out-Null
    }
    ssh-keygen -t rsa -b 4096 -f "$HOME\.ssh\id_rsa" -N ""
    $Global:my_public_key = Get-Content "$HOME\.ssh\id_rsa.pub"
}

Write-Host "Do you want to create your SSH key ? y/n"
$response = Read-Host
switch ($response) {
    "y" { KeyGen }
    "n" { Write-Host "ok let's keep going" }
    default { Write-Host "Invalid Choice" }
}

###############################
#   Git installation
###############################

Write-Host "You will need git, let's install it..."

# Vérifie si git est déjà installé
if (-Not (Get-Command git -ErrorAction SilentlyContinue)) {
    # Utilisation de winget (nécessite Windows 10+ avec winget installé)
    winget install --id Git.Git -e --source winget
} else {
    Write-Host "Git already installed."
}

###############################
#   Git config
###############################

Write-Host "You will need to configure some things"
Start-Sleep -Seconds 1

$name = Read-Host "Enter your name"
git config --global user.name "$name"

$mail = Read-Host "Enter your email"
git config --global user.email "$mail"

Write-Host "The next step is on your own:"
Write-Host "1) Go to https://github.com/login"
Write-Host "2) Then go to SETTINGS --> SSH and GPG keys, click 'New SSH Key' and paste:"
Write-Host $my_public_key
Write-Host ""

###############################
#   Build env
###############################

# Clone mini-moulinette
Set-Location $HOME
if (-Not (Test-Path "$HOME\mini-moulinette")) {
    git clone https://github.com/khairulhaaziq/mini-moulinette.git
}
Add-Content -Path $PROFILE -Value "Set-Alias mini '$HOME\mini-moulinette\mini-moul.sh'"
. $PROFILE

###############################
#   Norminette (facultatif)
###############################

function PipxInstall {
    winget install --id Python.Python.3.11 -e --source winget
    python -m pip install --upgrade pip
    python -m pip install pipx
    python -m pipx ensurepath
    pipx install norminette
}

Write-Host "Do you have python3 ? y/n"
$response = Read-Host
switch ($response) {
    "y" { python -m pip install -U norminette }
    "n" { PipxInstall }
    default { Write-Host "something went wrong" }
}

Write-Host "Installation complete!"

