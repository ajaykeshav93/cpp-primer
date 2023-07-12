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
MODULES = hello-world

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
