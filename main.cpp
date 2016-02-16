#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
/* I oczywiscie, ze musial mnie zgubic srednik niemawisci :/*/
	bool bolek=true;
	bool pentla=true;

int main() {
	string komenda;
	string zmienna;
	while ( pentla==true ){
	
	

	if (bolek==true){ 
	system("cls");
	cout<<"...Coraz wiecej mozna teraz uslyszec o nich w krainach polnocy" <<endl;
	cout<<"Prosty lud uznal ich najemnikow szukajacych latwego zarobku" <<endl;
	cout<<"Poeci natomiast nazywali ich wojownikami zadaj?cymi sprawiedliwosci"<<endl;
	cout<<"Prawda byly obie tezy chodziaz reszte ich celow okrywala mgla tajemnicy"<<endl;
	cout<<"......................................................................."<<endl;
	cout<< "Jesli chcesz przejsc dalej wpisz komende dalej"<<endl;
	cout<< "W razie problemow uzyj komendy help"<<endl;
	cout<< "Aby wyjsc wpisz wyjscie"<<endl;
	cout<<zmienna<<endl;
	zmienna="";
	bool bolek=false;
	cin>> komenda;
}
	if (komenda=="help"){
		 system("cls");
		cout<< "Wybierz ktoras z opcji"<<endl;
		cout<<"......................."<<endl;
		cout<< "Jesli chcesz przejsc dalej wpisz komende dalej"<<endl;
	    cout<< "W razie problemow uzyj komendy pomoc"<<endl;
	    cout<< "Aby wyjsc wpisz wyjscie"<<endl;
	    cin>>komenda;
	}
	if (komenda=="dalej"){
		 system("cls");
		cout<<"Dalsze czesc tej histori jest zamazana. Najwyrazniej nikt jej nigdy nie uslyszy"<<endl;
		cout<<"<-powrot dalej->"<<endl;
		komenda="x";
		cin>>komenda;
		if (komenda=="powrot"){
		}
		if (komenda=="dalej"){
			cout<<"Nie masz tu juz czego szukac"<<endl;
			if(komenda!="dalej"&&"powrot"){
			cout<<"zla komenda"<<endl;
		}
		cin>>komenda;
		}
		
	}
	if (komenda=="wyjscie"){
		exit(0);
		pentla=false;
		bolek=false;
	}
			if (komenda!="wyjscie"||"dalej"||"help"||"x"){
		system("cls");
		zmienna="zla komenda";
		pentla=true;
}	
}



	
	
	return 0;
}
