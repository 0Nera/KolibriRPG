# Just compile with TinyC
# (Now I learn about MakeFile)
GCC = gcc # GCC compiler
TCC = kos32-tcc # TinyC compiler
TCC-FLAGS = main.c modules.c -o KolibriRpg -lck -Os
GCC-FLAGS = main.c modules.c -o KolibriRpg.exe -Os
$(GCC) $(GCC-FLAGS)
$(TCC) $(TCC-FLAGS)
done:
	echo "Compiled"