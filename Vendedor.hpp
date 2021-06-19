#ifndef Vendedor_hpp
#define Vendedor_hpp
#include "Empregado.hpp"

class Vendedor : public Empregado
{
  public:
  Vendedor(string n, string end, string tel, int codigos, float valorv, float comissaov);
  void imprimePessoa();
  void calcularSalario();
  void setValorVendas(float vv);
  float getValorVendas();
  void setComissaoVendas(float cv);
  float getComissaoVendas();
  protected:
  float valorVendas;
  float comissaoVendas;
};
#endif