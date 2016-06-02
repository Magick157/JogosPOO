#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main(int argc, char* args[])
{
	bool sair = false;
	string jog1, jog2;
	int vida1 = 10, vida2 = 10;
	int dado6, dano;
	int A1 = 3, A2 = 3, D1 = 2, D2 = 2;

	cout << "Digite o nome do jogador 1: " << endl;
	cin >> jog1;
	cout << "Digite o nome do jogador 2: " << endl;
	cin >> jog2;

	while (sair == false)
	{
		cout << " o                  o" << endl;
		cout << ".T./              \\.T." << endl;
		cout << " ^                  ^" << endl;
		cout << jog1 << "             " << jog2 << endl;
		cout << "Ataque: " << A1 << "          " << "Ataque: " << A2 << endl;
		cout << "Defesa: " << D1 << "          " << "Defesa: " << D2 << endl;
		cout << "Vida:" << vida1 << "            " << "Vida:" << vida2 << endl;
		
		system("pause");

		//Adiciona uma "semente" ao gerador de números
		srand((int)time(0));
		// jogador 1 jogando
		dado6 = rand() % 6 + 1;

		if (dado6 > 4)
		  {
			dano = A1 - D2;
			vida2 = vida2 - dano;
			cout << jog1 << " Acertou" << endl;
			cin.get();
		   }
		else if (dado6 <= 4)
		     {
			cout << jog1 << " Errou " << endl;
			cin.get();
		     }

		// jogador 2 jogando
		dado6 = rand() % 6 + 1;
		if (dado6 > 4)
			{
			dano = A2 - D1;
			vida1 = vida1 - dano;
			cout << jog2 << " Acertou " << endl;;
			cin.get();
			}
		else if (dado6 <= 4)
			{	
			cout << jog2 << " Errou " << endl;
			cin.get();
			}
		system("cls");

		if (vida1 <= 0 || vida2 <= 0)
		{
			sair = true;
		}
	}
		if (vida1 > 0)
			cout << jog1 << " Venceu!" << endl;
		else if (vida2 > 0)
			cout << jog2 << " Venceu!" << endl;
		else
			cout << " Os dois perderam" << endl;
		return 0; 
}