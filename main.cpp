#include <iostream>
#include "Fornecedor.hpp"
#include "Empregado.hpp"
#include "Administrador.hpp"
#include "Operario.hpp"
#include "Vendedor.hpp"
#include "Menanger.hpp"
using namespace std;

int main() {
  Pessoa a;
  Pessoas b;
  Fornecedor Amanda;
  /*Fornecedor Carlos;
  Empregado Julio;
  Administrador Junior;
  Operario Guilherme;
  Vendedor Ronaldo;*/
  
  Amanda.setNome("Amanda");
  cout << Amanda.getNome();


  int opção = 5;  

    while (opção != 4){
        int valor, p, a;
        cout << "\n\n***********SELECIONE UMA OPÇÃO***********\n";
        cout << "1. Inserir Pessoa\n";
        cout << "2. Atualizar Pessoa\n";
        cout << "3. Relatorios\n";
        cout << "4. Sair\n";
        scanf("%d", &opção);
        switch (opção){

            case 1:
                b.adicionaPessoas();
                break;

            case 2:
                int a;
                cout << "1. Atualizar Pessoa\n";
                cout << "2. Atualizar Fornecedor\n";
                cout << "3. Atualizar Administrador\n";
                cout << "4. Atualizar Operario\n";
                cout << "5. Atualizar Vendedor\n";
                cin >> a;
                if(a == 1){
                  b.atualizaPessoa();
                }
                if(a == 2){
                  b.atualizaFornecedor();
                }
                if(a == 3){
                  b.atualizaAdministrador();
                }
                if(a == 4){
                  b.atualizaOperario();
                }
                if(a == 5){
                  b.atualizaVendedor();
                }
                break;

            case 3:
                int p;
                cout << "1. Listagem Pessoas\n";
                cout << "2. Listagem Fornecedores\n";
                cout << "3. Listagem Empregados\n";
                cout << "4. Listagem Administradores\n";
                cout << "5. Listagem Operarios\n";
                cout << "6. Listagem Vendedores\n";
                cin >> p;
                if(p == 1){
                b.imprimePessoas();
                }
                if(p == 2){
                  b.imprimeFornecedores();
                }
                if(p == 3){
                  b.imprimeEmpregados();
                }
                if(p == 4){
                  b.imprimeAdministradores();
                }
                if(p == 5){
                  b.imprimeOperarios();
                }
                if(p == 6){
                  b.imprimeVendedores();
                }
                break;
            
            case 4:
            break;
          
            default:
                printf("\nOpcao invalida! Digite novamente \n");
        }

    }

























  /*cout << "\nTESTE FORNECEDOR\n\n";
  cout << "*************************\n";
  Carlos.setNome("Carlos");
  Carlos.setEndereco("Rua Vivalar, 441, Ivoti");
  Carlos.setTelefone("998874156");
  Carlos.setValorCredito(10000);
  Carlos.setValorDivida(6000);
  

  cout << "Seu nome é: " << Carlos.getNome() << "\nO endereço de " << Carlos.getNome() << " é: " << Carlos.getEndereco() << "\nO telefone de " << Carlos.getNome() << " é: " << Carlos.getTelefone() << "\nO valor de credito de " << Carlos.getNome() << " é: " << Carlos.getValorCredito() << "\nO valor de divida de " << Carlos.getNome() << " é: " << Carlos.getValorDivida();
  Carlos.obterSaldo();
  cout << "\n*************************\n";

  cout << "\nTESTE EMPREGADO\n\n";
  cout << "***********************";
  Julio.setNome("Julio");
  Julio.setEndereco("Rua Joaquim Nabuco, 171, Sapucaia do Sul");
  Julio.setTelefone("997875146");
  Julio.setCodigoSetor(4);
  //Julio.setSalarioBase(2000);
  Julio.setImposto();

  cout << "\nSeu nome é: " << Julio.getNome() << "\nO endereço de " << Julio.getNome() << " é: " << Julio.getEndereco() << "\nO telefone de " << Julio.getNome() << " é: " << Julio.getTelefone() << "\nO codigo de setor de " << Julio.getNome() << " é: " << Julio.getCodigoSetor() << "\nO salario base de " << Julio.getNome() << " é: " << Julio.getSalarioBase() << "\nO imposto de " << Julio.getNome() << " é: " << Julio.getImposto();
  Julio.calcularSalario();
  cout << "\n***********************\n";

  cout << "\nTESTE ADMINISTRADOR\n\n";
  cout << "***********************";
  Junior.setNome("Junior");
  Junior.setEndereco("Rua Tiradentes, 270, Sapucaia do Sul");
  Junior.setTelefone("995418756");
  Junior.setCodigoSetor(2);
  //Junior.setSalarioBase(2000);
  Junior.setImposto();

  cout << "\nSeu nome é: " << Junior.getNome() << "\nO endereço de " << Junior.getNome() << " é: " << Junior.getEndereco() << "\nO telefone de " << Junior.getNome() << " é: " << Junior.getTelefone() << "\nO codigo de setor de " << Junior.getNome() << " é: " << Junior.getCodigoSetor() << "\nO salario base de " << Junior.getNome() << " é: " << Junior.getSalarioBase() << "\nO imposto de " << Junior.getNome() << " é: " << Junior.getImposto() << "\nA ajuda de custo é: " << Junior.getAjudaCusto();
  Junior.calcularSalario();
  cout << "\n***********************\n";
  
  cout << "\nTESTE OPERARIO\n\n";
  cout << "*************************\n";
  Guilherme.setNome("Guilherme");
  Guilherme.setEndereco("Rua do Passeio, 239, Sapucaia do Sul");
  Guilherme.setTelefone("994874456");
  Guilherme.setCodigoSetor(8);
  Guilherme.setImposto();
  Guilherme.setValorProducao(4000);
  Guilherme.setComissao(20);

  cout << "Seu nome é: " << Guilherme.getNome() << "\nO endereço de " << Guilherme.getNome() << " é: " << Guilherme.getEndereco() << "\nO telefone de " << Guilherme.getNome() << " é: " << Guilherme.getTelefone() << "\nO codigo de setor de " << Guilherme.getNome() << " é: " << Guilherme.getCodigoSetor() << "\nO salario base de " << Guilherme.getNome() << " é: " << Guilherme.getSalarioBase() << "\nO imposto de " << Guilherme.getNome() << " é: " << Guilherme.getImposto() << "\nO valor de producao é: " << Guilherme.getValorProducao() << "\nO valor da sua comissao é de " << Guilherme.getComissao() << "%"; 
    Guilherme.calcularSalario();
    cout << "\n*************************\n";
    
  cout << "\nTESTE VENDEDOR\n\n";
   cout << "*************************\n";
   Ronaldo.setNome("Ronaldo");
   Ronaldo.setEndereco("Rua do Passeio, 75, Sapucaia do Sul");
   Ronaldo.setTelefone("994822746");
   Ronaldo.setCodigoSetor(14);
   Ronaldo.setImposto();
   Ronaldo.setValorVendas(4000);
   Ronaldo.setComissaoVendas(10);

  cout << "Seu nome é: " << Ronaldo.getNome() << "\nO endereço de " << Ronaldo.getNome() << " é: " << Ronaldo.getEndereco() << "\nO telefone de " << Ronaldo.getNome() << " é: " << Ronaldo.getTelefone() << "\nO codigo de setor de " << Ronaldo.getNome() << " é: " << Ronaldo.getCodigoSetor() << "\nO salario base de " << Ronaldo.getNome() << " é: " << Ronaldo.getSalarioBase() << "\nO imposto de " << Ronaldo.getNome() << " é: " << Ronaldo.getImposto() << "\nO valor de vendas é: " << Ronaldo.getValorVendas() << "\nO valor da sua comissao é de " << Ronaldo.getComissaoVendas() << "%"; 
    Ronaldo.calcularSalario();
    cout << "\n*************************\n";*/
};