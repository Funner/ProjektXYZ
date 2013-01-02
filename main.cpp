#include <iostream>
#include <string>
using namespace std;

class Postava
{
public:
	Postava();
	~Postava(){}
	
	int ZjistiLevel(){return level;}
	string ZjistiRasu(){return rasa;}
	string ZjistiPovolani(){return povolani;}
	string ZjistiPrezdivku(){return prezdivka;}
	double ZjistiSilu(){return sila;}
	double ZjistiInteligenci(){return inteligence;}
	double ZjistiZdravi(){return zdravi;}
	double ZjistiBrneni(){return brneni;}
	double ZjistiZkusenosti(){return zkusenosti;}

	void NastavLevel(int l){level = l;}
	void NastavRasu(string r){rasa = r;}
	void NastavPovolani(string p){povolani = p;}
	void NastavPrezdivku(string p){prezdivka = p;}
	void NastavSilu(double s){sila = s;}
	void NastavInteligenci(double i){inteligence = i;}
	void NastavZdravi(double z){zdravi = z;}
	void NastavBrneni(double b){brneni = b;}
	void NastavZkusenosti(double z){zkusenosti = z;}
private:
	int level;

	string rasa;
	string povolani;
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

	rasa = "";
	povolani = "";
	prezdivka = "";

	sila = NULL;
	inteligence = NULL;
	zdravi = NULL;
	brneni = NULL;
	zkusenosti = NULL;
}

void Inicializace(int level, string rasa, string povolani, string prezdivka, double sila, double inteligence, double zdravi, double brneni, double zkusenosti);
bool PostavaData();

int main()
{
	if (PostavaData() == true)
	{
		cout << "Ukoncuji hru!";
	}
	return 0;
}

void Inicializace(int level, string rasa, string povolani, string prezdivka, double sila, double inteligence, double zdravi, double brneni, double zkusenosti)
{
	Postava *ukPostava = new Postava();
	ukPostava->NastavLevel(level);
	ukPostava->NastavRasu(rasa);
	ukPostava->NastavPovolani(povolani);
	ukPostava->NastavPrezdivku(prezdivka);
	ukPostava->NastavSilu(sila);
	ukPostava->NastavInteligenci(inteligence);
	ukPostava->NastavZdravi(zdravi);
	ukPostava->NastavBrneni(brneni);
	ukPostava->NastavZkusenosti(zkusenosti);
}
bool PostavaData()
{
	bool OK = false;

	string rasaData[3];
	rasaData[0] = "Elf";
	rasaData[1] = "Clovek";
	rasaData[2] = "Ork";

	string povolaniData[3];
	povolaniData[0] = "Valecnik";
	povolaniData[1] = "Kouzelnik";
	povolaniData[2] = "Zlodej";

	double vlastnosti[3][4];
	// Valecnik
	vlastnosti[0][0] = 100;
	vlastnosti[0][1] = 20;
	vlastnosti[0][2] = 400;
	vlastnosti[0][3] = 60;
	// Kouzelnik
	vlastnosti[0][0] = 20;
	vlastnosti[0][1] = 150;
	vlastnosti[0][2] = 200;
	vlastnosti[0][3] = 15;
	// Zlodej
	vlastnosti[0][0] = 50;
	vlastnosti[0][1] = 50;
	vlastnosti[0][2] = 250;
	vlastnosti[0][3] = 30;

	int level = 1;
	int zkusenosti = 0;
	int rasa = NULL;
	int povolani = NULL;

	string prezdivka = "";

	cout << "Probudil jses v potemelem skelep. Hrozne te boli hlava a mas promocene saty. V tom uslysis kroky! Rychle se podivas za sebe a uvidis cloveka. A ten na tebe zpusti co jsi zac ? Jak se jmenujes ? (Zadejte sve jmeno)" << endl;
	getline(cin, prezdivka);
	cout << "Aaaah, rikas ze se jmenujes " << prezdivka << " ? Divne nikoho s tak smesnym jmenem jsem dlouho nevidel. Nevadi. Odkud pochazis cizince ? (Vyberte si rasu 0=Elf, 1=Clovek, 2=Ork)" << endl;
	cin >> rasa;
	cin.ignore();
	if (rasa != 0 && rasa != 1 && rasa != 2)
	{
		cout << "Bohuzel jste nezvladl vyplnit zakladni udaje spravne, restartujte prosim hru!" << endl;
		OK = true;
		return OK;
	}
	cout << "Fuj tvoji rodice museli byt pekne prasata, ze splodili takoveho hnusneho " << rasaData[rasa] << "a !" << endl;
	cout << "A co jsi vubec zac, cim se zivis ? A co tu vubec pohledavas v takove dire ? (Vyberte si povolani 0=Valecnik, 1=Kouzelnik, 2=Zlodej)" << endl;
	cin >> povolani;
	cin.ignore();
	if (povolani != 0 && povolani != 1 && povolani != 2)
	{
		cout << "Bohuzel jste nezvladl vyplnit zakladni udaje spravne, restartujte prosim hru!" << endl;
		OK = true;
		return OK;
	}
	if (OK == false)
	{
	cout << "No nic, vypal z meho sklepa a tahni si spat jinde! At uz te tu nevidim!" << endl;
	Inicializace(1, rasaData[rasa], povolaniData[povolani], prezdivka, vlastnosti[povolani][0],vlastnosti[povolani][1],vlastnosti[povolani][2],vlastnosti[povolani][3], zkusenosti);
	}
	return OK;
}