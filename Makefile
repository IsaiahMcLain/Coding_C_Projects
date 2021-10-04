.PHONY: clean All

All:
	@echo "----------Building project:[ Section_15_Inheritance_Project_WorkSpace - Debug ]----------"
	@cd "Section_15_Inheritance_Project_WorkSpace" && "$(MAKE)" -f  "Section_15_Inheritance_Project_WorkSpace.mk"
clean:
	@echo "----------Cleaning project:[ Section_15_Inheritance_Project_WorkSpace - Debug ]----------"
	@cd "Section_15_Inheritance_Project_WorkSpace" && "$(MAKE)" -f  "Section_15_Inheritance_Project_WorkSpace.mk" clean
