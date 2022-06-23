// problemadeseleção.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

//Problema de seleção de atividades : Dado um conjunto de atividades, juntamente com o 
//horário de início e término de cada atividade, encontre o número máximo de atividades 
//realizadas por uma única pessoa, supondo que uma pessoa só possa trabalhar em uma única 
//atividade por vez.

#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

struct Pair
{
    // armazena o horário de início e término das atividades
    int start, finish;
};

// Problema de seleção de atividade
void selectActivity(vector<Pair> activities)        // sem referência, sem const
{
    // `k` acompanha o índice da última atividade selecionada
    int k = 0;

    // definido para armazenar o índice de atividades selecionadas
    unordered_set<int> out;

    // seleciona 0 como a primeira atividade
    if (activities.size() > 0) {
        out.insert(0);
    }

    // ordena as atividades de acordo com seu tempo de término
    sort(activities.begin(), activities.end(),
        [](auto const& lhs, auto const& rhs) {
            return lhs.finish < rhs.finish;
        });

    // inicia a iteração a partir do segundo elemento do
    // vetor até seu último elemento
    for (int i = 1; i < activities.size(); i++)
    {
        // se a hora de início da i'ésima atividade for maior ou igual
        // até a hora de término da última atividade selecionada, ele
        // pode ser incluído na lista de atividades

        if (activities[i].start >= activities[k].finish)
        {
            out.insert(i);
            k = i;            // atualiza `i` como a última atividade selecionada
        }
    }

    for (int i : out)
    {
        cout << "{" << activities[i].start << ", " << activities[i].finish
            << "}" << endl;
    }
}

int main()
{
    // Lista de pares com cada par armazenando a hora de início
    // e hora de término das atividades
    vector<Pair> activities =
    {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9},
        {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
    };

    selectActivity(activities);

    return 0;
}


// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
