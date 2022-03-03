#Main application file name
MAIN_APP = project
#Main hex file path in windows format
MAIN_HEX_PATH = F:\temp\M2-EmbSys\Project\3_Implementation\src\$(MAIN_APP).hex

# Compiler and other Section
CC = avr-gcc
OBJCOPY = avr-objcopy.exe

#Options for avr-gcc
CFLAGS = -g -Os -o

#Linking options for avr-gcc
LFLAGS = -Os -mmcu=atmega328 -o

#Options for HEX file generation
HFLAGS = -j .text -j .data -O ihex


# Sources files needed for building the application 
SRC = src/$(MAIN_APP).c src/homeautofun.c
# The headers files needed for building the application
INCLUDE =-Iheader\

# commands Section
Burn : Build
	$(AVRDUDE) $(DUDEFLAGS)

Build : $(MAIN_APP).elf
	$(OBJCOPY) $(HFLAGS) $< $(MAIN_APP).hex
	
$(MAIN_APP).elf: $(MAIN_APP).o
	$(CC) $(SRC) $(INCLUDE) $(LFLAGS) $@
	
$(MAIN_APP).o:$(SRC)
	$(CC) $^ $(INCLUDE) $(CFLAGS) $@

	