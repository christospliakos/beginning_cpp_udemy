.PHONY: clean All

All:
	@echo "----------Building project:[ Dereference - Debug ]----------"
	@cd "Dereference" && "$(MAKE)" -f  "Dereference.mk"
clean:
	@echo "----------Cleaning project:[ Dereference - Debug ]----------"
	@cd "Dereference" && "$(MAKE)" -f  "Dereference.mk" clean
