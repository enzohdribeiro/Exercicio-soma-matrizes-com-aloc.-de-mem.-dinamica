# Soma de Três Matrizes com Alocação Dinâmica

Exercício da matéria Introdução a Programação, ministrada por Luciano A. Digiampietri no primeiro semestre do curso (2026).
Implementação em Linguagem C voltada para o estudo de ponteiros e alocação dinâmica de memória. O objetivo principal é realizar a soma de três matrizes de inteiros cujas dimensões são definidas pelo usuário durante a execução.

## Descrição do Projeto

O programa solicita ao usuário o número de linhas e colunas para as matrizes, aloca o espaço necessário na memória em tempo de execução e realiza a soma elemento por elemento de três matrizes distintas (m1, m2 e m3). O resultado é armazenado em uma quarta matriz, que é então exibida no console.

## Funcionalidades

O código está estruturado em funções específicas para garantir a modularidade:

* **soma3**: A função principal solicitada. Recebe os ponteiros de três matrizes, aloca uma nova matriz para o resultado e retorna sua referência após calcular a soma.
* **alocaMatriz**: Função auxiliar que encapsula a lógica de alocação dinâmica de ponteiros para ponteiros (`int**`), facilitando a criação de matrizes de qualquer tamanho.
* **criaMatriz**: Gerencia a entrada de dados, solicitando que o usuário preencha cada posição (i, j) das matrizes.
* **main**: Coordena o fluxo do programa, desde a leitura das dimensões até a exibição final formatada.

## Habilidades desenvolvidas

* **Alocação Dinâmica**: O uso de malloc permite que o programa lide com matrizes de tamanhos variados sem desperdício de memória estática.
* **Ponteiros Duplos**: A manipulação das matrizes é feita via int**, permitindo o acesso às linhas e colunas de forma eficiente.
* **Formatação de Saída**: O programa exibe as três matrizes de entrada e o resultado lado a lado para facilitar a conferência visual da operação.
* **Nota de Memória**: Como o código foca na lógica de soma e retorno de ponteiros, lembre-se que em aplicações de larga escala é uma boa prática implementar a liberação de memória (free) para cada linha e para o ponteiro principal ao final do uso.
