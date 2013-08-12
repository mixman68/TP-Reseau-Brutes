#ifndef BRUTE_H
#define BRUTE_H

#include "Bonuses.h"

class Brute
{
public:
	
	Brute(void);
	virtual ~Brute(void);
	int getLife();
	int getStrenght();
	int getLevel();
	int getSpeed();
	string getName();
	Bonuses getBonus();
	void setName(string);
	void setLife(int);
	void setLevel(int);
	void setStrenght(int);
	void setSpeed(int);
	void setBonus(Bonuses);

private:

	string name;
	int level, life, strenght, speed;
	Bonuses bonus;

};

#endif

