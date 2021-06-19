#ifndef Administrador_hpp
#define Administrador_hpp
#include "Empregado.hpp"

class Administrador : public Empregado
{
  public:
  Administrador(string _nome, string _e, string _t, int _codigos);
  void imprimePessoa();
  void calcularSalario();
  float getAjudaCusto();
  protected:
  float ajudaCusto = 200;
};
#endif