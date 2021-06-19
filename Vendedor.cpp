#include "Vendedor.hpp"

Vendedor::Vendedor(string n, string end, string tel, int codigos, float valorv, float comissaov)
{
  nome = n;
  endereco = end;
  telefone = tel;
  codigoSetor = codigos;
  valorVendas = valorv;
  comissaoVendas = comissaov;
  calcularSalario();
}
void Vendedor::imprimePessoa()
{
  cout << "\nSeu nome é: " << nome << "\nO endereco de " << nome << " é: " << endereco << "\nO telefone de " << nome << " é: " << telefone << "\nO codigo de setor de " << nome << " é: " << codigoSetor << "\nO salario base de " << nome << " é: " << salarioBase << "\nO imposto de " << nome << " é: " << imposto << "\nO valor de vendas de " << nome << " é: " << valorVendas << "\nA comissao de vendas de " << nome << " é: " << comissaoVendas << "%" << "\nO salario de " << nome << " é: " << salarioLiquido;
}
void Vendedor::calcularSalario()
{
  salarioLiquido = valorVendas*(comissaoVendas/100) + salarioBase - salarioBase*0.05;
}
void Vendedor::setValorVendas(float vv)
{
 valorVendas = vv;
 calcularSalario();
}
float Vendedor::getValorVendas()
{
  return valorVendas;
}
void Vendedor::setComissaoVendas(float cv)
{
  comissaoVendas = cv;
  calcularSalario();
}
float Vendedor::getComissaoVendas()
{
  return comissaoVendas;
}