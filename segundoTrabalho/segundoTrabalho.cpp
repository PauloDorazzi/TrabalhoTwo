#include <iostream>
#include <vector>
#include <string> 
using namespace std;


//ex1
//struct Pessoa {
//	int idade;
//	string nome;
//};
//int main()
//{
//	Pessoa pessoa;
//	cout << "Digite sua idade: " << endl;
//	cin >> pessoa.idade;
//	cout << "Digite seu nome: " << endl;
//	cin >> pessoa.nome;
//
//	cout << pessoa.idade << endl;
//	cout << pessoa.nome << endl;
//
//	return 0;
//}

//ex2
//struct Tabela {
//	string nome;
//	float preço;
//};
//int main() {
//	Tabela tabela;
//	cout << "Digite o nome do produto: " << endl;
//	cin >> tabela.nome;
//	cout << "Digite o preço do produto: " << endl;
//	cin >> tabela.preço;
// 
//
//	cout << "Com 10% de desconto," << tabela.nome << "ficara" << tabela.preço * 0.9;
//return 0;
//}


//ex3
//struct Alunos {
//	string nome;
//	float nota1;
//	float nota2;
//};
//vector <Alunos> aluno;
//int main() {
//	Alunos alunos;
//	
//	for (int a = 1; a < 6; a++) {
//		cout << "Aluno" << a << ":" << endl;
//		cin >> alunos.nome;
//		cout << "Digite a primeira nota: " << endl;
//		cin >> alunos.nota1;
//		cout << "Digite a segunda nota: " << endl;
//		cin >> alunos.nota2;
//		cout << "Media: " << (alunos.nota1 + alunos.nota2) / 2 << endl;
//	}
//	return 0;
//}


//ex4
//struct Ponto {
//	string nome;
//	double horasTrabalhadas;
//	double valorHora;
//	double horasExtras;
//};
//vector <Ponto> pontos;
//
//int main() {
//	Ponto ponto;
//	for (int a = 1; a < 3; a++) {
//		cout << "Funcionario " << a << ", digite seu nome: " << endl;
//		cin >> ponto.nome;
//		cout << "Digite as horas trabalhadas: " << endl;
//		cin >> ponto.horasTrabalhadas;
//		cout << "Informe valor por hora: " << endl;
//		cin >> ponto.valorHora;
//
//		if (ponto.horasTrabalhadas > 40) {
//			ponto.horasExtras = ponto.horasTrabalhadas - 40;
//		}
//		else {
//			ponto.horasExtras = 0;
//		}
//		cout << "Seu salario sera: " << (ponto.horasTrabalhadas * ponto.valorHora) + ponto.horasExtras * 1.5 << endl;
//
//
//	}
//	
//	
//	
//	return 0;
//
//}
	

//ex5
//struct Carro {
//	string marca;
//	string modelo;
//	int ano;
//	float preco;
//};
//
//vector <Carro> carros;
//
//int main() {
//	Carro carro;
//
//	for (int i = 1; i < 10; i++) {
//		cout << "Carro " << i << ", Digite a marca do carro: " << endl;
//		cin >> carro.marca;
//		cout << "Digite o modelo do carro: " << endl;
//		cin >> carro.modelo;
//		cout << "Digite o ano: " << endl;
//		cin >> carro.ano;
//		cout << "Digite o preco do carro: " << endl;
//		cin >> carro.preco;
//	}
//	int ano1 = 2023;
//	int preco1 = 1000;
//
//	for (const Carro& ronco : carros) {
//		if (ronco.ano < ano1) {
//			ano1 = ronco.ano;
//		}
//		if (ronco.preco < preco1) {
//			preco1 = ronco.preco;
//		}
//	}
//	cout << "Mais antigo: " << ano1;
//	cout << "Mais caro: " << preco1;
//
//	return 0;
//}


//ex6
string busca;

struct Pessoa {
    string nome;
   char telefone[20];
    string email;
};


vector<Pessoa> pessoas; // Vetor para armazenar os skates cadastrados

void cadastrarPessoa() {
    Pessoa pessoa;
    cout << "Nome da Pessoa: ";
    cin.ignore();
    getline(cin, pessoa.nome);

    cout << "Fone: ";
    cin >> pessoa.telefone;

    cout << "Email: ";
    cin >> pessoa.email;

    
    pessoas.push_back(pessoa); // Adiciona a pessoa ao vetor de pessoa
    cout << " Cadastrado com sucesso!\n";

}


void pessoasCad() {
    if (pessoas.empty()) { // Verifica se o vetor de pessoas está vazio
        cout << "Nenhuma pessoa cadastrada.\n";
        return;
    }

    cout << "Lista todas as pessoas cadastradas:\n";
    for (const Pessoa& pessoa : pessoas) { // Loop para percorrer as pessoas cadastrados
        cout << "Nome: " << pessoa.nome << "\n";
        cout << "fone: " << pessoa.telefone << "\n";
        cout << "email: " << pessoa.email << "\n";
        

    }
}

void buscaPessoas() {

    cout << "Digite o nome: " << endl;
    cin.ignore();
    getline(cin, busca);

    for (const Pessoa& pessoa : pessoas) {
        if (pessoa.nome == busca) {
            cout << "Nome: " << pessoa.nome << "\n";
            cout << "Fone: " << pessoa.telefone << "\n";
            cout << "Email: " << pessoa.email << "\n";
        }
    }
}

int main() {
    int opcao;

    do {
        cout << "=========== Menu ===========\n";
        cout << "1 - Adicionar contato\n";
        cout << "2 - Lista conatos cadastrados\n";
        cout << "3 - Pesquisar contato por nome\n";
        cout << "4 - Sair\n";
        cout << "============================\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        switch (opcao) {
        case 1:
            cadastrarPessoa(); // Chama a função para cadastrar uma nova Pessoa
            break;
        case 2:
            pessoasCad(); // Chama a função para exibir a lista de Pessoas cadastrados
            break;
        case 3:
            buscaPessoas(); // Chama a função para exibir a pesquisa por nomes
            break;
        case 4:
            cout << "Saindo...\n";
            break;
        default:
            cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (opcao != 4);

    return 0;
}