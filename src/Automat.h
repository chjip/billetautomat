/*
 * Automat.h
 *
 *  Created on: 17/03/2011
 *      Author: 68-901
 */

#ifndef AUTOMAT_H_
#define AUTOMAT_H_

enum coinType{FEM, TI, TYVE};
enum cardType{_2z, _3z, _4z, _5z, _6z, _7z, _8z, Az};
enum seddelType{EN_HUND, TO_HUND, FEM_HUND, INVALID};

class Automat {
public:
	Automat();
	void addCoins(coinType c, int antal);
	void addCards(cardType k, int antal);
	void print();
	virtual ~Automat();

	void buy(cardType k, seddelType s);

private:
	struct indhold {
		int fem;
		int ti;
		int tyve;
	};
	indhold x;
	void print(indhold);

	void udRegn(int tilbage);

	struct kort {
		int zone_2;
		int zone_3;
		int zone_4;
		int zone_5;
		int zone_6;
		int zone_7;
		int zone_8;
		int zone_A;
	};
	kort y;

};

#endif /* AUTOMAT_H_ */
