# 42_libft
<br/>
1. Objetivo<br/>
Criar uma biblioteca chamada libft.a, que conterá várias funcoes implementadas,<br/>
com comportamentos semelhantes às funcoes da biblioteca padrão da linguagem C (libc),<br/>
porem com o prefixo ft_ nos nomes das funcoes.<br/>
<br/>
<br/>
3. Arquivos para entregar<br/>
    Um Makefile: para automatizar a compilacao da biblioteca.<br/>
    O arquivo de cabecalho libft.h: onde estarao declaradas as funcoes a implementar.<br/>
    Os arquivos de código-fonte, com os nomes no formato ft_*.c: por exemplo, ft_strlen.c, ft_isalpha.c e assim por diante.<br/>
<br/>
<br/>
4. Regras do Makefile<br/>
No Makefile, necessario incluir os seguintes comandos:<br/>
<br/>
    NAME: o nome da biblioteca (neste caso, libft.a).<br/>
    all: comando que compilará todos os arquivos e criarao a biblioteca.<br/>
    clean: comando que apaga os arquivos objetos (.o).<br/>
    fclean: comando que apaga os arquivos objetos e a biblioteca libft.a.<br/>
    re: comando que executa o fclean e, em seguida, recompila tudo (um "rebuild" completo).<br/>
<br/>
<br/>
4. Consideracoes tecnicas<br/>
    Variáveis globais são proibidas.<br/>
    Usar funcoes estáticas (static) quando for preciso funcoes auxiliares dentro de um arquivo.<br/>
    Colocar todos os arquivos no diretório raiz do repositório.<br/>
    Compilar os arquivos com as flags: -Wall, -Wextra e -Werror.<br/>
    A biblioteca deve ser criada usando o comando "ar" e o arquivo gerado (libft.a) deve estar no diretório raiz.<br/>
<br/>
<br/>
5. Parte 1: Recriar funcoes da biblioteca padrao (Libc)<br/>
É necessário recriar as seguintes funcoes da biblioteca padrão da linguagem C, usando o prefixo ft_ para cada uma delas.<br/>
As implementacoes devem seguir as especificacoes da man page de cada funcoes, mas sem usar o qualificador restrict (que faz<br/>
parte do padrao C99). Abaixo está a lista de funcoes:<br/>
<br/>
    Funcoes que não usam alocacao dinamica de memória:<br/>
        isalpha, isdigit, isalnum, isascii, isprint<br/>
        strlen, memset, bzero, memcpy, memmove<br/>
        strlcpy, strlcat, toupper, tolower<br/>
        strchr, strrchr, strncmp, memchr, memcmp<br/>
        strnstr, atoi<br/>
<br/>
    Funções que requerem alocacao dinamica de memória (usando malloc):<br/>
        calloc, strdup<br/>
<br/>
<br/>
7. Dicas gerais<br/>
<br/>
    Para entender como cada funcao funciona, pode-se consultar as "man pages" (por exemplo, man strlen para ver como o strlen funciona).<br/>
    Ao implementar as funcoes, seguir a assinatura original, mas adicionar o prefixo ft_. Por exemplo:<br/>
        int strlen(const char *s); → int ft_strlen(const char *s);<br/>
   Necessário garantir que todas as funcoes compilem corretamente com os avisos e erros ativados (flags: -Wall, -Wextra, -Werror).<br/>
<br/>
<br/>
7. Uso do Makefile e criação da biblioteca<br/>
No Makefile, usar o comando "ar" para criar a biblioteca estática a partir dos arquivos .o. Algo assim:<br/>
<br/>
makefile<br/>
<br/>
NAME = libft.a<br/>
CC = gcc<br/>
CFLAGS = -Wall -Wextra -Werror<br/>
SRC = ft_strlen.c ft_isalpha.c ... # lista dos arquivos .c<br/>
OBJ = $(SRC:.c=.o)<br/>
<br/>
all: $(NAME)<br/>
<br/>
$(NAME): $(OBJ)<br/>
	ar rcs $(NAME) $(OBJ)<br/>
<br/>
clean:<br/>
	rm -f $(OBJ)<br/>
 <br/>
fclean: clean<br/>
	rm -f $(NAME)<br/>
<br/>
re: fclean all<br/>
<br/>
<br/>
<br/>
8. Próximos passos<br/>
<br/>
    Implementar cada função no seu próprio arquivo .c.<br/>
    Adicionar a declaração das funções no arquivo libft.h.<br/>
    Testar as funções para garantir que se comportam como esperado.<br/>
    Compilar a biblioteca com o Makefile.<br/>
