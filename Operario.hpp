#ifndef Operario_hpp
#define Operario_hpp
#include "Empregado.hpp"

class Operario : public Empregado
{
  public:
  Operario(string n, string end, string tel, int codigos, float vp, float c);
  void imprimePessoa();
  void calcularSalario();
  void setValorProducao(float vp);
  float getValorProducao();
  void setComissao(float c);
  float getComissao();
  protected:
  float valorProducao;
  float comissao;
};
#endif