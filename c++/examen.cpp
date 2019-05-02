#include<iostream>
#include<cstdlib>
#include<ctime>


int main(){
    char matriz[10][10];
    char palabra[10];
    int fil,col;
    int longitud;
    int posx,posy;
    char salir;
    int semillita;
    semillita=time(0);
    srand(semillita);
    
    posx=rand()%10;
    posy=rand()%10;
   	std::cout<<"Introduce una palabra: ";
	std::cin>>palabra;
	longitud=strlen(palabra);
	for(col=posy;col<posy+longitud;col++){
                                         matriz[posx][col]=palabra[col-posy];
                                         }
    std::cout<<"longitud de la palabra: "<<longitud;
    std::cout<<"\ntoca cualquier letra para salir: ";
    std::cin>>salir;
    return 0;
}
