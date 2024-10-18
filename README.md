# 42_libft

1. Objetivo
Criar uma biblioteca chamada libft.a, que conterá várias funcoes implementadas,
com comportamentos semelhantes às funcoes da biblioteca padrão da linguagem C (libc),
porem com o prefixo ft_ nos nomes das funcoes.


3. Arquivos para entregar
Entregar:

    Um Makefile: para automatizar a compilacao da biblioteca.
    O arquivo de cabecalho libft.h: onde estarao declaradas as funcoes a implementar.
    Os arquivos de código-fonte, com os nomes no formato ft_*.c: por exemplo, ft_strlen.c, ft_isalpha.c e assim por diante.


4. Regras do Makefile
No Makefile, necessario incluir os seguintes comandos:

    NAME: o nome da biblioteca (neste caso, libft.a).
    all: comando que compilará todos os arquivos e criarao a biblioteca.
    clean: comando que apaga os arquivos objetos (.o).
    fclean: comando que apaga os arquivos objetos e a biblioteca libft.a.
    re: comando que executa o fclean e, em seguida, recompila tudo (um "rebuild" completo).


4. Consideracoes tecnicas
    Variáveis globais são proibidas.
    Usar funcoes estáticas (static) quando for preciso funcoes auxiliares dentro de um arquivo.
    Colocar todos os arquivos no diretório raiz do repositório.
    Compilar os arquivos com as flags: -Wall, -Wextra e -Werror.
    A biblioteca deve ser criada usando o comando "ar" e o arquivo gerado (libft.a) deve estar no diretório raiz.


5. Parte 1: Recriar funcoes da biblioteca padrao (Libc)
É necessário recriar as seguintes funcoes da biblioteca padrão da linguagem C, usando o prefixo ft_ para cada uma delas.
As implementacoes devem seguir as especificacoes da man page de cada funcoes, mas sem usar o qualificador restrict (que faz
parte do padrao C99). Abaixo está a lista de funções:

    Funcoes que não usam alocacao dinamica de memória:
        isalpha, isdigit, isalnum, isascii, isprint
        strlen, memset, bzero, memcpy, memmove
        strlcpy, strlcat, toupper, tolower
        strchr, strrchr, strncmp, memchr, memcmp
        strnstr, atoi

    Funções que requerem alocacao dinamica de memória (usando malloc):
        calloc, strdup

7. Dicas gerais

    Para entender como cada funcao funciona, pode-se consultar as "man pages" (por exemplo, man strlen para ver como o strlen funciona).
    Ao implementar as funcoes, seguir a assinatura original, mas adicionar o prefixo ft_. Por exemplo:
        int strlen(const char *s); → int ft_strlen(const char *s);
   Necessário garantir que todas as funcoes compilem corretamente com os avisos e erros ativados (flags: -Wall, -Wextra, -Werror).
   
