#include "interface.h"


// Verifie les paramètres mis par l'utilisateur au lancement du
// programme.
int verifArguments(int argc, char* argv[]);

// Affichage des régles en cas de problème de paramètre au lancement
void rappelSyntaxe(char* affichage);

int lancerDe(int nbDe);

void moveTurn(STurn *turn, SMap *map);

int verifyTurn(unsigned int idPlayer, STurn *turn, SMap *map);

void endTurn(int idPlayer, SMap *map);

int getDiceToDistribute(int idPlayer, SMap *map);
