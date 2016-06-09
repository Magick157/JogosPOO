//Corridinha Maluka!!!
//---------------------------- INICIO DO PROGRAMA ---------------------------

#include <iostream> //incluindo Minhas 3 Bibliotecas
#include <string>
#include <ctime>
//entrada e saida das bibliotecas
using namespace std;
//funcao void declarando a variavel
void imprimir_espacos(int total);

//funcao principal do meu programa
int main(int argc, char* args[])
{
	bool sair = false; //ou falso ou verdadeiro 
	string mot1; 
	//Minhas 2 variaveis
	string mot2; 
	
	int rodada = 0, rodada2 = 0;
					 // declaração de variáveis
	int total_espacos = 10; 


	cout << "Digite o nome do piloto 1:" << endl; //nome do piloto 1
	cin >> mot1; // salvando na variavel
	cout << "Digite o nome do piloto 2:" << endl; //nome do piloto 2 
	cin >> mot2; // guardando na variável

	//laço while utilizado quando não sabemos quando vai parar
	while (sair == false) //enquanto sair for falso, ficará em LOOP
	{

		srand((int)time(0)); //gera uma seq de valor igual a ele mesmo
		total_espacos = rand() % 3 + 1; // gera um numero aleatorio no caso entre 1 e 100
		rodada = rodada + total_espacos; // a rodada vai ser somada com o total_espacos que vai substituir o numero de rodadas anterior 

		// nas linha de baixo vai imprimir os carrinhos o nomes deles tambem 
		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot1 << endl;
		
		imprimir_espacos(rodada); // vai imprimir a quantidade de espaços 
		cout << "   _  " << endl;
		
		imprimir_espacos(rodada);// vai imprimir a quantidade de espaços  deixando o carro com o teto 
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		// mesma coisa do de cima 
		srand((int)time(0));
		total_espacos = rand() % 3 + 1;
		rodada2 = rodada2 + total_espacos;

		cout << "LARGADA                                                                      LINHA DE CHAGADA" << endl;
		cout << "piloto " << mot2 << endl;
		imprimir_espacos(rodada2);
		cout << "   _  " << endl;
		imprimir_espacos(rodada2);
		cout << " -Lo=o> " << endl;
		cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _" << endl;

		cout << "proxima jogada ? (Digite enter)" << endl; // comando para proxima jogada 


		system("pause");// vai deixar o programa pausado ate que alguem aperte alguma tecla

		system("cls"); // vai limpar a tela 



		if (rodada >= 20 || rodada2 >= 20) // se os carrinhos chegarem na rodada 20 eles vao parar 
		{
			sair = true;
		}
		else //mas se nao...

			system("cls"); // limpa a tela 



	}

	if (rodada = 20)  // se o jogador chagar a 20 ele ganha
		cout << mot1 << "ganho o primeiro lugar" << endl;

	else if (rodada2 = 20) // mesma coisa 
		cout << mot2 << "ganho o primeiro lugar" << endl;

	else // se nao empate
		cout << "EMPARE" << endl; // se nao empate 


	system("pause"); // pausar 

	return 0; // retorno 0
}

void imprimir_espacos(int total) // funçao 
{
	for (int qntd_atual = 0; qntd_atual < total; qntd_atual++) // laço for com uma variavel qntd_atual

	{
		cout << " ";
	}
}
