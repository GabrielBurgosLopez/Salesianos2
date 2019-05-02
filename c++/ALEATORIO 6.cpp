#include<iostream>
#include<cstdlib> 
#include<ctime>
/*Este programa genera una matriz 3x3 al azar*/
int main(){
	char matriz[10][10];//Aquí guardamos los números
	int fil,col;
	int posx, posy;
	char palabra[10];
	char salir;
	double semillita;
	semillita=time(0);
	srand(semillita);
	for(fil=0;fil<10;fil++){
      for(col=0;col<10;col++){
		  matriz[fil][col]=rand()%25+65;
		  std::cout<<matriz[fil][col];
	  }
	  posx=rand()%10;
	  posy=rand()%10;
	  matriz[posx][posy]='*';
                              std::cout<<"\n";
                              }
	std::cout<<"\nToca cualquier tecla para salir";
	std::cin>>salir;
	return 0;
}
