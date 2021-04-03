#include <iostream>
#include <string>
#include <cstdio>

using namespace std;
using std::string;

class VeiculoAVenda {
private:
    string marca, modelo;
    int ano;
    float precoDeVenda;

public: 
    VeiculoAVenda(string ma, string mo, int ano, double preco): 
        marca(ma), modelo(mo), ano(ano), precoDeVenda(preco){}


    string getMarca() {return marca;}
    string getModelo() {return modelo;}
    int getAno() {return ano;}
    double getPrecoDeVenda() {return precoDeVenda;}

    void setMarca(string marca) {this -> marca = marca;}
    void setModelo(string modelo) {this -> modelo = modelo;}
    void setAno(int ano) {this -> ano = ano;}
    void setPrecoDeVendo(double precoDeVenda) {this -> precoDeVenda = precoDeVenda;}

    virtual void mostraDados() {
        cout << "Marca: " + marca << endl;
        cout << "Modelo: " + modelo << endl;
        cout << "Ano: " << ano << endl;
        cout << "Preco de venda: " << precoDeVenda << "\n" << endl;
    }
};

class AutomovelAVenda : public VeiculoAVenda {
private:
    float motor;
    bool automatico;
    int qtdPortas;

public: 
    AutomovelAVenda(string ma, string mo, int ano, double preco, float motor, bool automatico, int nPortas):
        VeiculoAVenda(ma, mo, ano, preco),
        motor(motor), automatico(automatico), qtdPortas(nPortas) {}

    float getMotor() {return motor;}
    bool getAutomatico() {return automatico;}
    int getqtdPortas() {return qtdPortas;}

    void setMotor(float motor) {this -> motor = motor;}
    void setAutomatico(bool automatico) {this -> automatico = automatico;}
    void setqtdPortas(int qtdPortas) {this -> qtdPortas = qtdPortas;}

    void mostraDados() override {
        cout << "Marca: " + getMarca() << endl;
        cout << "Modelo: " + getModelo() << endl;
        cout << "Ano: " << getAno() << endl;
        cout << "Preco de venda: " << getPrecoDeVenda() << endl;
        cout << "Motor: " << motor << endl;

        if (this-> automatico) {
            cout << "Automatico: Sim" << endl;
        } else {
            cout << "Automatico: " << "Nao" << endl;
        }

        cout << "Número de Portas: " << qtdPortas << "\n" << endl;
    }
};

class MotocicletaAVenda : public VeiculoAVenda {
private:
    int cilindradas;

public:
    MotocicletaAVenda(string ma, string mo, int ano, double preco, int cilindradas):
        VeiculoAVenda(ma, mo, ano, preco),
        cilindradas(cilindradas) {}

    int getCilindradas() {return cilindradas;}

    void setCilindradas(int cilindradas) {this -> cilindradas = cilindradas;}

    void mostraDados() override {
        cout << "Marca: " + getMarca() << endl;
        cout << "Modelo: " + getModelo() << endl;
        cout << "Ano: " << getAno() << endl;
        cout << "Preco de venda: " << getPrecoDeVenda() << endl;
        cout << "Cilindradas: " << cilindradas << "\n" << endl;
    }
};

int main() {
    AutomovelAVenda automovel1("Maserati", "Camaro", 2020, 250000, 2.4, true, 4);
    AutomovelAVenda automovel2("Alfa Romeo", "Giulia", 2019, 31033.20, 1.6, false, 2);

    MotocicletaAVenda moto1("Yamaha", "YZF-R1", 2020, 8000, 300);
    MotocicletaAVenda moto2("BMW", "G310", 2016, 15000, 600);

    automovel1.mostraDados();
    automovel2.mostraDados();
    
    moto1.mostraDados();
    moto2.mostraDados();

    float precoVeiculosTotal = automovel1.getPrecoDeVenda() + automovel2.getPrecoDeVenda() + moto1.getPrecoDeVenda() + moto2.getPrecoDeVenda();

    cout << "Preço total dos veiculos juntos : R$ " << precoVeiculosTotal << endl;
}
