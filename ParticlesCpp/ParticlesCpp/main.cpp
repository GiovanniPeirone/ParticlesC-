#include <Windows.h>
#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

using namespace std;


//=====================================

COORD coord = { 0,0 };

void gotoxy(int x, int y)
{
	coord.X = x;//define punto x
	coord.Y = y;//define punto y
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);//Setea la posicion con los puntos definifos
}

void Cusor(bool cursor)
{
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO hinf;
	hinf.dwSize = 50;
	hinf.bVisible = cursor;
	SetConsoleCursorInfo(hcon, &hinf);
}

/*
class particle
{
	public:
		particle(char dise�o, char _Dise�o1, char _Dise�o2, char _Dise�o3);
		~particle();
		void particleChange();
		
	//=============================
	private:
		int TIME;
		char DISE�O1, DISE�O2, DISE�O3;
};

particle::particle(int time,char _Dise�o1, char _Dise�o2, char  _Dise�o3)
{
	TIME = time;
	DISE�O1[1] = _Dise�o1;
	DISE�O2[1] = _Dise�o2;
	DISE�O3[1] = _Dise�o3;
}

particle::~particle()
{
	particle;
}

void particle::particleChange()
{
	 
}
*/






void Simulation(bool VF)
{
	while (VF)
	{
				
	}

}


int main()
{

	
	Cusor(false);
	Simulation(true);

	
	return 0;
}


