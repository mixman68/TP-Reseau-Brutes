#include "StdAfx.h"
#include "Brute.h"



Brute::Brute(void):
level(0), life(100), strenght(0), speed(0)
{

}



Brute::~Brute(void)
{ 
}


void Brute::setLife(int _life){
	life=_life;
}


void Brute::setLevel(int _level){
	level=_level;
}


void Brute::setStrenght(int _strenght){
	strenght=_strenght;
}


void Brute::setSpeed(int _speed){
	speed=_speed;
}


void Brute::setBonus(Bonuses _bonus){
	bonus=_bonus;
}

string Brute::getName()
{
	return name;
}

void Brute::setName(string _name)
{
	name=_name;
}


int Brute::getLife(){
	return life;
}


int Brute::getLevel(){
	return level;
}


int Brute::getStrenght(){
	return strenght;
}


int Brute::getSpeed(){
	return speed;
}


Bonuses Brute::getBonus(){
	return bonus;
}