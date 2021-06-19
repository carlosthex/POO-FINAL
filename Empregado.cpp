#include "Empregado.hpp"

Empregado::Empregado(string n, string end, string tel, int cs)
{
  nome = n;
  endereco = end;
  telefone = tel;
  codigoSetor = cs;
}
void Empregado::imprimePessoa()
{
  cout << "\nSeu nome é: " << nome << "\nO endereco de " << nome << " é: " << endereco << "\nO telefone de " << nome << " é: " << telefone << "\nO codigo de setor de " << nome << " é: " << codigoSetor << "\nO salario base de " << nome << " é: " << salarioBase << "\nO imposto de " << nome << " é: " << imposto << "\nO salario de " << nome << " é: " << salarioLiquido;
}
void Empregado::calcularSalario()
{
  salarioLiquido = salarioBase - salarioBase*0.05;
  cout << "\nSeu salario liquido é: " << salarioLiquido;
}
void Empregado::setCodigoSetor(int cs)
{
  codigoSetor = cs;
}
/*void Empregado::setSalarioBase(float sb)
{
  salarioBase = sb;
}*/
void Empregado::setImposto()
{
  imposto = salarioBase*0.05;
}
int Empregado::getCodigoSetor()
{
  return codigoSetor;
}
float Empregado::getSalarioBase()
{
  return salarioBase;
}
float Empregado::getImposto()
{
  return imposto;
}