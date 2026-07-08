/* ==========================================================================
 *                 O QUE É DIRETIVA DE PRÉ-PROCESSAMENTO?
 * --------------------------------------------------------------------------
 * Diretivas de pré-processamento são regras que ocorrem antes da compilação.
 *
 * --------- ETAPAS ---------
 *          (main.c)
 *      Código-fonte em C
 *             ↓
 *  Ações de pré-processamento  <- Aqui entram as diretivas de pré-processamento
 *             ↓
 *          (main.i) // Output do pré-processamento
 *         Compilação
 *             ↓
 *          (main.s) // Assembly
 *          Montagem (Assembler)
 *             ↓
 *          (main.o) // Binário (Linguagem de máquina)
 *           Linker
 *             ↓
 *         (main.exe)
 *    Programa executável
 * --------------------------
 *
 * ---------------------------- REGRAS ----------------------------
 * 1. Não usa-se ponto e vírgula ao fim de uma diretiva
 * Exemplo errôneo: #include <stdio.h>;
 *
 * 2. Não é permitido colocar duas ou mais diretivas na mesma linha,
 * Exemplo errôneo: #include <stdio.h> #define n 10
 * ========================================================================== */


// ---------------- TIPOS DE DIRETIVAS DE PRÉ-PROCESSAMENTO ----------------

/* ==========================================================================
 * 1. #include <biblioteca.h> ou "biblioteca.h"
 * --------------------------------------------------------------------------
 * O QUE FAZ: O pré-processador abre o arquivo header indicado, copia todo o
 * conteúdo dele e "cola" exatamente nesta linha.
 *
 * ========================================================================== */
#include <stdio.h> // Bibliotecas padrão do compilador (< >)
//#include "minha_biblioteca.h" // Bibliotecas locais do projeto (" ")


/* ==========================================================================
 * 2.1 #define NOME_MACRO conteúdo
 * --------------------------------------------------------------------------
 * O QUE FAZ: Substituição pura de texto. O pré-processador troca o nome pelo
 * conteúdo
 *
 * O nome de uma define é geralmente em MAIÚSCULAS para diferenciar-se de
 * variáveis que geralmente são escritar com minúsculas.
 *
 * --------------------------------------------------------------------------
 * 2.2 Macros variádicas
 * --------------------------------------------------------------------------
 * O QUE FAZ: Permite criar macros que aceitam um número variável de
 *            argumentos, funcionando de forma semelhante ao "printf()".
 *
 * COMO FUNCIONA:
 * "...": Na definição da macro, indica que ela aceita argumentos extras.
 * "__VA_ARGS__": Representa e substitui os argumentos extras passados.
 *
 * ATENÇÃO (Vírgula fantasma):
 * Se houver uma vírgula antes de "__VA_ARGS__" e a macro for chamada sem
 * argumentos extras, sobrará uma vírgula solta, gerando erro de compilação.
 * SOLUÇÃO: Usar "##__VA_ARGS__" instrui o pré-processador a remover a 
 * vírgula anterior caso "__VA_ARGS__" esteja vazio.
 * ========================================================================== */

// -- Constante simbólica/macro --
#define PI 3.14159
#define MSG "Olá Mundo!\n"

// -- Macro semelhante a função --
#define QUADRADO(x) ((x) * (x))
#define POSITIVAR(x) (x) < 0 ? -(x) : (x)
/* Note a delimitação dos valores com parênteses, isso é necessário para evitar
   erros de precedência caso atribuamos um cálculo ao parâmetro*/
#define DIVISAO_CERTA(x, y) (x) / (y)
// Veja em "main()" o resultado das duas divisões.
#define DIVISAO_ERRADA(x, y) x / y

// -- Exemplo de macro variádica --
#define FRASE(msg, ...) printf("[FRASE] "msg"\n", ##__VA_ARGS__)


/* ==========================================================================
 * 3. #undef NOME_MACRO
 * --------------------------------------------------------------------------
 * O QUE FAZ: Apaga a regra de substituição de um #define anterior.
 *
 * ========================================================================== */

int valorFixo() {
  #define VALOR_FIXO 100
  return VALOR_FIXO;
}

// Agora "desligamos" a macro "VALOR_FIXO"
#undef VALOR_FIXO

/* IMPORTANTE: O pré-processador não leva em consideração critérios como
   escopo global ou local (chaves {}). Ou seja, a partir do momento que uma 
   macro é criada, mesmo dentro de uma função (como em "valorFixo()"), ela 
   ficará ativa para o resto do ARQUIVO durante a COMPILAÇÃO, substituindo 
   o seu nome pelo valor até o final do arquivo ou até encontrar uma 
   diretiva "#undef". */


/* ==========================================================================
 * 4.1 #if CONDIÇÃO, #elif CONDIÇÃO, #else, #endif
 * --------------------------------------------------------------------------
 * O QUE FAZ: Compila ou ignora blocos de código fonte com base em
 * condições. Usa-se apenas um "#endif" por estrutra condicional
 *
 * --------------------------------------------------------------------------
 * 4.2 #error
 * --------------------------------------------------------------------------
 * O QUE FAZ: Paralisa a compilação e emite uma mensagem de erro no terminal.
 *
 * ========================================================================== */

/* Altere a versão e veja a mudança do trecho de código que deve estar sendo 
   compilado. */
#define VERSAO 1

#if VERSAO == 1
  #define C 10
#elif VERSAO == 2
  #define C 20
#else
  #error "Versão errada!"
#endif


/* ==========================================================================
 * 5. #ifdef NOME_MACRO, #ifndef NOME_MACRO, #endif
 * --------------------------------------------------------------------------
 * O QUE FAZ: Funciona semelhantemente à #if, #elif e #else, porém apenas
 * verifica se o nome de uma macro foi definida ou não. 
 * Usa-se um "#endif" para cada "#ifdef" ou "#ifndef".
 * 
 * Muito utilizada na criação de bibliotecas.
 * ========================================================================== */

#define DEBUG1

// Verifica se existe a macro DEBUG1
#ifdef DEBUG1 // Equivale a "#if defined DEBUG1"
  #define LOG1(mensagem) printf("[DEBUG 1]:[%s]\n\n", mensagem)
#else 
  // Se não existir, a macro LOG1 vira "nada" (não gera código)
  #define LOG1(mensagem)
#endif

// Verifica se NÃO existe a macro DEBUG2
#ifndef DEBUG2 // Equivale a "#if !defined DEBUG2"
  #define DEBUG2
  #define LOG2(mensagem) printf("\n[DEBUG 2]:[%s]\n\n", mensagem);
#else 
  // Se existir, a macro LOG2 vira "nada" (não gera código)
  #define LOG2(mensagem)
#endif


/* ==========================================================================
 * 6. #pragma nome_diretiva
 * --------------------------------------------------------------------------
 * O QUE FAZ: Habilita ou inativa recursos e, por ser dependente do
 * compilador, seu comportamento varia de compilador para compilador.
 *
 * ========================================================================== */

// Mostra mensagem no terminal
// #pragma message("Olá!")

// A diretiva "warn" omite/mostrar mensagens de aviso no terminal.
// #pragma warn -_ : Omite um aviso específico.
// #pragma warn +_ : Habilita um aviso específico.
// #pragma warn ._ : Altera entre omitir e mostrar um aviso específico.
// Exemplos práticos de "warn"
#pragma warn -rvl: // Omite avisos de funções sem retorno.
#pragma warn -par: // Omite avisos de parâmetro não usado
#pragma warn -rch: // Omite avisos de código inatingível

/* Proíbe o uso de um identificador específico. No caso abaixo estou proibindo
   o uso da letra "x" sozinha como identificador */
#pragma GCC poison x
/* Remova "//" abaixo, deixando apenas a declaração de "x" e veja o
   erro de "poisoned identifier" aparecer no terminal. */
// int x = 10;


int main() {
  // Usando a compilação condicional (o LOG só imprime se DEBUG1 existir)
  LOG1("Iniciando a execucao do programa...");

  // Usando a macro MSG (string)
  printf("MENSAGEM: %s", MSG);
  // Desfazendo a macro MSG
  #undef MSG
  // Recriando a macro MSG com nova mensagem.
  #define MSG "Tudo bem?\n\n"
  printf("MENSAGEM: %s", MSG);

  // Usando a macro PI (valor numérico)
  printf("O valor de PI eh aproximadamente: %.2f\n", PI);

  // Usando as macros de função
  printf("QUADRADO DE %d: %d\n", 10, QUADRADO(10));
  printf("POSITIVAR %d: %d\n\n", 10, POSITIVAR(10));
  // Agora observe as precedências de operadores abaixo:
  // (55 + 5) / (5 + 1) = 60 / 6 = 10 (RESULTADO CERTO)
  printf("DIVISAO CERTA = %d\n", DIVISAO_CERTA(55 + 5, 5 + 1));
  //   55 + 5 / 5 + 1 = 55 + 1 + 1 = 57 (RESULTADO ERRADO)
  printf("DIVISAO ERRADA = %d\n", DIVISAO_ERRADA(55 + 5, 5 + 1));

  // Antes de #undef:
  printf("VALOR_FIXO antes de #undef: %d\n", valorFixo());
  /* Após #undef: agora podemos usar o nome VALOR_FIXO para a criação de uma
     variável ou até mesmo de outra macro! */
  int VALOR_FIXO = 50;
  printf("VALOR_FIXO, agora como variável, depois de #undef: %d\n\n", VALOR_FIXO);

  // Resultado da macro variádica.
  int numero = 10;
  FRASE("Valor de número: %d", numero);


/* ==========================================================================
 * 7. Macros pré-definidas e #line
 * ========================================================================== */

  printf("Linha: %d\n", __LINE__); // número da linha do código fonte
  printf("Nome arquivo: %s\n", __FILE__);  // nome do arquivo do código fonte
  printf("Data compilação: %s\n", __DATE__);  // data da compilação
  printf("Horário de compilação: %s\n", __TIME__); // momento (h:m:s) da compilação
  printf("Padrão: %d\n\n", __STDC__);  // mostra 1 se implementação é padrão ISO C

  printf("Alterando linha no código fonte para 7!\n");
  #line 7 // Altera linha do código fonte
  printf("Linha: %d\n", __LINE__);

// --------------------------------------------------------------------------

  LOG2("Programa finalizado com sucesso!");

  return 0;
}
