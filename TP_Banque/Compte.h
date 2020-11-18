#pragma once
#include <string>
class Compte
{
private:
	int numCompte;
	const char* nomProprietaire;
	double solde;
public :
	Compte();
	Compte(int,const char *, double);
	bool retirerArgent(double);
	void deposerArgent(double);
	void consulterSolde() const ;
	void transfererArgent(Compte& c, double s) ;
};

