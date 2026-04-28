# Montador e Simulador de Assembly

## 👥 Autores
- **Carlos Cauã Rocha da Silva - 231034304**
- **Inacio Leal do Rosário - 232011331**

---

## 🖥️ Sistema Operacional
Projeto desenvolvido e testado em ambiente **Linux** utilizando o compilador **GCC**.

---

## 📌 Descrição

Este projeto consiste na implementação de um **montador (assembler)** e um **simulador** para uma linguagem assembly fictícia definida em sala de aula. 

O programa é capaz de traduzir código fonte em linguagem de montagem para código de máquina e executar a simulação lógica do comportamento do processador.

O programa possui três modos de operação baseados na extensão do arquivo de entrada:

1.  **Pré-processamento** (`.asm` → `.pre`)
2.  **Montagem** (`.pre` → `.obj` + `.pen`)
3.  **Simulação** (`.obj` → execução)

---

## ⚙️ Como compilar

No terminal, dentro da pasta raiz do projeto, execute o comando abaixo:

```bash
g++ -std=c++11 src/*.cpp -Iinclude -o montador
```

## ▶️ Como Executar

```bash
./montador arquivo.asm
```
Gerando:
- arquivo.pre

```bash
./montador arquivo.pre
```
Gerando:
- arquivo.obj
- arquivo.pen

```bash
./montador arquivo.obj
```

Executa o programa e: 
- Lê entradas do teclado (INPUT)
- Imprime saidas no terminal (OUTPUT)