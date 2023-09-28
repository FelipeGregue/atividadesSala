#include <iostream>
#include <string>

using namespace std;

class Livro{
    public: 
        string genero;
        int numPaginas;
        string nome;
        string autor;

        void alugar (string _nome){
            cout << "O livro escolhido foi: " << _nome;
        }

};

class Celular{
    public:
        string marca;
        string modelo;
        int armazenamento;
        int ram;
        string processador;
        string GPU;

        void comprar (string _celular){
            cout << "O celular comprado foi: " << _celular;
        }
};

class Mamifero{
    public:
        bool genero;
        string nome;
        int idade;
        float peso;

};

class Ave{
    public:
        bool genero;
        string nome;
        int idade;
        float peso;

};

class Flor{
    public:
        string cor;
        string nome;
        string aroma;

};

int main(){

    Livro Narnia;
    Narnia.genero = "Fantasia";
    cout << Narnia.genero << endl;

    Narnia.alugar("As cronicas de Narnia.");
    cout << endl;
    

    Celular Samsung;
    Samsung.armazenamento = 256;
    cout << Samsung.armazenamento << "GB" << endl;

    Samsung.comprar("S23 Ultra");
    cout << endl;

    return 0;
    
}