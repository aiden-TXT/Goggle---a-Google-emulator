#include <iostream>
#include "search_engine.h"
#include "execution_manager.h"
#include "ui.h"
#include "network.h"
#include "security.h"

int main() {
    UI ui;
    SearchEngine searchEngine;
    ExecutionManager executor;
    Network network;
    Security security;

    while (true) {
        ui.displayMenu();
        std::string choice;
        ui.getUserInput(choice);

        if (choice == "1") {
            std::string query;
            std::cout << "Enter search query: ";
            ui.getUserInput(query);
            searchEngine.search(query);
        } else if (choice == "2") {
            std::string programPath;
            std::cout << "Enter C++ program path to execute: ";
            ui.getUserInput(programPath);
            if (security.isSafeCommand(programPath)) {
                executor.runProgram(programPath);
            } else {
                std::cout << "Blocked: Unsafe command detected.\n";
            }
        } else if (choice == "3") {
            std::cout << "Exiting Google Simulator...\n";
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
