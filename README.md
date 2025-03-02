# Super Trunfo de Países 🏙️

## 📋 Descrição

O Super Trunfo de Países é um jogo de cartas baseado no clássico Super Trunfo, onde cada carta representa uma cidade brasileira com seus atributos específicos. Este programa permite cadastrar duas cartas, calcular atributos derivados, comparar as cartas e determinar qual delas vence em cada categoria.

---

## ✨ Funcionalidades

O programa oferece as seguintes funcionalidades:

* **Cadastro de Cartas**: Permite cadastrar duas cartas com informações detalhadas sobre cidades.
* **Cálculo de Atributos Derivados**: Calcula automaticamente a densidade populacional, o PIB per capita e o Super Poder de cada cidade.
* **Exibição de Cartas**: Mostra todas as informações das cartas cadastradas.
* **Comparação de Cartas**: Compara as duas cartas em todos os atributos e determina a vencedora em cada categoria.

---

## 🚀 Como Usar

### 📋 Requisitos

* Compilador C (GCC recomendado)
* Sistema operacional compatível (Windows, Linux ou macOS)

### 🔧 Compilação

Para compilar o programa, execute o seguinte comando no terminal:

```bash
gcc SuperTrunfo.c -o SuperTrunfo
```

### ▶️ Execução

Para executar o programa, use o comando:

```bash
./SuperTrunfo
```

No Windows, use:

```bash
SuperTrunfo.exe
```

### 📝 Instruções de Uso

1. Ao iniciar o programa, você verá uma mensagem de boas-vindas.

2. Siga as instruções para cadastrar a primeira carta:
   * Digite o estado (uma letra de A a H)
   * Digite o código da carta (ex: A01)
   * Digite o nome da cidade
   * Digite a população da cidade
   * Digite a área da cidade em km²
   * Digite o PIB da cidade em bilhões de reais
   * Digite o número de pontos turísticos da cidade

3. Repita o processo para cadastrar a segunda carta.

4. O programa calculará automaticamente:
   * Densidade populacional (habitantes por km²)
   * PIB per capita (reais por habitante)
   * Super Poder (uma pontuação baseada em todos os atributos)

5. O programa exibirá todas as informações das duas cartas cadastradas.

6. Por fim, o programa comparará as duas cartas em cada atributo e mostrará qual carta vence em cada categoria.

---

## 🎮 Atributos das Cartas

Cada carta possui os seguintes atributos:

| Atributo | Descrição |
|----------|-----------|
| **Estado** | Uma letra de A a H que representa o estado da cidade |
| **Código** | Um código único para a carta (ex: A01) |
| **Nome da Cidade** | O nome da cidade representada na carta |
| **População** | O número de habitantes da cidade |
| **Área** | A área da cidade em km² |
| **PIB** | O Produto Interno Bruto da cidade em bilhões de reais |
| **Pontos Turísticos** | O número de pontos turísticos da cidade |
| **Densidade Populacional** | Calculado como População ÷ Área (habitantes por km²) |
| **PIB per Capita** | Calculado como PIB ÷ População (reais por habitante) |
| **Super Poder** | Uma pontuação calculada com base em todos os atributos |

---

## 📏 Regras de Comparação

Na comparação entre as cartas, as seguintes regras são aplicadas:

* Para **População**, **Área**, **PIB**, **Pontos Turísticos** e **PIB per Capita**: a carta com o maior valor vence.
* Para **Densidade Populacional**: a carta com o menor valor vence (menor densidade é considerada melhor).
* Para **Super Poder**: a carta com o maior valor vence.

O resultado da comparação é exibido como:
* **1**: indica que a Carta 1 venceu
* **0**: indica que a Carta 2 venceu

---

## 💡 Exemplo de Uso

### Entrada:

```
Estado (A-H): A
Código da Carta (ex: A01): A01
Nome da Cidade: São Paulo
População: 12000000
Área (km²): 1521.11
PIB (bilhões de reais): 699.29
Número de Pontos Turísticos: 120

Estado (A-H): B
Código da Carta (ex: A01): B01
Nome da Cidade: Rio de Janeiro
População: 6700000
Área (km²): 1200.27
PIB (bilhões de reais): 365.14
Número de Pontos Turísticos: 150
```

### Saída:

O programa exibirá todas as informações das cartas e os resultados das comparações, indicando qual carta venceu em cada atributo.

---

## 🎯 Dicas para Jogar

1. **Escolha Estratégica**: Ao jogar com mais cartas, escolha o atributo em que sua carta tem mais chances de vencer.
2. **Conheça os Atributos**: Entenda como cada atributo é calculado para fazer escolhas mais inteligentes.
3. **Observe o Super Poder**: O Super Poder é uma boa indicação do poder geral da carta, pois considera todos os atributos.

---
