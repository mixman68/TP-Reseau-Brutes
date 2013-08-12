#ifndef BONUSES_H
#define BONUSES_H
class Bonuses
{
public:
	
	Bonuses(void);
	virtual ~Bonuses(void);
	void setLevel(int);
	void setLife(int);
	void setStrenght(int);
	void setSpeed(int);
	void setName(string);
	int getLife();
	int getLevel();
	int getStrenght();
	int getSpeed();
	string getName();
	
private:
	
	string name;
	int level, life, strenght, speed;

};
#endif

