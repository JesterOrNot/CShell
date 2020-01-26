#include <readline/readline.h>
#include <readline/history.h>

int main() {
    while(1) {
        char* line = readline(">>> ");
        add_history(line);
        system(line);
    }
}