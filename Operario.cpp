#include "Operario.hpp"

Operario::Operario(string n, string end, string tel, int codigos, float vp, float c)
{
  nome = n;
  endereco = end;
  telefone = tel;
  codigoSetor = codigos;
  valorProducao = vp;
  comissao = c;
  calcularSalario();
}
void Operario::imprimePessoa()
{
  cout << "\nSeu nome é: " << nome << "\nO endereco de " << nome << " é: " << endereco << "\nO telefone de " << nome << " é: " << telefone << "\nO codigo de setor de " << nome << " é: " << codigoSetor << "\nO salario base de " << nome << " é: " << salarioBase << "\nO imposto de " << nome << " é: " << imposto << "\nO valor de producao de " << nome << " é: " << valorProducao << "\nA comissao de " << nome << " é: " << comissao << "%" << "\nO salario de " << nome << " é: " << salarioLiquido;
}
void Operario::calcularSalario()
{
  salarioLiquido = valorProducao*(comissao/100) + salarioBase - salarioBase*0.05;
}
void Operario::setValorProducao(float vp)
{
 valorProducao = vp;
 calcularSalario();
}
float Operario::getValorProducao()
{
  return valorProducao;
}
void Operario::setComissao(float c)
{
  comissao = c;
  calcularSalario();
}
float Operario::getComissao()
{
  return comissao;
}