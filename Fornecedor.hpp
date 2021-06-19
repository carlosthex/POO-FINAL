#ifndef Fornecedor_hpp
#define Fornecedor_hpp
#include "Pessoa.hpp"

class Fornecedor : public Pessoa
{
  public:
  Fornecedor(){};
  Fornecedor(string n, string end, string tel, float valorc, float valord);
  void imprimePessoa();
  void obterSaldo();
  void setValorCredito(float vc);
  void setValorDivida(float vd);
  float getValorCredito();
  float getValorDivida();
  protected:
  float valorCredito;
  float valorDivida;
  float saldo;
};
#endif