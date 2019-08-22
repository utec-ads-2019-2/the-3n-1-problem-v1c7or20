#include <iostream>

using namespace std;


int the3np(int tempo, int contador){
    while(tempo != 1){
        if (tempo%2==1)
        {
            tempo = tempo*3 + 1;
            contador++;
        }else{
            tempo = tempo/2;
            contador++;
        }
    }
    return contador;
}

int main(int argc, char *argv[]) {
    int numero1,numero2,mayors,contador,contadorfinal;
    while(cin>>numero1>>numero2){
        contadorfinal=0;
        mayors = numero2-numero1;
        for (int i = 0; i <= mayors; i++) {
            int tempo = numero1 + i;
            contador=1;
            contador = the3np(tempo,contador);
            if (contadorfinal<contador){
                contadorfinal=contador;
            } else contadorfinal=contadorfinal;
        }
        cout<<numero1<<" "<<numero2<<" "<<contadorfinal<<endl;
    }
    return 0;
}
