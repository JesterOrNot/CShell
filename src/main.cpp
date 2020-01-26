#include <readline/readline.h>
#include <readline/history.h>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    while(1) {
        string line = readline(">>> ");
        if (line == "clearhist") {
            clear_history();
            continue;
        }
        if(!(line.length() == 0)) {
            add_history(line.c_str());
        }
        system(line.c_str());
    }
}