CXX = C:/w64devkit/bin/g++.exe
RAYLIB_PATH = C:/raylib
CXXFLAGS = -Wall -std=c++17 -g -O0 -I$(RAYLIB_PATH)/include
LDFLAGS = -L$(RAYLIB_PATH)/lib -lraylib -lopengl32 -lgdi32 -lwinmm

TARGET = gioco.exe
SRC = Main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(SRC) -o $(TARGET) $(CXXFLAGS) $(LDFLAGS)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
