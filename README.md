# Ordenação de Preços de Produtos — Bubble Sort

## 1. Disciplina e professora

- **Disciplina:** Algoritmos e pensamento computacional
- **Professora:** Karla R. Sartin

## 2. Integrantes

- Kaio Kelvin de Souza Barros Cutrim


## 3. Descrição do problema cotidiano

Um supermercado precisa consultar os preços de produtos de maneira organizada. Quando os preços estão fora de ordem, pode ser mais difícil identificar rapidamente quais produtos são mais baratos e quais são mais caros.

Este projeto utiliza um conjunto de dez preços para demonstrar como a ordenação pode ajudar na visualização e comparação dos valores.

## 4. Objetivo da aplicação

Desenvolver um programa em linguagem C que apresente dez preços antes da ordenação e, depois, organize-os do menor para o maior usando obrigatoriamente o algoritmo Bubble Sort.

Ao final, o programa também mostra o menor e o maior preço do conjunto.

## 5. Como funciona o Bubble Sort

O Bubble Sort percorre o array e compara elementos que estão lado a lado. Quando o elemento da esquerda é maior que o da direita, os dois valores são trocados.

Esse processo se repete em várias passagens. A cada passagem, um dos maiores valores restantes chega à posição final correta. Neste programa, o critério é **ordem crescente**, do menor para o maior.

O código utiliza:
- **Array:** armazena os dez preços.
- **`for`:** percorre o array e controla as passagens da ordenação.
- **`if`:** verifica se os dois preços adjacentes estão fora de ordem.
- **Variável temporária:** permite trocar dois valores sem perder nenhum deles.

A ordenação foi implementada manualmente, sem usar funções prontas como `qsort()`.

## 6. Arquivos do projeto

- `main.c`: código-fonte do programa em C.
- `evidencias/saida_exemplo.txt`: exemplo de execução no terminal.

## 7. Como compilar e executar

É necessário ter um compilador C, como o GCC.

### Linux ou macOS

Abra o terminal na pasta do projeto e execute:

```bash
gcc main.c -o bubble_sort
./bubble_sort
```

### Windows com GCC (MinGW)

Abra o terminal na pasta do projeto e execute:

```bash
gcc main.c -o bubble_sort.exe
.\bubble_sort.exe
```

Também é possível abrir o arquivo `main.c` em uma IDE que tenha um compilador C configurado.

## 8. Exemplo de entrada e saída

O programa usa dez preços definidos no próprio código, portanto não solicita dados digitados pelo usuário.

### Antes da ordenação

```text
R$ 19.90 | R$ 5.50 | R$ 32.00 | R$ 12.75 | R$ 8.99 | R$ 45.90 | R$ 3.25 | R$ 27.49 | R$ 15.00 | R$ 10.50
```

### Depois da ordenação

```text
R$ 3.25 | R$ 5.50 | R$ 8.99 | R$ 10.50 | R$ 12.75 | R$ 15.00 | R$ 19.90 | R$ 27.49 | R$ 32.00 | R$ 45.90
```

O menor preço é **R$ 3,25** e o maior é **R$ 45,90**.

## 9. Tecnologias e ferramentas

- Linguagem C
- Compilador GCC (ou outro compilador C compatível)
- Git para controle de versão
- GitHub para hospedar e compartilhar o repositório
- Terminal ou IDE para compilar e executar

## 10. Considerações finais

A atividade permitiu praticar arrays, estruturas condicionais, laços de repetição e troca de valores em C. O Bubble Sort mostrou como é possível ordenar dados por meio de comparações entre elementos adjacentes. Embora seja simples de entender, esse algoritmo pode ser lento para conjuntos muito grandes de dados.

## 11. Sugestão de histórico de commits

Faça os commits conforme o trabalho for realmente desenvolvido. Cada commit deve registrar uma mudança significativa; não faça todos apenas para atingir uma quantidade.

1. `docs: cria estrutura inicial do projeto e README`
2. `feat: adiciona array com dez precos de produtos`
3. `feat: implementa comparacao e troca do Bubble Sort`
4. `feat: exibe lista antes e depois da ordenacao`
5. `test: registra exemplo de compilacao e saida do programa`
6. `docs: revisa instrucoes de compilacao e consideracoes finais`

Se o projeto for feito em grupo, cada integrante deve realizar contribuições reais e identificáveis. Não atribua commits a integrantes que não fizeram aquelas alterações.
