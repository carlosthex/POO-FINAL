#include "Fornecedor.hpp"

Fornecedor::Fornecedor(string n, string end, string tel, float valorc, float valord)
{
  nome = n;
  endereco = end;
  telefone = tel;
  valorCredito = valorc;
  valorDivida = valord;
  obterSaldo();
}
void Fornecedor::imprimePessoa()
{
  cout << "\nSeu nome é: " << nome << "\nO endereco de " << nome << " é: " << endereco << "\nO telefone de " << nome << " é: " << telefone << "\nO valor de credito de " << nome << " é: " << valorCredito << "\nO valor de divida de " << nome << " é: " << valorDivida << "\nO saldo de " << nome << " é de: " << saldo << "\n";
}
void Fornecedor::obterSaldo()
{
  saldo = valorCredito - valorDivida;
}
void Fornecedor::setValorCredito(float vc)
{
  valorCredito = vc;
  obterSaldo();
}
void Fornecedor::setValorDivida(float vd)
{
  valorDivida = vd;
  obterSaldo();
}
float Fornecedor::getValorCredito()
{
  return valorCredito;
}
float Fornecedor::getValorDivida()
{
  return valorDivida;
};