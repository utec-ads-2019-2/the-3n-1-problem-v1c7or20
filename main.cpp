#include <iostream>
#include <algorithm>

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
    int numero1,numero2,contador,contadorfinal;
    while(cin>>numero1>>numero2){
        contadorfinal=0;
        for (int i = min(numero1,numero2); i <=max(numero1,numero2); i++) {
            contador=1;
            contador = the3np(i,contador);
            contadorfinal= max(contador,contadorfinal);
        }
        cout<<numero1<<" "<<numero2<<" "<<contadorfinal<<endl;
    }
    return 0;
}
