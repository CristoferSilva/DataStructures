# List of all DataStructures
MODULES = $(basename $(wildcard */))

all:
	@echo "====[$(shell date +%T)]  START BUILD (General) ===="
	@$(MAKE) --no-print-directory $(MODULES)
	@echo "====[$(shell date +%T)]  END BUILD (General) ===="

$(MODULES):
	@echo "====[$(shell date +%T)]  START BUILD ($(basename $@)) ===="
	@$(MAKE) -C $@
	@echo "====[$(shell date +%T)]  END BUILD FOR ($(basename $@)) ===="

clean:
	@echo "====[$(shell date +%T)]  START CLEANING (General) ===="
	@for dir in $(MODULES); do $(MAKE) --no-print-directory -C $$dir clean; done
	@echo "====[$(shell date +%T)]  END CLEANING (General) ===="

.PHONY: all clean $(MODULES)