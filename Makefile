NAME =	a

SRC		=	main.cpp \
			Player/Player.cpp \
			Tile/Tile.cpp \
			Tile/Rock/Rock.cpp \
			Tile/Sand/Sand.cpp \
			Core/Core.cpp \

OBJS	=	$(SRC:.cpp=.o)

all:	$(OBJS)
		g++ -o $(NAME) $(OBJS) -O1 -Wall -I include/ -L lib/ -lraylib -lopengl32 -lgdi32 -lwinmm
		./a.exe

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:		fclean all