SRC := ./src
SENSORS := $(SRC)/sensors
BUILD := ./build
BUILD_FILES := main.o gest.o pos.o

main: $(BUILD_FILES)
	@mkdir -p $(BUILD)/bin
	@gcc $(BUILD)/pos.o $(BUILD)/gest.o $(BUILD)/main.o -o $(BUILD)/bin/$@

main.o: $(SRC)/main.c
	@mkdir -p $(BUILD)
	@gcc -c $< -o $(BUILD)/$@

%.o: $(SENSORS)/%.c
	@mkdir -p $(BUILD)
	@gcc -c $< -o $(BUILD)/$@

clean_all:
	@rm -rf $(BUILD)

clean:
	@rm -rf $(BUILD)/main*