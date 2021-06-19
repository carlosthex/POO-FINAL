#include "Administrador.hpp"

Administrador::Administrador(string _nome, string _e, string _t, int _codigos)
{
  nome = _nome;
  endereco = _e;
  telefone = _t;
  codigoSetor = _codigos;
  calcularSalario();
}
void Administrador::imprimePessoa()
{
  cout << "\nSeu nome é: " << nome << "\nO endereco de " << nome << " é: " << endereco << "\nO telefone de " << nome << " é: " << telefone << "\nO codigo de setor de " << nome << " é: " << codigoSetor << "\nO salario base de " << nome << " é: " << salarioBase << "\nO imposto de " << nome << " é: " << imposto << "\nO valor de ajuda de custo de " << nome << " é: " << ajudaCusto << "\nO salario de " << nome << " é: " << salarioLiquido;
}
void Administrador::calcularSalario()
{
  salarioLiquido = ajudaCusto + (salarioBase - salarioBase*0.05);
}
float Administrador::getAjudaCusto()
{
  return ajudaCusto;
}