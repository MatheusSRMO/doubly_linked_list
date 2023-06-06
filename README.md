# Doubly Linked List

Este é um código em C que implementa uma lista duplamente encadeada (DL List). A DL List é uma estrutura de dados que permite a inserção e remoção eficientes de elementos em ambas as extremidades da lista.

## Estrutura

A DL List é implementada usando a seguinte estrutura:

```c
struct dl_list {
    int size;
    Node* head;
    Node* rear;
};
```

- `size`: Representa o número de elementos na DL List.
- `head`: Ponteiro para o primeiro nó da DL List.
- `rear`: Ponteiro para o último nó da DL List.

## Funções

### `DlList* dl_list_contruct()`

Esta função cria e inicializa uma nova DL List.

**Parâmetros:**

Nenhum.

**Retorno:**

- `DlList*`: Ponteiro para a DL List recém-criada.

### `void dl_list_push_front(DlList* dl_list, data_type data)`

Esta função insere um elemento no início (head) da DL List.

**Parâmetros:**

- `dl_list`: Ponteiro para a DL List.
- `data`: O dado a ser inserido.

**Retorno:**

Nenhum.

### `void dl_list_push_back(DlList* dl_list, data_type data)`

Esta função insere um elemento no final (rear) da DL List.

**Parâmetros:**

- `dl_list`: Ponteiro para a DL List.
- `data`: O dado a ser inserido.

**Retorno:**

Nenhum.

### `data_type dl_list_pop_front(DlList* dl_list)`

Esta função remove e retorna o elemento do início (head) da DL List.

**Parâmetros:**

- `dl_list`: Ponteiro para a DL List.

**Retorno:**

- `data_type`: O dado removido.

### `data_type dl_list_pop_back(DlList* dl_list)`

Esta função remove e retorna o elemento do final (rear) da DL List.

**Parâmetros:**

- `dl_list`: Ponteiro para a DL List.

**Retorno:**

- `data_type`: O dado removido.

### `void dl_list_print(DlList* dl_list, void (*print_fn)(data_type))`

Esta função imprime os elementos da DL List.

**Parâmetros:**

- `dl_list`: Ponteiro para a DL List.
- `print_fn`: Ponteiro para uma função de impressão personalizada para o tipo de dado.

**Retorno:**

Nenhum.

### `void dl_list_destruct(DlList* dl_list)`

Esta função libera a memória alocada pela DL List.

**Parâmetros:**

- `dl_list`: Ponteiro para a DL List.

**Retorno:**

Nenhum.