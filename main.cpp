#include <iostream>
#include <string>
using namespace std;

class Postava
{
public:
  Postava();
	~Postava(){}
	
	int ZjistiLevel(){return level;}
	int ZjistiRasu(){return rasa;}
	string ZjistiPrezdivku(){return prezdivka;}
	double ZjistiSilu(){return sila;}
	double ZjistiInteligenci(){return inteligence;}
	double ZjistiZdravi(){return zdravi;}
	double ZjistiBrneni(){return brneni;}
	double ZjistiZkusenosti(){return zkusenosti;}

	void NastavLevel(int l){level = l;}
	void NastavRasu(int r){rasa = r;}
	void NastavPrezdivku(string p){prezdivka = p;}
	void NastavSilu(double s){sila = s;}
	void NastavInteligenci(double i){inteligence = i;}
	void NastavZdravi(double z){zdravi = z;}
	void NastavBrneni(double b){brneni = b;}
	void NastavZkusenosti(double z){zkusenosti = z;}
private:
	int level;
	int rasa;

	string prezdivka;

	double sila;
	double inteligence;
	double zdravi;
	double brneni;
	double zkusenosti;
};

Postava::Postava()
{
	level = NULL;
	rasa = NULL;
	
	prezdivka = "";

	sila = NULL;
	inteligence = NULL;
	zdravi = NULL;
	brneni = NULL;
	zkusenosti = NULL;
}

void Inicializace(int level, int rasa, string prezdivka, double sila, double inteligence, double zdravi, double brneni, double zkusenosti);

int main()
{
	return 0;
}

void Inicializace(int level, int rasa, string prezdivka, double sila, double inteligence, double zdravi, double brneni, double zkusenosti)
{
	Postava *ukPostava = new Postava();
	ukPostava->NastavLevel(level);

}
