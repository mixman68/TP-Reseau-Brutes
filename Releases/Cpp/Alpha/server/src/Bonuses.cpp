#include "StdAfx.h"
#include "Bonuses.h"



Bonuses::Bonuses(void):
	level(0), life(0), speed(0), strenght(0)
{
}



Bonuses::~Bonuses(void)
{
}


void Bonuses::setLife(int _life){
	life=_life;
}


void Bonuses::setLevel(int _level){
	level=_level;
}


void Bonuses::setStrenght(int _strenght){
	strenght=_strenght;
}


void Bonuses::setSpeed(int _speed){
	speed=_speed;
}


void Bonuses::setName(string _name){
	name=_name;
}


int Bonuses::getLife(){
	return life;
}


int Bonuses::getLevel(){
	return level;
}


int Bonuses::getSpeed(){
	return speed;
}


int Bonuses::getStrenght(){
	return strenght;
}


string Bonuses::getName(){
	return name;
}