#include<iostream>
float transforma(float eur){
    float respuesta;
    respuesta=eur*1.33;
    return(respuesta);
}
int main(){
    float eur;
    float respuesta;
    char salir;
    std::cout<<"Cantidad de euros: ";
    std::cin>>eur;
    std::cout<<transforma(eur);
    std::cout<<"\nToca cualquier tecla para salir: ";
    std::cin>>salir;
    return 0;
}
