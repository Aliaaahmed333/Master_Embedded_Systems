


# prebared by Aliaa Ahmed 
# date : 22/10/2023 
# time : 12:15 am 

CC=arm-none-eabi-
CFLAGS=-mcpu=cortex-m3 -gdwarf-2
INCS=-I. 

SRC= $(wildcard *.c)
OBJ= $(SRC:.c=.o) #same as objs = $(uart.o st
AS= $(wildcard *.s)
ASOBJ= $(AS:.s = .o)
Project_Name= learn_in_depth_cortex_m3


# to call directly file .bin not the first target in file like startup when we write make only we writ all
all: $(Project_Name).bin
# to wrie statement on word we say 
	@echo "------------build is done------------"

#startup.o: startup.s
	#$(CC)as.exe $(CFLAGS) startup.s -o startup.o

%.o: %.c
	$(CC)gcc.exe  $(CFLAGS) $(INCS) -c  $< -o $@

$(Project_Name).elf:	$(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(OBJ) $(ASOBJ) -o $(Project_Name).elf -Map=Map_file.map

$(Project_Name).bin:	$(Project_Name).elf
	$(CC)objcopy.exe -O binary $(Project_Name).elf $(Project_Name).bin


clean_all:
	rm* .o *.bin *.elf
clean:
	rem *.bin *.elf
	

#$(Project_Name).bin: app.c	uart.c	startup.s
	#$(CC)-as.exe $(CFLAGS) startup.s -o startup.o
	#$(CC)-gcc.exe -c -g $(INCS). -mcpu=arm926ej-s uart.c -o uart.o
	#$(CC)-gcc.exe -c -g $(INCS). -mcpu=arm926ej-s app.c -o app.o
	#$(CC)-ld.exe -T linker.ld startup.o app.o uart.o $(Project_Name).elf -Map=Map_file.map
	#$(CC)-objcopy.exe -O binary $(Project_Name).elf $(Project_Name).bin
	  