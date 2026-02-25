# Cadastro e Comparação de Cartas em C

## Descrição

Este projeto foi desenvolvido como trabalho acadêmico para a disciplina de Introdução à Programação de Computadores.

O programa realiza o cadastro de duas cartas contendo informações sobre países e permite a comparação entre elas com base em um atributo escolhido pelo usuário.

Cada carta armazena as seguintes informações:

- Nome do país
- População
- Área territorial (km²)
- PIB (em bilhões de reais)
- Número de pontos turísticos
- Densidade populacional (calculada automaticamente)

Após a inserção dos dados, o sistema exibe todas as informações cadastradas e apresenta um menu para comparação.

---

## Tecnologias Utilizadas

- Linguagem C
- Biblioteca padrão:
  - stdio.h

---

## Estrutura do Programa

O programa é composto por:

- Declaração de variáveis para duas cartas (Carta A e Carta B)
- Entrada de dados via teclado utilizando scanf e fgets
- Limpeza de buffer com getchar para evitar problemas na leitura de strings
- Cálculo automático da densidade populacional:

```
densidade = população / área
```

- Cálculo do PIB formatado em valor absoluto (multiplicado por 1.000.000.000)
- Exibição formatada das informações utilizando printf
- Menu interativo para escolha de comparação
- Estrutura switch para determinar qual atributo será comparado
- Estruturas condicionais (if/else) para definir a carta vencedora ou empate

---

## Critérios de Comparação

O usuário pode escolher comparar:

1. População  
2. Área  
3. PIB  
4. Número de pontos turísticos  
5. Densidade populacional  

Regra específica:

Na comparação de densidade populacional, vence a carta com menor densidade, pois representa menor concentração populacional.

---

## Como Compilar e Executar

### Compilar

No terminal, utilize:

```bash
gcc nome_do_arquivo.c -o programa
```

### Executar

No Linux ou Mac:

```bash
./programa
```

No Windows:

```bash
programa.exe
```

---

## Funcionamento

1. O usuário insere os dados da Carta A.
2. O usuário insere os dados da Carta B.
3. O programa calcula automaticamente a densidade populacional.
4. As informações das duas cartas são exibidas na tela.
5. O usuário escolhe um critério de comparação.
6. O sistema informa qual carta venceu ou se houve empate.

---

## Objetivo Acadêmico

Este trabalho tem como objetivo praticar:

- Declaração e uso de variáveis
- Manipulação de strings
- Entrada e saída de dados
- Uso de tipos primitivos (int, float, char)
- Estruturas condicionais (if/else)
- Estrutura de seleção (switch)
- Operações matemáticas
- Organização básica de um programa em C
- Lógica de comparação entre dados

---

## Aluno

Lucas Alexandre de Souza  
Trabalho acadêmico – Introdução à Programação de Computadores
