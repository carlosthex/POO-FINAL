#ifndef Pessoa_hpp
#define Pessoa_hpp
#include <iostream>
using namespace std;

class Pessoa
{
  public:
  Pessoa();
  Pessoa(string _n, string end, string tel);
  virtual void imprimePessoa();
  void setNome(string n);
  void setEndereco(string e);
  void setTelefone(string t);
  string getNome();
  string getEndereco();
  string getTelefone();
  protected:
  string nome;
  string endereco;
  string telefone;
};
#endif