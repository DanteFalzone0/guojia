CPP = g++
TARGET = guojia.x86

$(TARGET): src/main.cpp
	g++ src/main.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean: $(TARGET)
	rm $(TARGET)