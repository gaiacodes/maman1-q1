TARGET = translate
SRC = translate.c

all: $(TARGET)

$(TARGET): $(SRC)
	gcc -ansi -Wall -pedantic -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)