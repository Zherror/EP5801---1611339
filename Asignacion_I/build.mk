SRC := ./src
BUILD := ./build
ARCHIVES := main calculadora

all: $(ARCHIVES)

%: %.o
	@mkdir -p $(BUILD)/bin
	@gcc $(BUILD)/$< -o $(BUILD)/bin/$@

%.o: $(SRC)/%.c
	@mkdir -p $(BUILD)
	@gcc -c $< -o $(BUILD)/$@

clean_all:
	@rm -rf $(BUILD)

clean:
	@rm -rf $(BUILD)/main* $(BUILD)/calculadora*