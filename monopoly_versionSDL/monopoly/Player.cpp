#include<iostream>
#include<string>
#include "Player.h"

 Player::Player(){ // @suppress("Class members should be properly initialized")
	 playerName="John";
	 Location=0;
	 gamePieceName="Hat";
	 moneyAmount=10000;
	 pixelLocation.x=...;
	 pixelLocation.y=...;

	}

 Player::Player(int money){ // @suppress("Class members should be properly initialized")
	string name;
	playerName= name;
	Location=0;
	moneyAmount= money;
}

 string Player::getPlayerName(){
	return playerName;
}


 Coordinates Player::getpixelLocation(){
	return pixelLocation;
}


 void Player::giveMoney(int amount){
	moneyAmount=moneyAmount+amount;
}


 void Player::movePlayer(int number){
	Location=Location+number;
}


 void Player::reset(){

}

 void Player::setGamePieceName(string inputPieceName){
	gamePieceName=inputPieceName;
}

 void Player::setLocation(int inputSpace){
	 Location=inputSpace;
}

 void Player::setPalyerName(string inputName){
	playerName=inputName;
}

 void Player::setPixelLocation(Coordinates location){
	 pixelLocation=location;
 }
 void Player::setmoneyAmount(int inputNum){
	 moneyAmount=inputNum;
 }

 void Player::takeMoney(int amount){
	 moneyAmount=moneyAmount-amount;
 }
