#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<locale.h>
#include<time.h>

//Cores das letras
enum{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE,
};


//Cores de fundo
enum{
	_BLACK=0,
	_BLUE=16,
	_GREEN=32,
	_CYAN=48,
	_RED=64,
	_MAGENTA=80,
	_BROWN=96,
	_LIGHTGRAY=112,
	_DARKGRAY=128,
	_LIGHTBLUE=144,
	_LIGHTGREEN=160,
	_LIGHTCYAN=176,
	_LIGHTRED=192,
	_LIGHTMAGENTA=208,
	_YELLOW=224,
	_WHITE=240,
};


void Cores();
void menu();
void tutorial();
void creditos();
void mapa1();
void mapa2();
void mapa3();
void gameover();


void slow_print(char* str, int delay) {
    int i;
for (i = 0; str[i] != '\0'; i++) {
    putchar(str[i]);
    fflush(stdout);
    usleep(delay * 600);
}
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	Cores(YELLOW, _BLACK);
	slow_print("Put it in full screen for a better experience...", 50);
	Sleep(2500);
	
		menu();
	
	return 0;
}


void Cores (int letras, int fundo){
	//Juntar as cores
	SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE), letras + fundo);
}


void menu(){
	system("cls");
	
	char r, i;
	
	while(r != '1' || r != '2' || r != '3' || r != '4'){
		system("cls");
		
			//Intro
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");           Cores(BLACK, _MAGENTA);      printf("***************************************************");
		
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");
			
			printf("\n_____________________________________________________________________________________");			Cores(BLACK, _MAGENTA);     printf("*     |SSSSS| |TTTTT| |EEEEE| |PPPPP| |SSSSS|       *");
		
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");
			
			printf("\n____________________________________________________________________________________");			Cores(BLACK, _MAGENTA);    printf("*      |s|       |T|   |E|     |P   P| |s|            *");
		
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");
			
			printf("\n___________________________________________________________________________________");			Cores(BLACK, _MAGENTA);   printf("*       |SSSSS|   |T|   |EEEE|  |PPPPP| |SSSSS|         *");
	
		Cores(BLACK, _BLACK);
			printf("________________________________________________________________________________________");
			
			printf("\n____________________________________________________________________________________");			Cores(BLACK, _MAGENTA);    printf("*          |S|   |T|   |E|     |P|         |S|         *");
		
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");
			
			printf("\n_____________________________________________________________________________________");			Cores(BLACK, _MAGENTA); 	printf("*     |SSSSS|   |T|   |EEEEE| |P|     |SSSSS|       *");
		
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");
		
		printf("\n______________________________________________________________________________________");				Cores(BLACK, _MAGENTA);	     printf("***************************************************");
		
		Cores(BLACK, _BLACK);
			printf("______________________________________________________________________________________");
			//Retorna a cor original
	
	Cores(WHITE,_BLACK);
	
	//Sleep(3000);
	printf("\n\n\n\n                                                                                                          ");
	
	Cores(YELLOW, _BLACK);
	slow_print("1- START", 50);
	
	Cores(BLACK, _BLACK);
	printf("\n                                                                                                          ");
	
	Cores(YELLOW, _BLACK);
	slow_print("2- TUTORIAL", 50);
	
	Cores(BLACK, _BLACK);
	printf("\n                                                                                                          ");
	
	Cores(YELLOW, _BLACK);
	slow_print("3- CREDITS", 50);
	
	Cores(BLACK, _BLACK);
	printf("\n                                                                                                          ");
	
	Cores(YELLOW, _BLACK);
	slow_print("4- EXIT", 50);
	
	Cores(BLACK, _BLACK);
	printf("\n                                                                                                          ");
	
	Cores(YELLOW, _BLACK);
	slow_print("R= ", 50);
	scanf(" %c", &r);
	
	Cores(WHITE,_BLACK);
	
		switch(r){
			case '1':
				
				while(i != '1' || i != '0'){
					system("cls");
					Cores(YELLOW, _BLACK);
					slow_print("Do you want to start the adventure?\n\n\n", 50);
					slow_print("Select 1 to continue or 0 to return:  ", 50);
					scanf(" %c", &i);
					Cores(WHITE,_BLACK);
					
					switch(i){
						
						case '1' :
							system("cls");
							Cores(YELLOW, _BLACK);
							slow_print("Ouskay, let's go...",50);
							Cores(WHITE,_BLACK);
							Sleep(1500);
							mapa1();
							break;
							
						case '0':
							break;
							
						default:
							Cores(WHITE, _RED);
							printf("\nInvalid value, choose one of the options!\n\n");
							Sleep(1500);
							Cores(WHITE,_BLACK);
						}
						break;
					}
					
				break;
		
			case '2':
				while(i != '1' || i != '0'){
					tutorial();
					Cores(YELLOW, _BLACK);
					slow_print("Select 0 to return:  ", 50);
					scanf(" %c", &i);
					Cores(WHITE,_BLACK);
					
					switch(i){
						
						case '0':
							break;
							
						default:
							Cores(WHITE, _RED);
							printf("\nInvalid value, choose one of the options!\n\n");
							Sleep(1500);
							Cores(WHITE,_BLACK);
						}
						break;
					}
					
				break;
				
			case '3':
				while(i != '1' || i != '0'){
					creditos();
					Cores(YELLOW, _BLACK);
					slow_print("Select 0 to return: ", 50);
					scanf(" %c", &i);
					Cores(WHITE,_BLACK);
					
					switch(i){
							
						case '0':
							break;
							
						default:
							Cores(WHITE, _RED);
							printf("\nInvalid value, choose one of the options!\n\n");
							Sleep(1500);
							Cores(WHITE,_BLACK);
						}
						break;
					}

				break;
				
			case '4':
				Cores(WHITE,_RED);
				slow_print("\n\nNaum gostuei ;-;",50);
				Cores(WHITE,_BLACK);
				
				return 0;
				
			default:
				Cores(WHITE, _RED);
				printf("Invalid value, choose one of the options!");
				Sleep(1500);
				Cores(WHITE,_BLACK);
			}
		}
}


void tutorial(){
	system("cls");
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");
	
	Cores(WHITE, _LIGHTRED);
	printf("**************************************************************************************\n");
	
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");

	Cores(WHITE, _LIGHTRED);
	printf("* _______    _       _    _______    _____    ______      _____       _       _      *\n");
	
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");

	Cores(WHITE, _LIGHTRED);
	printf("*|TTTTTTTT  |U|     |U|  |TTTTTTT|  |OOOOO|  |RRRRRR|    |IIIII|     |A|     |L|     *\n");
	
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");
    
	Cores(WHITE, _LIGHTRED);
	printf("*   |T|     |U|     |U|     |T|    |O     O| |R     R|     |I|      |A A|    |L|     *\n");
    
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");
  
    Cores(WHITE, _LIGHTRED);
	printf("*   |T|     |U|     |U|     |T|    |O     O| |RRRRRR|      |I|     |AAAAA|   |L|     *\n");
    
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");
    
	Cores(WHITE, _LIGHTRED);
	printf("*   |T|     |U|     |U|     |T|    |O     O| |R|    |R|    |I|    |A|   |A|  |L|___  *\n");
    
		Cores(BLACK, _BLACK);
		printf("_______________________________________________________________________________");
    
	Cores(WHITE, _LIGHTRED);
	printf("*   |T|       |UUUUU|       |T|     |OOOOO|  |R|     |R| |IIIII| |A|     |A| |LLLLL| *\n");
    	
		Cores(BLACK, _BLACK);	
		printf("_______________________________________________________________________________");
    
	Cores(WHITE, _LIGHTRED);
	printf("**************************************************************************************\n\n");
    
    	Cores(BLACK, _BLACK);
		printf("_________________________________________________________________________________________");
	
	Cores(WHITE, _LIGHTRED);
    slow_print("O jogador possui os seguintes comando:\n\n",50);
    
    	Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
   
   Cores(WHITE,_BLACK);
    slow_print(" W : O jogador movimenta uma unidade para cima;\n\n",10);
    
    	Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" A : O jogador movimenta uma unidade para esquerda;\n\n",10);
    
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" S : O jogador movimenta uma unidade para baixo;\n\n",10);
    
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" D : O jogador movimenta uma unidade para direita;\n\n",10);
    
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" I : O jogador interage com o objeto que está em cima.\n\n",10);
    
    	Cores(BLACK, _BLACK);
		printf("\n__________________________________________________________________________________________");
    
    Cores(WHITE, _LIGHTRED);
	slow_print("O jogo possui os seguintes elementos nas fases:\n\n",50);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" & : Símbolo que representa o jogador;\n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" * : Parede, impede o jogador ao se movimentar\n\n", 10); 
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" @ : Chave para abrir as portas, abre no momento que o jogador \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("interage com a chave;\n\n", 10);

		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");

	Cores(WHITE,_BLACK);
	slow_print(" D : Representa a porta fechada;\n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" = : Representa a porta aberta quando o jogador interage com a chave;\n\n", 10);

		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" O : Botão que o usuário pode interagir, o jogador deve ficar em cima \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("dele para poder interagir;\n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" # : Espinho. A fase é reiniciada quando o jogador toca no espinho, \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("caso a fase seja reiniciada 3 vezes, o jogo volta para o menu principal;\n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" > : Teletransporte. O teletransporte sempre deve vir em pares, quando o \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("jogador toca em um ele é transportado para o outro e vice-versa;\n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" -X : Monstro nível 1. O mostro de movimento aleatório, andando após o \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("usuário se movimentar ou interagir com um objeto;\n\n", 10);
	
		Cores(BLACK,_BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print(" K : Monstro nível 2. Possui mais inteligência que o Monstro nivel 1, \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("movimentando-se na direção do jogador. O monstro não precisa saber \n\n", 10);
	
		Cores(BLACK, _BLACK);
		printf("__________________________________________________________________________________________");
	
	Cores(WHITE,_BLACK);
	slow_print("desviar de obstáculos.\n\n", 10);
		
	Cores(WHITE, _BLACK);
	
}


void creditos(){
	system("cls");
	printf("Só gente linda\n");
}

		
void gameover(){

	system("cls");
	Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	
	Cores(WHITE, _LIGHTRED);
	printf("***********************************************************************************\n");
		Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
	printf("    _____       _      _       _  _____      _____   _        _  _____  _____      \n");
	Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
	printf("   |GGGGG|     /A\    |M\_   _/M||EEEEE|    /OOOOO\ \V\      /V/|EEEEE||RRRRR\     \n");
	Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
    printf("   |G          /A A\   |M M| |M M||E|__     |O     O| \V\    /V/ |E___  |R|__|R|   \n");
    Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
    printf("   |G   GGG|  /AAAAA\  |M| \M/ |M||EEEE|    |O     O|  \V\  /V/  |EEEE| |RRRRR/    \n");
    Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
    printf("   |G     G| /A/   \A\ |M|     |M||E|___    |O     O|   \V\/V/   |E|___ |R| \R\    \n");
    Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
    printf("   |GGGGGG|/A/     \A\|M|     |M||EEEEE|    \OOOOO/     \VV/    |EEEEE||R|  \R\    \n");
    Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(WHITE, _LIGHTRED);
    printf("***********************************************************************************\n");
    Cores(BLACK, _BLACK);
	printf("_______________________________________________________________________________");
	Cores(YELLOW, _RED);
	printf("                       FOR EVERY GAME OVER, THERE'S A PLAY AGAIN!                    ");
	Cores(BLACK, _BLACK);
	printf("_________________________________________________________________________________________");
	Sleep(5000);

}		
	
		
void mapa1(){
	char mapa[15][15] = {
		{'*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', 'O', ' ', '*', '@', ' ',' ', '*', ' ', '#', '@', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', '*', '#', '#','#', '*', ' ', ' ', '#', '#', '#', ' ', '*'},
		{'*', ' ', ' ', '*', ' ', ' ',' ', '*', ' ', ' ', '#', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', '*', ' ', '*','*', '*', ' ', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', ' ',' ', '*', ' ', ' ', '#', ' ', ' ', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', ' ',' ', '*', ' ', ' ', '#', ' ', '#', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', '#',' ', 'D', ' ', ' ', '#', ' ', ' ', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', ' ',' ', '*', ' ', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', ' ',' ', '*', ' ', '#', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', ' ',' ', '*', ' ', '#', ' ', '#', '#', '#', '*'},
		{'*', ' ', '*', ' ', ' ', ' ',' ', '*', ' ', '#', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', ' ',' ', '*', ' ', '#', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', ' ',' ', '*', ' ', '#', '#', ' ', ' ', ' ', 'D'},
		{'*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*'},
};

	int x, y, HP = 5;
	//Posição inicial do jogador
	int px = 1, py = 13;
	//Comando do usuário
	char i;
	
	while(HP > 0){
	
	system("cls");
	
	for(y = 0; y < 15; y++){
		for(x = 0; x < 15; x++){
				if(px == x && py == y){
					Cores(YELLOW,_BLACK);
					printf("  &");
					Cores(WHITE,_BLACK);
				}
			
				else{
					Cores(LIGHTGREEN,_BLACK);
					printf("  %c", mapa[y][x]);
					Cores(WHITE,_BLACK);
				}
			}
		printf("\n\n");
	}
	
	Cores(RED, _BLACK);
	printf("\n\n HP: %d", HP);
	Cores(WHITE, _BLACK);
	
	if(mapa[1][4] == '@'){
		Cores(LIGHTCYAN, _BLACK);
		printf("\t\tClimb on the 'O' button to interact and press 'i' to collect the key");
		Cores(WHITE, _BLACK);
	}
	
	i = getch();

		switch(i){
			        
		       	case 'W':
			    case 'w':
			    	if(py > 0 && mapa[py - 1][px] != '*' && mapa[py - 1][px] != '@' && mapa[py - 1][px] != 'D'){
			    		
						if(mapa[py - 1][px] == '#'){
			    			HP--;
							px = 1, py = 13;
						}
						
						else if(mapa[py - 1][px] == mapa[1][1] && mapa[1][1] == 'O'){
							py--;
							
							mapa[2][6] = ' ';
						}
						
						else{
							py--;
						}
			    		
					}
					
		            break;
		            
		        case 'A':
			    case 'a':
		          	if(px > 0 && mapa[py][px - 1] != '*' && mapa[py][px - 1] != '@' && mapa[py][px - 1] != 'D'){
						
						if(mapa[py][px - 1] == '#'){
			    			HP--;
							px = 1, py = 13;
						}
						
						else if(mapa[py][px -1] == mapa[1][1] && mapa[1][1] == 'O'){
							px--;
							mapa[2][6] = ' ';
						}
						
						else{
							
							px--;
						}
			    		
					}
															
		            break;
		            
		       	case 'S':
			    case 's':
		              if(py > 0 && mapa[py + 1][px] != '*' && mapa[py + 1][px] != '@' && mapa[py + 1][px] != 'D'){
			    		
						if(mapa[py + 1][px] == '#'){
			    			HP--;
							px = 1, py = 13;
						}
						
						else{
							
							py++;
						}
		        	}
		            break;
		            
		        case 'D':
			    case 'd':
		            if(px > 0 && mapa[py][px + 1] != '*' && mapa[py][px + 1] != '@' && mapa[py][px + 1] != 'D'){
						
						if(mapa[py][px + 1] == '#'){
			    			HP--;
							px = 1, py = 13;
						}
						
						else if(mapa[py][px + 1] == mapa[13][14] && mapa[13][14] == '='){
							mapa2();
						}
						
						else{
							
							px++;
						}
			    		
					}
					
		            break;
		            
		        case 'I':
		        case 'i':
		        	//Chave 1
		        	if(mapa[py - 1][px]  == mapa[1][4] || mapa[py][px - 1]  == mapa[1][4] || mapa[py + 1][px]  == mapa[1][4] || mapa[py][px + 1]  == mapa[1][4]){
		        		mapa[1][4] = ' ';
					}
		        	
		        	//usar a chave 1 na porta
		        	if(mapa[py - 1][px]  == mapa[7][7] || mapa[py][px - 1]  == mapa[7][7] || mapa[py + 1][px]  == mapa[7][7] || mapa[py][px + 1]  == mapa[7][7] ){
		        		if(mapa[1][4] == ' '){
							mapa[7][7] = '=';
						}
						
						else{
							Cores(WHITE, _CYAN);
							slow_print("\n\nYou need the key to open the door", 50);
							Cores(WHITE, _BLACK);
							Sleep(1000);
						}
					}
					
					//Chave 2
					if(mapa[py - 1][px]  == mapa[1][10] || mapa[py][px - 1]  == mapa[1][10] || mapa[py + 1][px]  == mapa[1][10] || mapa[py][px + 1]  == mapa[1][10]){
		        		mapa[1][10] = ' ';
					}
					
					//usar a chave 2 na porta
					if(mapa[py - 1][px]  == mapa[13][14] || mapa[py][px - 1]  == mapa[13][14] || mapa[py + 1][px]  == mapa[13][14] || mapa[py][px + 1]  == mapa[13][14]){
						if(mapa[1][10] == ' '){
							mapa[13][14] = '=';
						}
					}
					break;
				    
		        default:
		        	Cores(WHITE, _RED);
		            printf("\n\nOpção inválida!\n");
		            Cores(WHITE, _BLACK);
					Sleep(1500);
		            break;
			
			}
		}
		
		gameover();
}


void mapa2(){
	system("cls");
	
char mapa[30][30] = {
		{'*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', ' ', '@', ' ', ' ', '*',' ', ' ', '#', ' ', '#', ' ', ' ', 'O', '*', ' ', '#', ' ', '#', ' ', ' ',' ', ' ', '#', ' ', ' ', ' ', ' ', '#', '*'},
		{'*', ' ', ' ', ' ', ' ', '*',' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '#', ' ', ' ','#', ' ', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', 'D',' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ','#', ' ', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', '*','#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ','#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', '*',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ','#', ' ', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', '*','#', ' ', '#', ' ', ' ', '#', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ',' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', ' ', '*',' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ',' ', ' ', '#', ' ', ' ', ' ', ' ', '@', '*'},
		{'*', ' ', ' ', ' ', '*', '*',' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', '#', ' ', ' ', ' ', ' ','#', ' ', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', '#', ' ', '*', '@','#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ','#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', '*', ' ',' ', '#', ' ', ' ', '#', ' ', '#', ' ', '*', ' ', '#', ' ', '#', ' ', ' ','#', ' ', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', '#', ' ', '#', '*', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', '#', '#', '#','#', ' ', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', ' ', ' ', '*', ' ','#', ' ', '#', ' ', '#', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '#',' ', ' ', '#', ' ', ' ', ' ', ' ', '#', '*'},
		{'*', ' ', '#', '#', '*', ' ',' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '*', '*', '*', 'D', 'D', 'D', '*','*', '*', '*', '*', 'D', 'D', '*', '*', '*'},
		{'*', ' ', ' ', ' ', '*', ' ',' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '#', '#', ' ', '*', ' ',' ', ' ', ' ', ' ', ' ', '#', '#', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ',' ', '*', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', ' ', ' ', '*', ' ',' ', ' ', '#', ' ', ' ', '#', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '#', ' ', '#', '*', ' ',' ', ' ', '#', ' ', ' ', '#', ' ', ' ', '*', ' ', '#', ' ', '#', ' ', ' ',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', '*', '#','#', ' ', '#', ' ', ' ', ' ', ' ', ' ', '*', '#', ' ', ' ', ' ', '#', ' ',' ', '*', ' ', ' ', ' ', '#', ' ', ' ', '*'},
		{'*', ' ', '#', ' ', '*', ' ',' ', ' ', '#', '#', ' ', ' ', '#', '#', '*', '#', ' ', '#', ' ', ' ', '#',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', '*', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '#', ' ', '#',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', '#', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '#', '#', ' ', '#', ' ', '#',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', ' ', ' ', '#', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '#', ' ', '#',' ', '*', ' ', ' ', ' ', ' ', ' ', '#', '*'},
		{'*', ' ', '*', '*', '*', '*','*', '*', 'D', 'D', '*', '*', '*', '*', '*', ' ', '#', '#', ' ', ' ', '#',' ', '*', '#', ' ', ' ', ' ', '#', ' ', '*'},
		{'*', ' ', '*', 'O', ' ', '#',' ', '#', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', '#', ' ',' ', '*', '@', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', '*', '#', ' ', ' ',' ', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', '#', ' ', '#', ' ', ' ','@', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', '#','#', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', ' ',' ', '*', ' ', ' ', ' ', '#', ' ', ' ', '*'},
		{'*', ' ', '*', ' ', '#', ' ','O', '#', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', ' ', '*', ' ', ' ', ' ','#', '#', ' ', ' ', '#', ' ', ' ', '#', ' ', '#', ' ', '#', ' ', ' ', ' ',' ', '*', ' ', '#', ' ', ' ', ' ', ' ', 'D'},
		{'*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*'},
};

	int x, y, HP = 5;
	//Posição inicial do jogador
	int px = 1, py = 28;
	//Posição inicial do monstro 1
	int mx = 7, my = 21;
	//Movimentação aleatória do monstro 1
	int m, c;
	//Posição inicial do monstro 2
	int m1x = 12, m1y = 4;
	//Movimentação aleatória do monstro 2
	int m1, c1;
	//Posição inicial do monstro 3
	int m2x = 9, m2y = 25;
	//Movimentação aleatória do monstro 3
	int m2, c2;
	//Posição inicial do monstro 4
	int m3x = 20, m3y = 15;
	//Movimentação aleatória do monstro 4
	int m3 ,c3; 
	//Posição inicial do monstro 5
	int m4x = 22, m4y = 4;
	//Movimentação aleatória do monstro 5
	int m4 ,c4; 
	//Posição inicial do monstro 6
	int m5x = 22, m5y = 9;
	//Movimentação aleatória do monstro 6
	int m5 ,c5; 
	//Comando do usuário
	char i;
	
	while(HP > 0){
	
	system("cls");
	
	for(y = 0; y < 30; y++){
		for(x = 0; x < 30; x++){
				if(px == x && py == y){
					Cores(YELLOW,_BLACK);
					printf("     &");
					Cores(WHITE,_BLACK);
				}
				//Monstro 1
				else if(mx == x && my == y){
					Cores(LIGHTRED,_BLACK);
					printf("    -X");
					Cores(WHITE,_BLACK);
				}
				//Monstro 2
				else if(m1x == x && m1y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    -X");
					Cores(WHITE,_BLACK);
				}
				//Monstro 3
				else if(m2x == x && m2y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    -X");
					Cores(WHITE,_BLACK);
				}
				//Monstro 4
				else if(m3x == x && m3y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    -X");
					Cores(WHITE,_BLACK);
				}
				//Monstro 5
				else if(m4x == x && m4y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    -X");
					Cores(WHITE,_BLACK);
				}
				//Monstro 6
				else if(m5x == x && m5y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    -X");
					Cores(WHITE,_BLACK);
				}
			
				else{
					Cores(LIGHTGREEN,_BLACK);
					printf("     %c", mapa[y][x]);
					Cores(WHITE,_BLACK);
				}
			}
			printf("\n\n");
		}
		//Monstro 1
		srand(time(NULL));
		for (c = 0; c < 1; c++){
			m = rand() % 4;
		
			//monstro andar para cima
			if(m == 0){
				if(my > 0 && mapa[my - 1][mx] != '*' && mapa[my - 1][mx] != '@' && mapa[my - 1][mx] != 'D' && mapa[my - 1][mx] != '#' && mapa[my - 1][mx] != 'O'){
					my--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m == 1){
				if(my > 0 && mapa[my + 1][mx] != '*' && mapa[my + 1][mx] != '@' && mapa[my + 1][mx] != 'D' && mapa[my + 1][mx] != '#' && mapa[my + 1][mx] != 'O'){
					my++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m == 2){
				if(mx > 0 && mapa[my][mx - 1] != '*' && mapa[my][mx - 1] != '@' && mapa[my][mx - 1] != 'D' && mapa[my][mx - 1] != '#' && mapa[my][mx - 1] != 'O'){
					mx--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m == 3){
				if(mx > 0 && mapa[my][mx + 1] != '*' && mapa[my][mx + 1] != '@' && mapa[my][mx + 1] != 'D' && mapa[my][mx + 1] != '#' && mapa[my][mx + 1] != 'O'){
					mx++;
				}
				
				break;
			}
		}
		//Monstro2
		srand(time(NULL));
		for (c1 = 0; c1 < 1; c1++){
			m1 = rand() % 4;
		
			//monstro andar para cima
			if(m1 == 0){
				if(m1y > 0 && mapa[m1y - 1][m1x] != '*' && mapa[m1y - 1][m1x] != '@' && mapa[m1y - 1][m1x] != 'D' && mapa[m1y - 1][m1x] != '#' && mapa[m1y - 1][m1x] != 'O'){
					m1y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m1 == 1){
				if(my > 0 && mapa[my + 1][mx] != '*' && mapa[my + 1][mx] != '@' && mapa[my + 1][mx] != 'D' && mapa[my + 1][mx] != '#' && mapa[my + 1][mx] != 'O'){
					m1y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m1 == 2){
				if(m1x > 0 && mapa[m1y][m1x - 1] != '*' && mapa[m1y][m1x - 1] != '@' && mapa[m1y][m1x - 1] != 'D' && mapa[m1y][m1x - 1] != '#' && mapa[m1y][m1x - 1] != 'O'){
					m1x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m1 == 3){
				if(m1x > 0 && mapa[m1y][m1x + 1] != '*' && mapa[m1y][m1x + 1] != '@' && mapa[m1y][m1x + 1] != 'D' && mapa[m1y][m1x + 1] != '#' && mapa[m1y][m1x + 1] != 'O'){
					m1x++;
				}
				
				break;
			}
		}
		//Monstro 3
		srand(time(NULL));
		for (c2 = 0; c2 < 1; c2++){
			m2 = rand() % 4;
		
			//monstro andar para cima
			if(m2 == 0){
				if(m2y > 0 && mapa[m2y - 1][m2x] != '*' && mapa[m2y - 1][m2x] != '@' && mapa[m2y - 1][m2x] != 'D' && mapa[m2y - 1][m2x] != '#' && mapa[m2y - 1][m2x] != 'O'){
					m2y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m2 == 1){
				if(m2y > 0 && mapa[m2y + 1][m2x] != '*' && mapa[m2y + 1][m2x] != '@' && mapa[m2y + 1][m2x] != 'D' && mapa[m2y + 1][m2x] != '#' && mapa[m2y + 1][m2x] != 'O'){
					m2y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m2 == 2){
				if(m2x > 0 && mapa[m2y][m2x - 1] != '*' && mapa[m2y][m2x - 1] != '@' && mapa[m2y][m2x - 1] != 'D' && mapa[m2y][m2x - 1] != '#' && mapa[m2y][m2x - 1] != 'O'){
					m2x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m2 == 3){
				if(m2x > 0 && mapa[m2y][m2x + 1] != '*' && mapa[m2y][m2x + 1] != '@' && mapa[m2y][m2x + 1] != 'D' && mapa[m2y][m2x + 1] != '#' && mapa[m2y][m2x + 1] != 'O'){
					m2x++;
				}
				
				break;
			}
		}
		//Monstro 4
		srand(time(NULL));
		for (c3 = 0; c3 < 1; c3++){
			m3 = rand() % 4;
		
			//monstro andar para cima
			if(m3 == 0){
				if(m3y > 0 && mapa[m3y - 1][m3x] != '*' && mapa[m3y - 1][m3x] != '@' && mapa[m3y - 1][m3x] != 'D' && mapa[m3y - 1][m3x] != '#' && mapa[m3y - 1][m3x] != 'O'){
					m3y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m3 == 1){
				if(m3y > 0 && mapa[m3y + 1][m3x] != '*' && mapa[m3y + 1][m3x] != '@' && mapa[m3y + 1][m3x] != 'D' && mapa[m3y + 1][m3x] != '#' && mapa[m3y + 1][m3x] != 'O'){
					m3y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m3 == 2){
				if(m3x > 0 && mapa[m3y][m3x - 1] != '*' && mapa[m3y][m3x - 1] != '@' && mapa[m3y][m3x - 1] != 'D' && mapa[m3y][m3x - 1] != '#' && mapa[m3y][m3x - 1] != 'O'){
					m3x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m3 == 3){
				if(m3x > 0 && mapa[m3y][m3x + 1] != '*' && mapa[m3y][m3x + 1] != '@' && mapa[m3y][m3x + 1] != 'D' && mapa[m3y][m3x + 1] != '#' && mapa[m3y][m3x + 1] != 'O'){
					m3x++;
				}
				
				break;
			}
		}
		//Monstro 5
		srand(time(NULL));
		for (c4 = 0; c4 < 1; c4++){
			m4 = rand() % 4;
		
			//monstro andar para cima
			if(m4 == 0){
				if(m4y > 0 && mapa[m4y - 1][m4x] != '*' && mapa[m4y - 1][m4x] != '@' && mapa[m4y - 1][m4x] != 'D' && mapa[m4y - 1][m4x] != '#' && mapa[m4y - 1][m4x] != 'O'){
					m4y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m4 == 1){
				if(m4y > 0 && mapa[m4y + 1][m4x] != '*' && mapa[m4y + 1][m4x] != '@' && mapa[m4y + 1][m4x] != 'D' && mapa[m4y + 1][m4x] != '#' && mapa[m4y + 1][m4x] != 'O'){
					m4y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m4 == 2){
				if(m4x > 0 && mapa[m4y][m4x - 1] != '*' && mapa[m4y][m4x - 1] != '@' && mapa[m4y][m4x - 1] != 'D' && mapa[m4y][m4x - 1] != '#' && mapa[m4y][m4x - 1] != 'O'){
					m4x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m4 == 3){
				if(m4x > 0 && mapa[m4y][m4x + 1] != '*' && mapa[m4y][m4x + 1] != '@' && mapa[m4y][m4x + 1] != 'D' && mapa[m4y][m4x + 1] != '#' && mapa[m4y][m4x + 1] != 'O'){
					m4x++;
				}
				
				break;
			}
		}
		//Monstro 6
		srand(time(NULL));
		for (c5 = 0; c5 < 1; c5++){
			m5 = rand() % 4;
		
			//monstro andar para cima
			if(m5 == 0){
				if(m5y > 0 && mapa[m5y - 1][m5x] != '*' && mapa[m5y - 1][m5x] != '@' && mapa[m5y - 1][m5x] != 'D' && mapa[m5y - 1][m5x] != '#' && mapa[m5y - 1][m5x] != 'O'){
					m5y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m5 == 1){
				if(m5y > 0 && mapa[m5y + 1][m5x] != '*' && mapa[m5y + 1][m5x] != '@' && mapa[m5y + 1][m5x] != 'D' && mapa[m5y + 1][m5x] != '#' && mapa[m5y + 1][m5x] != 'O'){
					m5y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m == 2){
				if(m5x > 0 && mapa[m5y][m5x - 1] != '*' && mapa[m5y][m5x - 1] != '@' && mapa[m5y][m5x - 1] != 'D' && mapa[m5y][m5x - 1] != '#' && mapa[m5y][m5x - 1] != 'O'){
					m5x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m5 == 3){
				if(m5x > 0 && mapa[m5y][m5x + 1] != '*' && mapa[m5y][m5x + 1] != '@' && mapa[m5y][m5x + 1] != 'D' && mapa[m5y][m5x + 1] != '#' && mapa[m5y][m5x + 1] != 'O'){
					m5x++;
				}
				
				break;
			}
		}
		
	Cores(RED, _BLACK);
	printf("\n\n HP: %d", HP);
	Cores(WHITE, _BLACK);

	Cores(LIGHTCYAN, _BLACK);
	printf("\t\tBeware of monsters( -X )");
	Cores(WHITE, _BLACK);
	
	
	i = getch();

		switch(i){
			        
		       	case 'W':
			    case 'w':
			    	if(py > 0 && mapa[py - 1][px] != '*' && mapa[py - 1][px] != '@' && mapa[py - 1][px] != 'D'){
				    		
							if(mapa[py - 1][px] == '#' || mapa[py - 1] == mapa[my] && mapa[px] == mapa[mx]|| mapa[py - 1] == mapa[m1y] && mapa[px] == mapa[m1x] || mapa[py - 1] == mapa[m2y] && mapa[px] == mapa[m2x] || mapa[py - 1] == mapa[m3y] && mapa[px] == mapa[m3x] || mapa[py - 1] == mapa[m4y] && mapa[px] == mapa[m4x] || mapa[py - 1] == mapa[m5y] && mapa[px] == mapa[m5x]){
				    			HP--;
								px = 1, py = 28;
							}
							
							else if(mapa[py - 1][px] == mapa[1][13] && mapa[1][13] == 'O'){
								mapa[22][4] = ' ';
								mapa[21][4] = ' ';
								py--;
							}
							
							
							else{
								
								py--;
							}
				    		
						}
					
		            break;
		            
		        case 'A':
			    case 'a':
		          	if(px > 0 && mapa[py][px - 1] != '*' && mapa[py][px - 1] != '@' && mapa[py][px - 1] != 'D'){
							
							if(mapa[py][px - 1] == '#' || mapa[py] == mapa[my] && mapa[px - 1] == mapa[mx] || mapa[py] == mapa[m1y] && mapa[px - 1] == mapa[m1x] || mapa[py] == mapa[m2y] && mapa[px - 1] == mapa[m2x] || mapa[py] == mapa[m3y] && mapa[px - 1] == mapa[m3x] || mapa[py] == mapa[m4y] && mapa[px - 1] == mapa[m4x] || mapa[py] == mapa[m5y] && mapa[px - 1] == mapa[m5x]){
				    			HP--;
								px = 1, py = 28;
							}
							
							else if(mapa[py][px - 1] == mapa[24][3] && mapa[24][3] == 'O'){
								mapa[24][10] = ' ';
								mapa[25][10] = ' ';
								px--;
							}
							
							else{
								
								px--;
							}
				    		
						}
															
		            break;
		            
		       	case 'S':
			    case 's':
		              if(py > 0 && mapa[py + 1][px] != '*' && mapa[py + 1][px] != '@' && mapa[py + 1][px] != 'D'){
				    		
							if(mapa[py + 1][px] == '#' || mapa[py + 1] == mapa[my] && mapa[px] == mapa[mx] || mapa[py + 1] == mapa[m1y] && mapa[px] == mapa[m1x] || mapa[py + 1] == mapa[m2y] && mapa[px] == mapa[m2x] || mapa[py + 1] == mapa[m3y] && mapa[px] == mapa[m3x] || mapa[py + 1] == mapa[m4y] && mapa[px] == mapa[m4x] || mapa[py + 1] == mapa[m5y] && mapa[px] == mapa[m5x]){
				    			HP--;
								px = 1, py = 28;
							}
							
							else{
								
								py++;
							}
			        	}
			        	
		            break;
		            
		        case 'D':
			    case 'd':
		            if(px > 0 && mapa[py][px + 1] != '*' && mapa[py][px + 1] != '@' && mapa[py][px + 1] != 'D'){
			    		
						if(mapa[py][px + 1] == '#' || mapa[py] == mapa[my] && mapa[px + 1] == mapa[mx] || mapa[py] == mapa[m1y] && mapa[px + 1] == mapa[m1x] || mapa[py] == mapa[m2y] && mapa[px + 1] == mapa[m2x] || mapa[py] == mapa[m3y] && mapa[px + 1] == mapa[m3x] || mapa[py] == mapa[m4y] && mapa[px + 1] == mapa[m4x] || mapa[py] == mapa[m5y] && mapa[px + 1] == mapa[m5x]){
			    			HP--;
							px = 1, py = 28;
						}
						
						else if(mapa[py][px + 1] == mapa[1][13] && mapa[1][13] == 'O'){
								px++;
								mapa[22][4] = ' ';
								mapa[21][4] = ' ';
						}
						
						else if(mapa[py][px + 1] == mapa[27][6] && mapa[27][6] == 'O'){
								px++;
								mapa[24][10] = ' ';
								mapa[25][10] = ' ';
							}
							
						else if(mapa[py][px + 1] == mapa[28][29]){
							mapa3();
						}
						
						else{
							
							px++;
						}
			    		
					}
					
		            break;
		            
		        case 'I':
		        case 'i':
		        	//Chave 1
		        	if(mapa[px - 1][py]  == mapa[1][2] || mapa[px][py - 1]  == mapa[1][2] || mapa[px + 1][py]  == mapa[1][2] || mapa[px][py + 1]  == mapa[1][2]){
		        		mapa[1][2] = ' ';
					}
							        	
		        	//usar a chave 1 na porta
		        	if(mapa[py - 1][px]  == mapa[3][5] || mapa[py][px - 1]  == mapa[3][5] || mapa[py + 1][px]  == mapa[3][5] || mapa[py][px + 1]  == mapa[3][5]){
		        		if(mapa[1][2] = ' '){
							mapa[3][5] = '=';
						}
						else{
							Cores(WHITE, _CYAN);
							slow_print("\n\nYou need the key to open the door", 50);
							Cores(WHITE, _BLACK);
							Sleep(1000);
						}
					}
					
					//Chave 2
					if(mapa[py - 1][px]  == mapa[9][5] || mapa[py][px - 1]  == mapa[9][5] || mapa[py + 1][px]  == mapa[9][5] || mapa[py][px + 1]  == mapa[9][5]){
		        		mapa[9][5] = ' ';
					}
					
					//usar a chave 2 na porta: 1
					if(mapa[py - 1][px]  == mapa[23][8] || mapa[py][px - 1]  == mapa[23][8] || mapa[py + 1][px]  == mapa[23][8] || mapa[py][px + 1]  == mapa[23][8]){
						if(mapa[9][5] == ' '){
							mapa[23][8] = '=';
						}

					}
					
					//usar a chave 2 na porta: 2
					if(mapa[py - 1][px]  == mapa[23][9] || mapa[py][px - 1]  == mapa[23][9] || mapa[py + 1][px]  == mapa[23][9] || mapa[py][px + 1]  == mapa[23][9]){
						if(mapa[9][5] == ' '){
							mapa[23][9] = '=';
						}

					}
					
					//Chave 3
					if(mapa[py - 1][px]  == mapa[25][21] || mapa[py][px - 1]  == mapa[25][21] || mapa[py + 1][px]  == mapa[25][21] || mapa[py][px + 1]  == mapa[25][21]){
		        		mapa[25][21] = ' ';
					}
					
					//usar a chave 3 na porta: 1
					if(mapa[py - 1][px]  == mapa[13][17] || mapa[py][px - 1]  == mapa[13][17] || mapa[py + 1][px]  == mapa[13][17] || mapa[py][px + 1]  == mapa[13][17]){
		        		if(mapa[25][21] == ' '){
		        			mapa[13][17] = '=';
						}
						
					}
				
					
					//usar a chave 3 na porta: 2
					if(mapa[py - 1][px]  == mapa[13][18] || mapa[py][px - 1]  == mapa[13][18] || mapa[py + 1][px]  == mapa[13][18] || mapa[py][px + 1]  == mapa[13][18]){
		        		if(mapa[25][21] == ' '){
		        			mapa[13][18] = '=';
						}
						
					}
									
					//usar a chave 3 na porta: 3
					if(mapa[py - 1][px]  == mapa[13][19] || mapa[py][px - 1]  == mapa[13][19] || mapa[py + 1][px]  == mapa[13][19] || mapa[py][px + 1]  == mapa[13][19]){
		        		if(mapa[25][21] == ' '){
		        			mapa[13][19] = '=';
						}
						
					}
					
					//Chave 4
					if(mapa[py - 1][px]  == mapa[7][28] || mapa[py][px - 1]  == mapa[7][28] || mapa[py + 1][px]  == mapa[7][28] || mapa[py][px + 1]  == mapa[7][28]){
		        		mapa[7][28] = ' ';
					}
					
					//usar a chave 4 na porta: 1
					if(mapa[py - 1][px]  == mapa[13][26] || mapa[py][px - 1]  == mapa[13][26] || mapa[py + 1][px]  == mapa[13][26] || mapa[py][px + 1]  == mapa[13][26]){
		        		if(mapa[7][28] == ' '){
		        			mapa[13][26] = '=';
						}

					}
					
					//usar a chave 4 na porta: 1
					if(mapa[py - 1][px]  == mapa[13][25] || mapa[py][px - 1]  == mapa[13][25] || mapa[py + 1][px]  == mapa[13][25] || mapa[py][px + 1]  == mapa[13][25]){
		        		if(mapa[7][28] == ' '){
		        			mapa[13][25] = '=';
						}
					}
					
					//Chave 5
					if(mapa[py - 1][px]  == mapa[24][23] || mapa[py][px - 1]  == mapa[24][23] || mapa[py + 1][px]  == mapa[24][23] || mapa[py][px + 1]  == mapa[24][23]){
		        		mapa[24][23] = ' ';
					}
					
					//usar a chave 5 na porta
					if(mapa[py - 1][px]  == mapa[28][29] || mapa[py][px - 1]  == mapa[28][29] || mapa[py + 1][px]  == mapa[28][29] || mapa[py][px + 1]  == mapa[28][29]){
		        		if(mapa[24][23] == ' '){
		        			mapa[28][29] = '=';
						}
					}
					
		        	break;
		         
				 //Tentativa de Pause
				case 'P':
				case 'p':
					
				   
				    break;
				    
		        default:
		        	Cores(WHITE, _RED);
		            printf("\n\nOpção inválida!\n");
		            Cores(WHITE, _BLACK);
					Sleep(1500);
		            break;
			
			}
		}
		
		gameover();
	}


void mapa3(){
	system("cls");
	
	
	char mapa[60][60] = {
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},//0
		{'*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '@', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ', ' ', '#',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '#', '#', '#','#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//1
		{'*', '*', '*', '*', ' ', '*', ' ', '*', '*', '*', '#', '#', ' ', ' ', ' ', '#', '#', '#', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//2
		{'*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '#', ' ', ' ', '#', '#','#', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', '*'},//3
		{'*', '*', '*', '*', ' ', '*', ' ', ' ', 'O', '*', '*', '*', '#', '*', '*', '*', '#', '*', '*', '*', ' ','*', '*', '*', '#', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#','#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '*'},//4
		{'*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', '@', '#','#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//5
		{'*', '*', '*', '*', ' ', '*', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#','#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', '#', '#','#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//7
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', ' ', '*', '*', '*', ' ','*', '*', '*', '#', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//8
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//9
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '*'},//10
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', '*'},//11
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '#', '*', '*', '*', ' ','*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D'},//12
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', '#', '#', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', '#', '#', '#', '#', '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '*'},//14
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', '#', '#', '#', '#', '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//15
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', '*', '*', '*', '#','*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '#', ' ', '#', '#', '#', '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//17
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '#','*', '*', '*', 'D', '*', '*', '*', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '*'},//20
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '>', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', '*', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '#', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},//24
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ',' ', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ',' ', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '#', '#', '#', '#', '#',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', '*', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '#', ' ', ' ', '#', '#', '#','#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', '*', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', ' ', '#', ' ', ' ', ' ', ' ', '#','#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ','#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ','#', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ','#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},//45
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', '#', ' ', ' ', ' ', ' ', ' ', ' ','#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', '#', '#', ' ', ' ', ' ', ' ', '#','#', '#', '#', '#', '#', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ',' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ',' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', '*', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', '#', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', '#', '#', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '#', ' ', '#', ' ', ' ', '#', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', '*', '*', '*', ' ', ' ', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', '#', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '#', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', ' ', ' ', '#', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', ' ', '*'},
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', 'O', '#', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', ' ', ' ', '*'},//57
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '#', ' ', ' ', ' ', ' ', ' ', ' ', ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', '<', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '*'},//58
		{'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*','*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*'},//59
//                                      6                  10        12        14                                                          26       28        30   31        33   34   35            38        40             43   44                            50                       55              58                  		
};
// no olho do desenho de monstro, uma das tres eh a chave, colola a do meio
//botao da sala 1 abre o espinho para a sala 2      
//tp no [23][18] pro [58][43]
//enumerei linhas e colunas 
// G é pra ganhar o jogo
//uma chave no mapa para cada porta no comodo
//X eh monstro

	int x, y, HP = 5;
	//Posição inicial do jogador
	int px = 1, py = 1;
	//Comando do usuário
	char i;
		//Posição inicial do monstro 1
	int mx = 4, my = 6;
	//Movimentação aleatória do monstro 1
	int m, c;
	//Posição inicial do monstro 2
	int m1x = 14, m1y = 12;
	//Movimentação aleatória do monstro 2
	int m1, c1;
	//Posição inicial do monstro 3
	int m2x = 45, m2y = 55;
	//Movimentação aleatória do monstro 3
	int m2, c2;
	//Posição inicial do monstro 4
	int m3x = 33, m3y = 3;
	//Movimentação aleatória do monstro 4
	int m3 ,c3; 
	
	
	while(HP > 0){
	
	system("cls");
	
	for(y = 0; y < 60; y++){
		for(x = 0; x < 60; x++){
				if(px == x && py == y){
					printf("    &");
					
					
				}//Monstro 1
				else if(mx == x && my == y){
					Cores(LIGHTRED,_BLACK);
					printf("    ¬");
					Cores(WHITE,_BLACK);
				}
				//Monstro 2
				else if(m1x == x && m1y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    ¬");
					Cores(WHITE,_BLACK);
				}
				//Monstro 3
				else if(m2x == x && m2y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    ¬");
					Cores(WHITE,_BLACK);
				}
				//Monstro 4
				else if(m3x == x && m3y == y){
					Cores(LIGHTRED,_BLACK);
					printf("    ¬");
					Cores(WHITE,_BLACK);
				}
				else{
					Cores(LIGHTGREEN,_BLACK);
					printf("  %c", mapa[y][x]);
					Cores(WHITE,_BLACK);
				}
			}
			printf("\n");
		}
		//Monstro 1
		srand(time(NULL));
		for (c = 0; c < 1; c++){
			m = rand() % 4;
		
			//monstro andar para cima
			if(m == 0){
				if(my > 0 && mapa[my - 1][mx] != '*' && mapa[my - 1][mx] != '@' && mapa[my - 1][mx] != 'D' && mapa[my - 1][mx] != '#' && mapa[my - 1][mx] != 'O'){
					my--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m == 1){
				if(my > 0 && mapa[my + 1][mx] != '*' && mapa[my + 1][mx] != '@' && mapa[my + 1][mx] != 'D' && mapa[my + 1][mx] != '#' && mapa[my + 1][mx] != 'O'){
					my++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m == 2){
				if(mx > 0 && mapa[my][mx - 1] != '*' && mapa[my][mx - 1] != '@' && mapa[my][mx - 1] != 'D' && mapa[my][mx - 1] != '#' && mapa[my][mx - 1] != 'O'){
					mx--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m == 3){
				if(mx > 0 && mapa[my][mx + 1] != '*' && mapa[my][mx + 1] != '@' && mapa[my][mx + 1] != 'D' && mapa[my][mx + 1] != '#' && mapa[my][mx + 1] != 'O'){
					mx++;
				}
				
				break;
			}
		}
		//Monstro2
		srand(time(NULL));
		for (c1 = 0; c1 < 1; c1++){
			m1 = rand() % 4;
		
			//monstro andar para cima
			if(m1 == 0){
				if(m1y > 0 && mapa[m1y - 1][m1x] != '*' && mapa[m1y - 1][m1x] != '@' && mapa[m1y - 1][m1x] != 'D' && mapa[m1y - 1][m1x] != '#' && mapa[m1y - 1][m1x] != 'O'){
					m1y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m1 == 1){
				if(my > 0 && mapa[my + 1][mx] != '*' && mapa[my + 1][mx] != '@' && mapa[my + 1][mx] != 'D' && mapa[my + 1][mx] != '#' && mapa[my + 1][mx] != 'O'){
					m1y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m1 == 2){
				if(m1x > 0 && mapa[m1y][m1x - 1] != '*' && mapa[m1y][m1x - 1] != '@' && mapa[m1y][m1x - 1] != 'D' && mapa[m1y][m1x - 1] != '#' && mapa[m1y][m1x - 1] != 'O'){
					m1x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m1 == 3){
				if(m1x > 0 && mapa[m1y][m1x + 1] != '*' && mapa[m1y][m1x + 1] != '@' && mapa[m1y][m1x + 1] != 'D' && mapa[m1y][m1x + 1] != '#' && mapa[m1y][m1x + 1] != 'O'){
					m1x++;
				}
				
				break;
			}
		}
		//Monstro 3
		srand(time(NULL));
		for (c2 = 0; c2 < 1; c2++){
			m2 = rand() % 4;
		
			//monstro andar para cima
			if(m2 == 0){
				if(m2y > 0 && mapa[m2y - 1][m2x] != '*' && mapa[m2y - 1][m2x] != '@' && mapa[m2y - 1][m2x] != 'D' && mapa[m2y - 1][m2x] != '#' && mapa[m2y - 1][m2x] != 'O'){
					m2y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m2 == 1){
				if(m2y > 0 && mapa[m2y + 1][m2x] != '*' && mapa[m2y + 1][m2x] != '@' && mapa[m2y + 1][m2x] != 'D' && mapa[m2y + 1][m2x] != '#' && mapa[m2y + 1][m2x] != 'O'){
					m2y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m2 == 2){
				if(m2x > 0 && mapa[m2y][m2x - 1] != '*' && mapa[m2y][m2x - 1] != '@' && mapa[m2y][m2x - 1] != 'D' && mapa[m2y][m2x - 1] != '#' && mapa[m2y][m2x - 1] != 'O'){
					m2x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m2 == 3){
				if(m2x > 0 && mapa[m2y][m2x + 1] != '*' && mapa[m2y][m2x + 1] != '@' && mapa[m2y][m2x + 1] != 'D' && mapa[m2y][m2x + 1] != '#' && mapa[m2y][m2x + 1] != 'O'){
					m2x++;
				}
				
				break;
			}
		}
		//Monstro 4
		srand(time(NULL));
		for (c3 = 0; c3 < 1; c3++){
			m3 = rand() % 4;
		
			//monstro andar para cima
			if(m3 == 0){
				if(m3y > 0 && mapa[m3y - 1][m3x] != '*' && mapa[m3y - 1][m3x] != '@' && mapa[m3y - 1][m3x] != 'D' && mapa[m3y - 1][m3x] != '#' && mapa[m3y - 1][m3x] != 'O'){
					m3y--;
				}
				
				break;
			}
			
			//monstro andar para baixo
			if(m3 == 1){
				if(m3y > 0 && mapa[m3y + 1][m3x] != '*' && mapa[m3y + 1][m3x] != '@' && mapa[m3y + 1][m3x] != 'D' && mapa[m3y + 1][m3x] != '#' && mapa[m3y + 1][m3x] != 'O'){
					m3y++;
				}
				
				break;
			}
			
			//monstro andar para esquerda
			if(m3 == 2){
				if(m3x > 0 && mapa[m3y][m3x - 1] != '*' && mapa[m3y][m3x - 1] != '@' && mapa[m3y][m3x - 1] != 'D' && mapa[m3y][m3x - 1] != '#' && mapa[m3y][m3x - 1] != 'O'){
					m3x--;
				}
				
				break;
			}
			
			//monstro andar para direita
			if(m3 == 3){
				if(m3x > 0 && mapa[m3y][m3x + 1] != '*' && mapa[m3y][m3x + 1] != '@' && mapa[m3y][m3x + 1] != 'D' && mapa[m3y][m3x + 1] != '#' && mapa[m3y][m3x + 1] != 'O'){
					m3x++;
				}
				
				break;
			}
		}
		
	Cores(RED, _BLACK);
	printf("\n\n HP: %d", HP);
	Cores(WHITE, _BLACK);	
	
	i = getch();

		switch(i){
			        
		       	case 'W':
			    case 'w':
			    	if(py > 0 && mapa[py - 1][px] != '*' && mapa[py - 1][px] != '@' && mapa[py - 1][px] != 'D'){
				    		
							if(mapa[py - 1][px] == '#'){
				    			HP--;
								px = 1, py = 1;
							}
							
							else if(mapa[py - 1][px] == mapa[4][8] && mapa[4][8] == 'O'){
								py--;
								mapa[7][9] = ' ';
							}
							
							else if(mapa[py - 1][px] == '>'){
								px = 43, py = 57;
							}
							
							else if(mapa[py - 1][px] == '<'){
								px = 18, py= 23;
							}
							
							else{
								
								py--;
							}
				    		
						}
					
		            break;
		            
		        case 'A':
			    case 'a':
		          	if(px > 0 && mapa[py][px - 1] != '*' && mapa[py][px - 1] != '@' && mapa[py][px - 1] != 'D'){
							
							if(mapa[py][px - 1] == '#'){
				    			HP--;
								px = 1, py = 1;
							}
							
							else if(mapa[py][px - 1] == '>'){
								px = 43, py = 57;
							}
							
							else if(mapa[py][px - 1] == '<'){
								px = 18, py= 23;
							}
							
							else{
								
								px--;
							}
				    		
						}
															
		            break;
		            
		       	case 'S':
			    case 's':
		              if(py > 0 && mapa[py + 1][px] != '*' && mapa[py + 1][px] != '@' && mapa[py + 1][px] != 'D'){
				    		
						if(mapa[py + 1][px] == '#'){
				    			HP--;
								px = 1, py = 1;
						}
						else if(mapa[py + 1][px] == mapa[4][8] && mapa[4][8] == 'O'){
								py++;
								mapa[7][9] = ' ';
						}
						
						else if(mapa[py + 1][px] == mapa[57][28] && mapa[57][28] == 'O'){
								py++;
								mapa[24][43] = ' ';
						}
						
						else if(mapa[py + 1][px] == '>'){
								px = 43, py = 57;
							}
							
						else if(mapa[py + 1][px] == '<'){
							px = 18, py= 23;
						}
								
							else{
								
								py++;
							}
			        	}
			        	
		            break;
		            
		        case 'D':
			    case 'd':
		            if(px > 0 && mapa[py][px + 1] != '*' && mapa[py][px + 1] != '@' && mapa[py][px + 1] != 'D'){
			    		
						if(mapa[py][px + 1] == '#'){
			    			HP--;
							px = 1, py = 1;
						}
						else if(mapa[py][px + 1] == mapa[4][8] && mapa[4][8] == 'O'){
								px++;
								mapa[7][9] = ' ';
						}
						
						else if(mapa[py][px + 1] == '>'){
							px = 43, py = 57;
						}
						
						else if(mapa[py][px + 1] == '<'){
							px = 18, py= 23;
						}
							
						else{
							
							px++;
						}
						
			    		
					}
					
		            break;
		            
		        case 'I':
		        case 'i':
					//chave 1
					if(mapa[py - 1][px]  == mapa[1][10] || mapa[py][px - 1]  == mapa[1][10] || mapa[py + 1][px]  == mapa[1][10] || mapa[py][px + 1]  == mapa[1][10]){
		        		mapa[1][10] = ' ';
					}
					//usar a chave 1 na porta
		        	if(mapa[py - 1][px]  == mapa[20][24] || mapa[py][px - 1]  == mapa[20][24] || mapa[py + 1][px]  == mapa[20][24] || mapa[py][px + 1]  == mapa[20][24]){
		        		if(mapa[1][10] = ' '){
							mapa[20][24] = '=';
						}
						else{
							Cores(WHITE, _CYAN);
							slow_print("\n\nYou need the key to open the door", 50);
							Cores(WHITE, _BLACK);
							Sleep(1000);
						}
					}
					
					//Chave 3
					if(mapa[py - 1][px]  == mapa[5][34] || mapa[py][px - 1]  == mapa[5][34] || mapa[py + 1][px]  == mapa[5][34] || mapa[py][px + 1]  == mapa[5][34]){
		        		mapa[5][34] = ' ';
					}
					
					//usar a chave 3 na porta
					if(mapa[py - 1][px]  == mapa[24][43] || mapa[py][px - 1]  == mapa[24][43] || mapa[py + 1][px]  == mapa[24][43] || mapa[py][px + 1]  == mapa[24][43]){
						if(mapa[5][34] == ' '){
							mapa[9][44] = '=';
						}
					}
					
		        	break;
				    
		        default:
		        	Cores(WHITE, _RED);
		            printf("\n\nOpção inválida!\n");
		            Cores(WHITE, _BLACK);
					Sleep(1500);
		            break;
			
		}
		
	}
	
	gameover();
}
