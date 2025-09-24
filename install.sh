#!/bin/bash

###############################
#	basic ssh config
##############################

keygen() {	
	cd ~/.ssh
	ssh-keygen -t rsa -b 4096 -f ~/.ssh/id_rsa -N ""
	export my_public_key=$(cat id_rsa.pub)
	cd ~
}

echo Do you want to create you ssh key ? y/n
read -e response
case $response in
	"y") keygen ;;
	"n") echo ok let\'s keep going ;;
	*) echo Invalid Choice
esac

echo You will need git let\' install it

sudo apt update && sudo apt install -y git

echo You will need to configure some things
echo Let me help you ...
sleep 1

echo First we need a name :
echo Enter your name : 
read -e name
git config --global user.name "$name"

sleep 1
echo Then we need an email :
read -e mail
git config --global user.email "$mail"

echo The next step is on your own 
echo "1) Go to http://github.com/login "
echo "2) Then Go to SETTINGS-->SSH-KEY, click 'add a New Key' and paste : "
echo $my_public_key
echo

#####################
#	build env
#####################

#########################################
#	moulinette (correction exercices)
cd ~
git clone https://github.com/khairulhaaziq/mini-moulinette.git
echo "alias mini='~/mini-moulinette/mini-moul.sh'" >> ~/.bashrc && source ~/.bashrc
#	use --> cd c02 && mini c02

########################################
#	norminette (facultatif)

pipxInstall() {
	sudo apt update
	sudo apt install python3-setuptools
	sudo apt install pipx
	pipx install norminette
	pipx ensurepath

	hash -r
}

echo Do you have python3 ? y/n
read -e response
case $response in
	"y") python3 -m pip install -U norminette ;;
	"n") pipxInstall ;;
	*) echo something went wrong ;;
esac

echo Instalation complete !
