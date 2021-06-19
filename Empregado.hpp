#ifndef Empregado_hpp
#define Empregado_hpp
#include "Pessoa.hpp"

class Empregado : public Pessoa
{
  public:
  Empregado(){};
  Empregado(string n, string end, string tel, int cs);
  void imprimePessoa();
  virtual void calcularSalario();
  void setCodigoSetor(int cs);
  //void setSalarioBase(float sb);
  void setImposto();
  int getCodigoSetor();
  float getSalarioBase();
  float getImposto();
  protected:
  int codigoSetor;
  float salarioBase = 2000;
  float imposto = 100;
  float salarioLiquido;
};
#endif