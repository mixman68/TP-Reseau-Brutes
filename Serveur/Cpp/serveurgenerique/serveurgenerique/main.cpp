#include "serveur.h"
#include <iostream>

using namespace std;

int main(){

	serveur *MyServer = new serveur(5678);
	if(MyServer->init()!=0){
		cerr << "ne peut initialiser le serveur"<< endl;
		return 1;
	}

	if(MyServer->start()!=0){
		cerr << "ne peut d�marrer le serveur"<< endl;
		return 1;
	}

	return 0;
}
