cshell: src/main.c
	gcc src/main.c -lreadline -o cshell && ./cshell
