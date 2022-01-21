#include <iostream>
#include <string>

using namespace std;

struct Player
{
  string username;
  int points;
};

void saveGreaterPlayer(Player *actual, Player *greater) {
  if (actual->points > greater->points) {
    *greater = *actual;
  }
}

int main() {
  int playersQtn = 3;
  Player players[playersQtn], *greater, dummy;

  dummy.username = "";
  dummy.points = -1;
  greater = &dummy;

  cout << "INGRESE LOS DATOS DE LOS JUGADORES" << endl;
  for (int i = 0; i < playersQtn; i++) {
    cout << "JUGADOR " << i + 1 << endl << "USERNAME: ";
    cin >> players[i].username;

    cout << "PUNTOS: ";
    cin >> players[i].points;

    cout << endl;

    saveGreaterPlayer(&players[i], greater);
  }

  //Para probar que todos los valores se almacenan
  /* for (int i = 0; i < playersQtn; i++) {
    cout << "JUGADOR " << i + 1 << endl;
    cout << "USERNAME: " << players[i].username << endl;
    cout << "PUNTOS: " << players[i].points << endl;
  } */
  
  cout << "EL MEJOR JUGADOR ES: " << greater->username << " - " << greater->points << endl;

  return 0;
}