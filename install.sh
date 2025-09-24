#!/bin/bash

###############################
#	basic ssh config
##############################

keygen() {	
	cd ~/.ssh
	echo "id_rsa" | ssh-keygen
	export my_public_key=$(cat id_rsa.pub)
	cd ~
}

echo Do you want to create you ssh key ? y/n
read -e response
case $response in
	"1") keygen ;;
	"2") echo ok let\'s keep going ;;
esac

echo You will need git let\' install it

sudo apt install git

if (( $? != 0 )) ; then
	echo some shit happened, check your connection
	exit
fi

echo You will need to configure some things
echo Let me help you ...
sleep 1

echo First we need a name :
echo Enter your name : 
read -e name
git --config user.name $name

sleep 1
echo Then we need an email :
read -e mail
git --config user.mail $mail

echo The next step is on your own 
echo "1) Go to http://github.com/login "
echo ""

#-->	ask a name
#-->	ask a mail
#-->	explain where to config ssh ?


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

#	si python
python3 -m pip install -U norminette

#	si pipx
sudo apt update
sudo apt install python3-setuptools
sudo apt install pipx
pipx install norminette
pipx ensurepath


#sudo apt install 42_exam
