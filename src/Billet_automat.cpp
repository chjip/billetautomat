//============================================================================
// Name        : Billet_automat.cpp
// Author      : Viktor
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Automat.h"
using namespace std;

int main() {
	Automat a;
	//a.print();
	a.addCoins(FEM, 10);
	a.addCards(_3z, 3);
	a.print();
	a.buy(_2z, EN_HUND);
	return 0;
}
