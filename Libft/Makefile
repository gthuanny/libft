# ----------------------------- #
#           SETTINGS            #
# ----------------------------- #

NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -rf

# ----------------------------- #
#             FILES             #
# ----------------------------- #

FILES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_strdup.c \
	ft_calloc.c
# ft_split.c

OBJS = $(FILES:.c=.o)

OBJS := $(SRC:%.c=%.o)

# ----------------------------- #
#            RULES              #
# ----------------------------- #

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


# SRC é uma variável que contém todos os arquivos-fonte obrigatórios.
# Como pode ver, eu simplesmente coloquei os nomes dos arquivos sem a extensão .c.
# A extensão .c é adicionada a cada arquivo com a função addsuffix filename.
# Esta função filename tem o seguinte protótipo:
# $(addsuffix sufixo, nomes…)
# O sufixo será adicionado a cada nome de arquivo que você incluir como segundo argumento.
#SRC = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint)

# OBJS é uma variável que contém todos os nomes de arquivos .o.
# Como pode ver, eu escrevi OBJS := e não OBJS =.
# A diferença entre := e = é que = é um operador de atribuição 
# como conhecemos em C. := diz ao make para anexar o resultado à variável.
# Precisamos anexar o resultado porque o que está à direita será executado
# para cada arquivo .c individualmente.
# O que está à direita basicamente significa: "para cada arquivo .c encontrado na
# variável SRC, me dê o nome de arquivo .o correspondente".
# Isso anexará o resultado de cada arquivo .c à variável OBJ.
# Ele simplesmente substitui o .c de cada arquivo na variável SRC por .o.
#OBJS := $(SRC:%.c=%.o)

# BONUS_SRC é uma variável que contém todos os arquivos-fonte bônus.
# Como pode ver, eu simplesmente coloquei os nomes dos arquivos sem a extensão .c.
# A extensão .c é adicionada a cada arquivo com a função addsuffix filename.
# Esta função filename tem o seguinte protótipo:
# $(addsuffix sufixo, nomes...)
# O sufixo será adicionado a cada nome de arquivo que você incluir como segundo argumento.
# Em seguida, adicionei uma função $(addprefix, nomes...) ao redor disso para
# adicionar um prefixo referente ao diretório bônus.
# A função $(addprefix, nomes...) funciona como a addsuffix,
# mas em vez de adicionar o texto ao final de cada nome de arquivo, adiciona ao início.
#BONUS_SRC = $(addprefix bonus/, $(addsuffix _bonus.c, ft_lstnew ft_lstadd_back ft_lstadd_front ))

# BONUS_OBJS é uma variável que contém todos os nomes de arquivos .o bônus.
# Isso funciona da mesma forma que a variável OBJS.
#BONUS_OBJS := $(BONUS_SRC:%.c=%.o)

# SUPP_SRC é uma variável que contém todos os arquivos-fonte adicionais.
# Funciona da mesma forma que a variável BONUS_SRC, adicionando o sufixo .c
# a cada nome de arquivo e, em seguida, o prefixo supp/ a cada nome.
#SUPP_SRC = $(addprefix supp/, $(addsuffix .c, ft_putchar ft_putstr ft_putnbr))

# SUPP_OBJS é uma variável que contém todos os nomes de arquivos .o adicionais.
# Funciona da mesma forma que as variáveis OBJS e BONUS_OBJS.
#SUPP_OBJS := $(SUPP_SRC:%.c=%.o)

# Assim como fiz para os arquivos-fonte e objetos, declarei algumas variáveis
# para coisas que não quero escrever toda vez.

# NAME é uma variável que contém o nome do arquivo de biblioteca que queremos criar.
#NAME = libft.a

# CC é uma variável que contém o compilador.
# Normalmente gcc para C e g++ para C++.
#CC = gcc

# CCFLAGS é uma variável que contém as flags do compilador.
# -Wall : habilita todos os avisos sobre construções suspeitas.
# -Wextra : habilita avisos extras que não são ativados por -Wall.
# -Werror : transforma todos os avisos em erros, parando a compilação.
# Você pode ver quais flags são ativadas e mais detalhes aqui:
# https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html#Warning-Options
#CCFLAGS = -Wall -Wextra -Werror

# INC_DIR é uma variável que contém o caminho do diretório de includes.
# O diretório include é usado para colocar todos os arquivos .h necessários
# pela sua biblioteca.
# Ao incluir o diretório de include como flag do pré-processador, 
# você não precisa especificar o caminho toda vez que incluir um header.
# Pode simplesmente escrever #include "main.h" em vez de "../include/main.h".
#INC_DIR = .

# CPPFLAGS é uma variável que contém as flags do pré-processador.
# Neste exemplo, contém apenas a flag -I, que especifica o caminho do
# diretório de include definido na variável INC_DIR.
#CPPFLAGS = -I$(INC_DIR)

# RM é uma variável alias para o comando shell rm -f.
# Digo "alias" porque posso usá-la em vez de escrever rm -f toda vez.
# Se eu não colocar a opção -f, o uso de rm gerará um erro se o arquivo não existir.
# -f força a execução, independentemente de o arquivo existir ou não.
#RM = rm -f

# ARNAME é uma variável alias para o comando shell ar rcs $(NAME).
#ARNAME = ar rcs $(NAME)

# RANNAME é uma variável alias para o comando shell ranlib $(NAME).
#RANNAME = ranlib $(NAME)

# OBJS_BASBO é uma variável que contém todos os nomes de arquivos objeto
# dos arquivos-fonte obrigatórios e dos arquivos-fonte bônus.
#OBJS_BASBO = $(OBJS) $(BONUS_OBJS)

# OBJS_ALL é uma variável que contém todos os nomes de arquivos objeto 
# obrigatórios, bônus e adicionais.
#OBJS_ALL = $(OBJS_BASBO) $(SUPP_OBJS)

# ALL é a primeira regra do Makefile, tornando-a a regra padrão quando
# o comando make é chamado sem especificar uma regra.
# Esta regra depende da regra $(NAME) e, portanto,
# chamará a regra $(NAME).
#all: $(NAME)

# $(NAME) é a regra principal do Makefile.
# Esta regra tem a variável OBJS como dependência, o que significa que,
# se um ou mais arquivos .o estiverem faltando, o make tentará criá-los
# (se houver uma regra para isso) antes de executar os comandos de $(NAME).
# Quando todas as dependências existirem, os comandos serão executados.
# Os comandos são o que foi descrito acima na seção de variáveis:
# ARNAME : ar rcs $(NAME)
# RANNAME : ranlib $(NAME)
#$(NAME): $(OBJS)
#    $(ARNAME) $(OBJS)
#    $(RANNAME)

# A regra %.o compila um arquivo .c em seu respectivo arquivo objeto (.o).
# O padrão %.o: %.c especifica que, para construir algo cujo nome termina com .o,
# é necessário um arquivo com o mesmo prefixo, mas terminando com .c.
# $<: nome do primeiro pré-requisito.
# $@: nome do alvo — o que está à esquerda dos dois pontos.
#%.o: %.c
#    $(CC) $(CPPFLAGS) $(CCFLAGS) -o $@ -c $<

# A regra CLEAN não tem pré-requisitos.
# O que ela faz é usar a variável $(RM) seguida do conteúdo da
# variável OBJS_ALL, ou seja, todos os arquivos .o.
# Isso resulta na exclusão de todos os arquivos .o.
#clean:
#    $(RM) $(OBJS_ALL)

# A regra FCLEAN depende da regra CLEAN, o que significa que a CLEAN será
# executada primeiro.
# Quando CLEAN terminar, os comandos de fclean serão executados.
# Isso resulta na exclusão de todos os arquivos .o e também da biblioteca
# criada, pois ela tem o nome $(NAME).
#fclean: clean
#    $(RM) $(NAME)

# A regra RE depende das regras FCLEAN e ALL.
# Como as dependências são lidas da esquerda para a direita, a primeira regra
# a ser executada será FCLEAN, depois ALL.
# Como não há comandos na regra RE, uma vez que ALL terminar,
# RE também estará concluída.
#re: fclean all

# A regra bonus funciona da mesma forma que a regra $(NAME), mas em vez de
# ter a variável OBJS como dependência, ela tem OBJS_BASBO.
# Como OBJS_BASBO contém as variáveis OBJS e BONUS_OBJS,
# todos os arquivos .o contidos nelas são dependências desta regra.
# Os comandos são os mesmos descritos anteriormente:
# ARNAME : ar rcs $(NAME)
# RANNAME : ranlib $(NAME)
#bonus: $(OBJS_BASBO)
#    $(ARNAME) $(OBJS_BASBO)
#    $(RANNAME)

# A regra everything funciona da mesma forma que a $(NAME),
# mas em vez de ter OBJS como dependência, tem OBJS_ALL.
# Como OBJS_ALL contém OBJS, BONUS_OBJS e SUPP_OBJS,
# todos os arquivos .o contidos nessas variáveis são dependências desta regra.
# Os comandos são os mesmos descritos anteriormente:
# ARNAME : ar rcs $(NAME)
# RANNAME : ranlib $(NAME)
#everything: $(OBJS_ALL)
#    $(ARNAME) $(OBJS_ALL)
#    $(RANNAME)

