#include <iostream>
#include <readline/readline.h>
#include <readline/history.h>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    while(1) {
        string line = readline(">>> ");
        if (line == "clearhist") {
            cout << "\033[0;32mHistory has been cleared ✔\033[0m\n";
            clear_history();
            continue;
        }
        if(!(line.length() == 0)) {
            add_history(line.c_str());
        }
        system(line.c_str());
    }
}