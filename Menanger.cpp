#include "Menanger.hpp"


void Pessoas::adicionaPessoas()
{
  string n;
  string e;
  string t;
  float vc;
  float vd;
  int cs;
  float vp;
  float c;
  float vv;
  float cv;
  int opção = 7;  
    while (opção != 6){
        int valor, p;
        cout << "\n\n***********SELECIONE UMA OPÇÃO***********\n";
        cout << "1. Inserir Pessoa\n";
        cout << "2. Inserir Fornecedor\n";
        cout << "3. Inserir Administrador\n";
        cout << "4. Inserir Operario\n";
        cout << "5. Inserir Vendedor\n";
        cout << "6. Sair\n";
        scanf("%d", &opção);
        switch (opção){

            case 1:
                cout << "Digite seu nome: ";
                cin >> n;
                cout << "Digite seu endereco: ";
                cin >> e;
                cout << "Digite seu telefone: ";
                cin >> t;
                pessoas.push_back(Pessoa(n, e, t));
                break;

            case 2:
                cout << "Digite seu nome: ";
                cin >> n;
                cout << "Digite seu endereco: ";
                cin >> e;
                cout << "Digite seu telefone: ";
                cin >> t;
                cout << "Digite seu valor de credito: ";
                cin >> vc;
                cout << "Digite seu valor de divida: ";
                cin >> vd;
                fornecedores.push_back(Fornecedor(n, e, t, vc, vd));
                break;

            case 3:
                cout << "Digite seu nome: ";
                cin >> n;
                cout << "Digite seu endereco: ";
                cin >> e;
                cout << "Digite seu telefone: ";
                cin >> t;
                cout << "Digite o seu codigo do setor: ";
                cin >> cs;
                administradores.push_back(Administrador(n, e, t, cs));
                break;

            case 4:
                cout << "Digite seu nome: ";
                cin >> n;
                cout << "Digite seu endereco: ";
                cin >> e;
                cout << "Digite seu telefone: ";
                cin >> t;
                cout << "Digite o seu codigo do setor: ";
                cin >> cs;
                cout << "Digite seu valor de produção: ";
                cin >> vp;
                cout << "Digite sua comissão: ";
                cin >> c;
                operarios.push_back(Operario(n, e, t, cs, vp, c));
                break;  

                case 5:
                cout << "Digite seu nome: ";
                cin >> n;
                cout << "Digite seu endereco: ";
                cin >> e;
                cout << "Digite seu telefone: ";
                cin >> t;
                cout << "Digite o seu codigo do setor: ";
                cin >> cs;
                cout << "Digite seu valor de vendas: ";
                cin >> vv;
                cout << "Digite sua comissão de vendas: ";
                cin >> cv;
                vendedores.push_back(Vendedor(n, e, t, cs, vv, cv));
                break;

                case 6:
                break;  
          
            default:
                printf("\nOpcao invalida! Digite novamente \n");
        }

    }
}

void Pessoas::imprimePessoas()
{
  int i;
   for(i = 0; i < pessoas.size(); i++)
    {
        pessoas[i].imprimePessoa();
    }
}

void Pessoas::imprimeFornecedores()
{
  int i;
   for(i = 0; i < fornecedores.size(); i++)
    {
        fornecedores[i].imprimePessoa();
    }
}

void Pessoas::imprimeEmpregados()
{
  int i;
  
   for(i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimePessoa();
    }
   for(i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimePessoa();
    }
    for(i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimePessoa();
    }
}

void Pessoas::imprimeAdministradores()
{
  int i;
   for(i = 0; i < administradores.size(); i++)
    {
        administradores[i].imprimePessoa();
    }
}

void Pessoas::imprimeOperarios()
{
  int i;
   for(i = 0; i < operarios.size(); i++)
    {
        operarios[i].imprimePessoa();
    }
}

void Pessoas::imprimeVendedores()
{
  int i;
   for(i = 0; i < vendedores.size(); i++)
    {
        vendedores[i].imprimePessoa();
    }
}


void Pessoas::atualizaPessoa()
{
  int i;
  int o;
  string n;
  string nn;
  cout << "1. Atulizar nome\n";
  cout << "2. Atulizar endereco\n";
  cout << "3. Atulizar telefone\n";
  cin >> o;
  
  if(o == 1){
  cout << "Digite o nome que deseja alterar: ";
  cin >> n;
   for(i = 0; i < pessoas.size(); i++)
    {
        if(pessoas[i].getNome() == n){
          cout << "Digite o novo nome que deseja inserir: ";
          cin >> nn;
          pessoas[i].setNome(nn);
        }
    } 
}

  if(o == 2){
  cout << "Digite o endereco que deseja alterar: ";
  cin >> n;
   for(i = 0; i < pessoas.size(); i++)
    {
        if(pessoas[i].getEndereco() == n){
          cout << "Digite o novo endereco que deseja inserir: ";
          cin >> nn;
          pessoas[i].setEndereco(nn);
        }
    }
}
  if(o == 3){
  cout << "Digite o telefone que deseja alterar: ";
  cin >> n;
   for(i = 0; i < pessoas.size(); i++)
    {
        if(pessoas[i].getTelefone() == n){
          cout << "Digite o novo telefone que deseja inserir: ";
          cin >> nn;
          pessoas[i].setTelefone(nn);
        }
    }
  }
}

void Pessoas::atualizaFornecedor()
{
  int i;
  int o;
  float v;
  float nv;
  string n;
  string nn;
  cout << "1. Atulizar nome\n";
  cout << "2. Atulizar endereco\n";
  cout << "3. Atulizar telefone\n";
  cout << "4. Atulizar valor credito\n";
  cout << "5. Atulizar valor divida\n";
  cin >> o;
  
  if(o == 1){
  cout << "Digite o nome que deseja alterar: ";
  cin >> n;
   for(i = 0; i < fornecedores.size(); i++)
    {
        if(fornecedores[i].getNome() == n){
          cout << "Digite o novo nome que deseja inserir: ";
          cin >> nn;
          fornecedores[i].setNome(nn);
        }
    } 
}

  if(o == 2){
  cout << "Digite o endereco que deseja alterar: ";
  cin >> n;
   for(i = 0; i < fornecedores.size(); i++)
    {
        if(fornecedores[i].getEndereco() == n){
          cout << "Digite o novo endereco que deseja inserir: ";
          cin >> nn;
          fornecedores[i].setEndereco(nn);
        }
    }
}
  if(o == 3){
  cout << "Digite o telefone que deseja alterar: ";
  cin >> n;
   for(i = 0; i < fornecedores.size(); i++)
    {
        if(fornecedores[i].getTelefone() == n){
          cout << "Digite o novo telefone que deseja inserir: ";
          cin >> nn;
          fornecedores[i].setTelefone(nn);
        }
    }
  }
  if(o == 4){
  cout << "Digite o valor de credito que deseja alterar: ";
  cin >> v;
   for(i = 0; i < fornecedores.size(); i++)
    {
        if(fornecedores[i].getValorCredito() == v){
          cout << "Digite o novo valor de credito que deseja inserir: ";
          cin >> nv;
          fornecedores[i].setValorCredito(nv);
        }
    }
  }
  if(o == 5){
  cout << "Digite o valor de divida que deseja alterar: ";
  cin >> v;
   for(i = 0; i < fornecedores.size(); i++)
    {
        if(fornecedores[i].getValorDivida() == v){
          cout << "Digite o novo valor de divida que deseja inserir: ";
          cin >> nv;
          fornecedores[i].setValorDivida(nv);
        }
    }
  }
}

void Pessoas::atualizaAdministrador()
{
  int i;
  int o;
  int c;
  int nc;
  string n;
  string nn;
  cout << "1. Atulizar nome\n";
  cout << "2. Atulizar endereco\n";
  cout << "3. Atulizar telefone\n";
  cout << "4. Atulizar codigo setor\n";
  cin >> o;
  
  if(o == 1){
  cout << "Digite o nome que deseja alterar: ";
  cin >> n;
   for(i = 0; i < administradores.size(); i++)
    {
        if(administradores[i].getNome() == n){
          cout << "Digite o novo nome que deseja inserir: ";
          cin >> nn;
          administradores[i].setNome(nn);
        }
    } 
}

  if(o == 2){
  cout << "Digite o endereco que deseja alterar: ";
  cin >> n;
   for(i = 0; i < administradores.size(); i++)
    {
        if(administradores[i].getEndereco() == n){
          cout << "Digite o novo endereco que deseja inserir: ";
          cin >> nn;
          administradores[i].setEndereco(nn);
        }
    }
}
  if(o == 3){
  cout << "Digite o telefone que deseja alterar: ";
  cin >> n;
   for(i = 0; i < administradores.size(); i++)
    {
        if(administradores[i].getTelefone() == n){
          cout << "Digite o novo telefone que deseja inserir: ";
          cin >> nn;
          administradores[i].setTelefone(nn);
        }
    }
  }
  if(o == 4){
  cout << "Digite o codigo de setor que deseja alterar: ";
  cin >> c;
   for(i = 0; i < administradores.size(); i++)
    {
        if(administradores[i].getCodigoSetor() == c){
          cout << "Digite o novo telefone que deseja inserir: ";
          cin >> nc;
          administradores[i].setCodigoSetor(nc);
        }
    }
  }
}

void Pessoas::atualizaOperario()
{
  int i;
  int o;
  int c;
  int nc;
  float vp;
  float nvp;
  float com;
  float ncom;
  string n;
  string nn;
  cout << "1. Atulizar nome\n";
  cout << "2. Atulizar endereco\n";
  cout << "3. Atulizar telefone\n";
  cout << "4. Atulizar codigo setor\n";
  cout << "5. Atulizar valor producao\n";
  cout << "6. Atulizar comissao\n";
  cin >> o;
  
  if(o == 1){
  cout << "Digite o nome que deseja alterar: ";
  cin >> n;
   for(i = 0; i < operarios.size(); i++)
    {
        if(operarios[i].getNome() == n){
          cout << "Digite o novo nome que deseja inserir: ";
          cin >> nn;
          operarios[i].setNome(nn);
        }
    } 
}

  if(o == 2){
  cout << "Digite o endereco que deseja alterar: ";
  cin >> n;
   for(i = 0; i < operarios.size(); i++)
    {
        if(operarios[i].getEndereco() == n){
          cout << "Digite o novo endereco que deseja inserir: ";
          cin >> nn;
          operarios[i].setEndereco(nn);
        }
    }
}
  if(o == 3){
  cout << "Digite o telefone que deseja alterar: ";
  cin >> n;
   for(i = 0; i < operarios.size(); i++)
    {
        if(operarios[i].getTelefone() == n){
          cout << "Digite o novo telefone que deseja inserir: ";
          cin >> nn;
          operarios[i].setTelefone(nn);
        }
    }
  }
  if(o == 4){
  cout << "Digite o codigo de setor que deseja alterar: ";
  cin >> c;
   for(i = 0; i < operarios.size(); i++)
    {
        if(operarios[i].getCodigoSetor() == c){
          cout << "Digite o novo codigo setor que deseja inserir: ";
          cin >> nc;
          operarios[i].setCodigoSetor(nc);
        }
    }
  }
  if(o == 5){
  cout << "Digite o valor de producao que deseja alterar: ";
  cin >> vp;
   for(i = 0; i < operarios.size(); i++)
    {
        if(operarios[i].getValorProducao() == vp){
          cout << "Digite o novo valor de producao que deseja inserir: ";
          cin >> nvp;
          operarios[i].setValorProducao(nvp);
        }
    }
  }
  if(o == 6){
  cout << "Digite a comissao que deseja alterar: ";
  cin >> com;
   for(i = 0; i < operarios.size(); i++)
    {
        if(operarios[i].getComissao() == com){
          cout << "Digite a nova comissao que deseja inserir: ";
          cin >> ncom;
          operarios[i].setComissao(ncom);
        }
    }
  }
}

void Pessoas::atualizaVendedor()
{
  int i;
  int o;
  int c;
  int nc;
  float vv;
  float nvv;
  float comv;
  float ncomv;
  string n;
  string nn;
  cout << "1. Atulizar nome\n";
  cout << "2. Atulizar endereco\n";
  cout << "3. Atulizar telefone\n";
  cout << "4. Atulizar codigo setor\n";
  cout << "5. Atulizar valor vendas\n";
  cout << "6. Atulizar comissao vendas\n";
  cin >> o;
  
  if(o == 1){
  cout << "Digite o nome que deseja alterar: ";
  cin >> n;
   for(i = 0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getNome() == n){
          cout << "Digite o novo nome que deseja inserir: ";
          cin >> nn;
          vendedores[i].setNome(nn);
        }
    } 
}

  if(o == 2){
  cout << "Digite o endereco que deseja alterar: ";
  cin >> n;
   for(i = 0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getEndereco() == n){
          cout << "Digite o novo endereco que deseja inserir: ";
          cin >> nn;
          vendedores[i].setEndereco(nn);
        }
    }
}
  if(o == 3){
  cout << "Digite o telefone que deseja alterar: ";
  cin >> n;
   for(i = 0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getTelefone() == n){
          cout << "Digite o novo telefone que deseja inserir: ";
          cin >> nn;
          vendedores[i].setTelefone(nn);
        }
    }
  }
  if(o == 4){
  cout << "Digite o codigo de setor que deseja alterar: ";
  cin >> c;
   for(i = 0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getCodigoSetor() == c){
          cout << "Digite o novo codigo setor que deseja inserir: ";
          cin >> nc;
          vendedores[i].setCodigoSetor(nc);
        }
    }
  }
  if(o == 5){
  cout << "Digite o valor de vendas que deseja alterar: ";
  cin >> vv;
   for(i = 0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getValorVendas() == vv){
          cout << "Digite o novo valor de vendas que deseja inserir: ";
          cin >> nvv;
          vendedores[i].setValorVendas(nvv);
        }
    }
  }
  if(o == 6){
  cout << "Digite a comissao de vendas que deseja alterar: ";
  cin >> comv;
   for(i = 0; i < vendedores.size(); i++)
    {
        if(vendedores[i].getComissaoVendas() == comv){
          cout << "Digite a nova comissao de vendas que deseja inserir: ";
          cin >> ncomv;
          vendedores[i].setComissaoVendas(ncomv);
        }
    }
  }
}