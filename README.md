# 🛰️ IMORTAL-1 — Sistema de Bordo

<p>
  <a href="https://github.com/futuremltz/IMORTAL-1-Sistema-de-Bordo/actions/workflows/build.yml"><img src="https://github.com/futuremltz/IMORTAL-1-Sistema-de-Bordo/actions/workflows/build.yml/badge.svg" alt="Build" /></a>
  <a href="LICENSE"><img src="https://img.shields.io/badge/licen%C3%A7a-MIT-blue.svg" alt="Licença MIT" /></a>
</p>
 
Projeto desenvolvido como **Trabalho do Grau A** da disciplina de **Algoritmos e Programação: Fundamentos** da [UNISINOS](https://www.unisinos.br/) - 2026/1.
 
---
 
## 💡 Sobre o projeto
 
O **IMORTAL-1** simula o módulo de controle de um satélite científico experimental desenvolvido pelo grupo fictício **GREMIO** (Grupo de Rastreamento Espacial e Monitoramento de Informações Orbitais).
 
O sistema coleta **3 leituras de sensores** por vez (temperatura, radiação, aceleração) e realiza análises estatísticas, geração de alertas e feedback visual no terminal — tudo sem uso de arrays, ponteiros ou estruturas avançadas.
 
---
 
## 🎬 Demonstração

<p align="center">
  <img src="assets/demo.gif" alt="IMORTAL-1 gerando o relatório completo das leituras" />
</p>

---

## ✨ Funcionalidades
 
| Opção | Funcionalidade |
|---|---|
| `1` | Calcular média das 3 leituras |
| `2` | Encontrar valor máximo e mínimo |
| `3` | Calcular desvio de cada leitura em relação à média |
| `4` | Verificar se os valores estão dentro de uma faixa segura |
| `5` | Exibir barra gráfica de intensidade com asteriscos |
| `6` | Gerar relatório completo |
| `0` | Sair do sistema |
 
---
 
## 🖥️ Exemplo de execução
 
```
--- IMORTAL-1 - SISTEMA DE BORDO ---
 
Digite a leitura 1: 10.0
Digite a leitura 2: 15.0
Digite a leitura 3: 5.0
 
--MENU--
1 - Média
2 - Máx/Mín
3 - Desvios
4 - Verificação de faixa
5 - Barra gráfica
6 - Relatório
0 - Sair
 
Escolha uma opção: 5
 
--BARRA GRÁFICA--
A média é: 10.00
Barra gráfica (10.00):
**********
 
Deseja realizar outra operação? (s/n): n
Deseja digitar novos números ou sair? (1/2):
```
 
---
 
## 🔧 Funções implementadas
 
| Função | Retorno | Descrição |
|---|---|---|
| `calcular_media(a, b, c)` | `double` | Calcula e exibe a média aritmética |
| `maximo(a, b, c)` | `double` | Encontra o maior valor usando fórmula matemática com `fabs()` |
| `minimo(a, b, c)` | `double` | Encontra o menor valor usando fórmula matemática com `fabs()` |
| `desvio(a, b, c)` | `void` | Calcula o desvio de cada leitura em relação à média |
| `verificar_faixa(a, b, c, min, max)` | `void` | Verifica e alerta se os valores estão fora do intervalo seguro |
| `barra_grafica(media)` | `void` | Desenha uma barra de `*` proporcional à média (máx. 20) |
| `relatorio(a, b, c)` | `void` | Gera relatório completo com todas as análises |
 
---
 
## 💡 Destaque técnico
 
O cálculo de máximo e mínimo foi implementado sem uso de `if/else`, utilizando uma **fórmula matemática** baseada em valor absoluto:
 
```c
// Máximo entre a e b:
max = (a + b + fabs(a - b)) / 2;
 
// Mínimo entre a e b:
min = (a + b - fabs(a - b)) / 2;
```
 
---
 
## 🚀 Como compilar e executar
 
### Pré-requisitos
 
- Compilador C (GCC recomendado)
### Compilando
 
```bash
gcc IMORTAL.c -o imortal -lm
```
 
> O flag `-lm` é necessário para linkar a biblioteca `math.h` (`fabs`)
 
### Executando
 
```bash
./imortal
```
 
> No Windows: `imortal.exe`
 
---
 
## 🧠 Conceitos praticados
 
- Funções com parâmetros e retorno em C
- Tipos de dados `double` e formatação com `%.2lf`
- Laços de repetição (`while`, `for`)
- Estruturas condicionais (`if/elif/else`)
- Uso de `math.h` (`fabs`)
- Saída colorida no terminal com códigos ANSI (`\033[34m`, `\033[32m`)
- Modularização e separação de responsabilidades
---
 
## 📚 Tecnologias
 
| Tecnologia | Detalhe |
|---|---|
| Linguagem | C (padrão C99) |
| Compilador | GCC |
| Bibliotecas | `stdio.h`, `stdlib.h`, `math.h` |
 
---
 
## 👨‍💻 Autor
 
**João Victor Militz**  
Desenvolvido para a disciplina de Algoritmos e Programação — UNISINOS, 2026/1.
