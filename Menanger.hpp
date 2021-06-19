#include "Fornecedor.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Pessoa.hpp"
#include <vector>

class Pessoas{
  public:
  void adicionaPessoas();
  void imprimePessoas();
  void imprimeFornecedores();
  void imprimeEmpregados();
  void imprimeAdministradores();
  void imprimeOperarios();
  void imprimeVendedores();
  void atualizaPessoa();
  void atualizaFornecedor();
  void atualizaAdministrador();
  void atualizaOperario();
  void atualizaVendedor();

  private:
  vector<Pessoa> pessoas;
  vector<Fornecedor> fornecedores;
  vector<Administrador> administradores;
  vector<Operario> operarios;
  vector<Vendedor> vendedores;
};