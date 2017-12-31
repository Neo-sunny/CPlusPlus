#include <iostream>
#include <string>
using namespace std;

class Souris
{
  /*****************************************************
    Compléter le code à partir d'ici
  *******************************************************/
  public:
	double poids;
	int age;
	string couleur;
	int esperance_vie;
	bool clonee;
	Souris(double poids, string couleur, int age=0, int esperance_vie= 36)
	:poids(poids), age(age), couleur(couleur),  esperance_vie(esperance_vie)
	{  cout<< "Une nouvelle souris !"<<endl ;}
	
	Souris(Souris const &p )
	:poids(p.poids),  age(p.age), couleur(p.couleur), esperance_vie(4*(p.esperance_vie)/5)
	{ 	clonee=true;
		cout<<" clonage d’une souris ! "<<endl;
	}
	~Souris(){ cout<<  "Fin d’une souris..."<<endl;}
	
	void afficher(){
		if(clonee){
			cout<<"Une souris "<<couleur<<", clonee,"<<" de "<<age<<" mois et pesant "<<
		poids<<" grammes"<<"\n";
		}else{
		cout<<"Une souris "<<couleur<<" de "<<age<<" mois et pesant "<<
		poids<<" grammes"<<"\n";
			}
		}
	void vieillir(){
		age=age+1;
		if(clonee){
			if(age>esperance_vie/2){
				couleur="verte";
				}
			}
		}
	void evolue(){
		while(age<esperance_vie){
		vieillir();
	}
		
		}		
  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

}; // fin de la classe Souris

int main()
{
  Souris s1(50.0, "blanche", 2);
  Souris s2(45.0, "grise");
  Souris s3(s2);
  // ... un tableau peut-être...
  s1.afficher();
  s2.afficher();
  s3.afficher();
  s1.evolue();
  s2.evolue();
  s3.evolue();
  s1.afficher();
  s2.afficher();
  s3.afficher();
  return 0;
}
