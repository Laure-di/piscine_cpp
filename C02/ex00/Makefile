#######################################
#              COMPILER               #
#######################################

CC	=	clang++

######################################
#             EXECUTABLE             #
######################################
NAME	=	fixed

#######################################
#             DIRECTORIES             #
#######################################

OBJSDIR	=	objs

######################################
#            SOURCE FILES            #
######################################

SRCS	=	Fixed.cpp	\
			main.cpp		\

######################################
#            OBJECT FILES            #
######################################

OBJS	=	${addprefix ${OBJSDIR}/, ${SRCS:.cpp=.o}}

DEP	=	${OBJS:.o=.d}

#######################################
#                FLAGS                #
#######################################

FLAGS = -Wall -Werror -Wextra -MMD -MP -std=c++98 -pedantic-errors -g3

#######################################
#                RULES                #
#######################################

.PHONY: clean fclean all re

all: ${NAME}

$(NAME): ${OBJS}
			${CC} ${FLAGS} ${OBJS} -o $@

-include $(DEP)
${OBJSDIR}/%.o:%.cpp | $(OBJSDIR)
			${CC} ${FLAGS} -c $< -o $@

$(OBJSDIR):
	@mkdir -p $@

clean:
		@rm -rf ${OBJSDIR}

fclean: clean
		@rm -rf ${NAME}

re:	fclean all
