CPP = g++
TARGET = guojia.x86
FLAGS = -O3 -std=c++11
LD_FLAGS = -ldjf-3d-2 -lSDL2
SRC = src/main.cpp\
      src/draw_hex.cpp\
      src/draw_hex.h\
      src/HexTile.cpp\
      src/HexTile.h\
      src/HexTypes.h

OBJS = objs/draw_hex.o objs/HexTile.o

$(TARGET): $(SRC)
	$(CPP) $(FLAGS) -c src/draw_hex.cpp -o objs/draw_hex.o
	$(CPP) $(FLAGS) -c src/HexTile.cpp -o objs/HexTile.o
	$(CPP) $(FLAGS) src/main.cpp $(OBJS) -o $(TARGET) $(LD_FLAGS)

run: $(TARGET)
	./$(TARGET)

clean: $(TARGET)
	rm objs/*.o
	rm $(TARGET)
