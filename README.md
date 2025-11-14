# Estudo Pilha

## Descrição

Este repositório possui um pequeno programa na linguagem C que visa praticar a implementação da estrutura de dados pilha.

O programa é algo extremamente simples, ele cria uma pilha de números inteiros, adiciona alguns, mostra o que a pilha possui, faz algumas ações de remoção, exibi mais uma vez o que tem na pilha e depois limpa ela da memória.

## Estrutura dos arquivos

A estrutura dos arquivos é bem simples na verdade.

- src: possui todos os arquivos .c do programa;
- include: possui todos os arquivos de header (.h) do programa;

A estutura do código-fonte é bem simples, na raiz há um Makefile para compilação, além de algumas configurações de debugging na pasta .vscode

## Execução

Para apenas compilar, basta executar o seguinte comando:

```bash
make
```

O binário estará na pasta bin, basta executar ele. Entretanto, há um comando mais direto, com ele você irá compilar e executar logo em seguida:

```bash
make run
```

Não é necessário compilar antes. Para limpar todos os arquivos de build, execute o seguinte comando:

```bash
make clean
```
