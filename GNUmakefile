CXX = g++ -std=gnu++2a
CXXFLAGS = -Wall -Wextra -g
TARGET = main

all: $(TARGET)

o: $(TARGET)-optimized

$(TARGET): clean main.cc
	$(CXX) -O0 $(CXXFLAGS) $(TARGET).cc -o $(TARGET)
	objdump -d $(TARGET) >> $(TARGET).asm
	./$(TARGET)

$(TARGET)-optimized: clean main.cc
	$(CXX) $(CXXFLAGS) $(TARGET).cc -o $(TARGET)
	objdump -d $(TARGET) >> $(TARGET).asm
	./$(TARGET)

run:
	./$(TARGET)

gdb:
	gdb -tui $(TARGET)

clean:
	rm -f $(TARGET)
	rm -f $(TARGET).asm