#include "Pessoa.hpp"

Pessoa::Pessoa()
{

}
Pessoa::Pessoa(string _n, string end, string tel)
{
  nome = _n;
  endereco = end;
  telefone = tel;
}
void Pessoa::imprimePessoa()
{
  cout << "\nSeu nome é: " << nome << "\nO endereco de " << nome << " é: " << endereco << "\nO telefone de " << nome << " é: " << telefone << "\n";
}
void Pessoa::setNome(string n)
{
  nome = n;
}
void Pessoa::setEndereco(string e)
{
  endereco = e;
}
void Pessoa::setTelefone(string t)
{
  telefone = t;
}
string Pessoa::getNome()
{
  return nome;
}
string Pessoa::getEndereco()
{
  return endereco;
}
string Pessoa::getTelefone()
{
  return telefone;
}