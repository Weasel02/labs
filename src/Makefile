CXX = g++
CXXFLAGS = -Wall -Wextra
TARGET = fibonacci

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp
	
clesn: 
	rm -f $(TARGET)

install: $(TARGET)
	install -D -m 755 $(TARGET) $(DESTDIR)/usr/bin/$(TARGET)
