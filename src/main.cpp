#include <readline/readline.h>
#include <readline/history.h>
#include <bits/stdc++.h> 

int main() {
    while(1) {
        char* line = readline(">>> ");
        add_history(line);
        system(line);
    }
}