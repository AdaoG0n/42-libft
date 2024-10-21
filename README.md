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
    <br/>
    <br/>
    
    Funções de manipulação de caracteres:
        ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
        ft_toupper, ft_tolower
        
    Funções básicas de manipulação de memória:
        ft_memset, ft_bzero
        ft_memcpy, ft_memmove
        ft_memchr, ft_memcmp
        
    Funções básicas de manipulação de strings:
        ft_strlen
        ft_strchr, ft_strrchr
        ft_strncmp
        ft_strlcpy, ft_strlcat
        
    Funções de conversão:
        ft_atoi
        ft_itoa
        
    Funções de alocação de memória:
        ft_calloc
        ft_strdup
        
    Funções mais complexas de manipulação de strings:
        ft_substr
        ft_strjoin
        ft_strtrim
        ft_split
        
    Funções que usam ponteiros para funções:
        ft_strmapi
        ft_striteri
        
    Funções de output:
        ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

Dicas para o estudo:

    Comecar com as funções mais simples e ir progredindo.
    Para cada função:
        Ler a descrição e entender o que ela deve fazer.
        Analizar o código linha por linha.
        Escrever comentários explicando o que cada parte do código faz.
        Tentar reescrever a função por conta própria sem olhar o código original.
        Criar casos de teste para verificar se a função funciona corretamente.
    Usar recursos como:
        A página do manual (man) para entender as funções originais da libc.
        Desenhar diagramas para visualizar como as funções manipulam memória ou strings.
        Escrever pequenos programas que usam essas funções para ver como elas funcionam na prática.
    Praticar explicar cada função em voz alta, como se estivesse ensinando alguém.
    Identificar padrões e conceitos que se repetem entre as funções (como alocação de memória, iteração sobre strings, etc.).
    Não hesitar em revisar conceitos básicos de C, como ponteiros, alocação de memória, e manipulação de strings.

Lembre-se, a compreensão vem com o tempo e a prática. 
Não se preocupe se não entender tudo de uma vez. Volte às funções anteriores regularmente para reforçar seu entendimento.
Boa sorte com os estudos!

### To test you can use libfttester
[libftTester](https://github.com/Tripouille/libftTester)
