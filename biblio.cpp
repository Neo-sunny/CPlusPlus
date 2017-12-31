#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*******************************************
 * Completez le programme a partir d'ici.
 *******************************************/
// Chaines de caractères à utiliser pour les affichages:
/*

été jeté

d'un

n'est

L'oeuvre

bibliothèque

détruit

*/

class Auteur{
	public:
string name;
bool prix;
Auteur(string name, bool prix = 0)
	:name(name), prix(prix)
{}
string getNom() const {
	return name;
	}
bool getPrix(){
	return prix;
	}	
};
class Oeuvre{
private:
const Auteur &aut;	
	public:
string title;
string language;
string author;

Oeuvre(string title, Auteur aut, string language)
	:title(title), aut(aut),  language(language)
	
{ cout <<title<<" "<<aut.getNom()<<"ho  "<<language; }
string getTitre() const { return title; }
const string getAuteur(){ return aut.getNom(); }
string getLangue(){ return language;}

void affiche(){ cout<<"Author is "<<getAuteur();}
	};
class Exemplaire{};
class Bibliotheque{};



/*******************************************
 * Ne rien modifier apres cette ligne.
 *******************************************/


int main()
{
	 Auteur a1("Victor Hugo");
	 Oeuvre o1("Les Misérables" , a1, "français" );
	 o1.affiche();
/*	
  Auteur a1("Victor Hugo"),
         a2("Alexandre Dumas"),
         a3("Raymond Queneau", true);

  Oeuvre o1("Les Misérables"           , a1, "français" ),
         o2("L'Homme qui rit"          , a1, "français" ),
         o3("Le Comte de Monte-Cristo" , a2, "français" ),
         o4("Zazie dans le métro"      , a3, "français" ),
         o5("The Count of Monte-Cristo", a2, "anglais" );

  Bibliotheque biblio("municipale");
  biblio.stocker(o1, 2);
  biblio.stocker(o2);
  biblio.stocker(o3, 3);
  biblio.stocker(o4);
  biblio.stocker(o5);

  cout << "La bibliothèque " << biblio.getNom()
       << " offre les exemplaires suivants :" << endl;
  biblio.lister_exemplaires();

  const string langue("anglais");
  cout << " Les exemplaires en "<< langue << " sont :" << endl;
  biblio.lister_exemplaires(langue);

  cout << " Les auteurs à succès sont :" << endl;
  biblio.afficher_auteurs(true);

  cout << " Il y a " << biblio.compter_exemplaires(o3) << " exemplaires de "
       << o3.getTitre() << endl;

*/
  return 0;
}

