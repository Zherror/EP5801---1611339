SRC := ./src
BUILD := ./build

imprimir: imprimir.o imprimir_asm.o
	@mkdir -p $(BUILD)/bin
	@gcc $(BUILD)/imprimir.o $(BUILD)/imprimir_asm.o -o $(BUILD)/bin/imprimir

imprimir_asm.o: $(SRC)/imprimir.asm
	@mkdir -p $(BUILD)
	@nasm -f elf64 $< -o $(BUILD)/$@

imprimir.o: $(SRC)/imprimir.c
	@mkdir -p $(BUILD)
	@gcc -c $< -o $(BUILD)/$@

clean_all:
	@rm -rf $(BUILD)

clean:
	@rm -rf $(BUILD)/main*