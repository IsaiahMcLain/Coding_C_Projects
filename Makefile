.PHONY: clean All

All:
	@echo "----------Building project:[ Section17Challenge_SmartPointers - Debug ]----------"
	@cd "Section17Challenge_SmartPointers" && "$(MAKE)" -f  "Section17Challenge_SmartPointers.mk"
clean:
	@echo "----------Cleaning project:[ Section17Challenge_SmartPointers - Debug ]----------"
	@cd "Section17Challenge_SmartPointers" && "$(MAKE)" -f  "Section17Challenge_SmartPointers.mk" clean
