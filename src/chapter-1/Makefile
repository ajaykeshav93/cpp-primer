CC = clang++
OPT = -g
WARN = -Wall
INCLUDE = -I/Users/meltdown1993/Desktop/cpp-primer/include
CFLAGS = $(OPT) $(WARN) $(INCLUDE) -std=c++11

ECHO = echo
SILENT = @

#LDFLAGS= -L/opt/homebrew/opt/llvm/lib/ -Wl,-rpath,/opt/homebrew/opt/llvm/lib/  
LDLIBS = -lstdc++
CPPFLAGS = -I/opt/homebrew/opt/llvm/include

# List all binaries to generate
MODULES = ex_1.3 \
			ex_1.4 \
			ex_1.5 \
			ex_1.8 \
			ex_1.9 \
			ex_1.10 \
			ex_1.11 \
			ex_1.13 \
			ex_1.16 \
			ex_1.19 \
			ex_1.20 \
			ex_1.21 \
			ex_1.22 \
			ex_1.23 \
			ex_1.25

all: $(MODULES)

#Disable built-in rule
%: %.cpp

#Rule for object -> exectutable
%: %.o
	$(SILENT) $(ECHO) "--- Linking $@ ---"
	$(SILENT) $(CC) $^ $(LDLIBS) -o $@ 

#Rule for *.cpp -> *.o
%.o: %.cpp
	$(SILENT) $(ECHO) "--- Compiling $< ---"
	$(SILENT) $(CC) -c $(CFLAGS) $(LDFLAGS) $<

clean:
	$(SILENT) $(ECHO) "--- Removing object files and binaries ---"
	$(SILENT) rm -f *.o 
	$(SILENT) rm -f $(MODULES)

.PHONY: clean
