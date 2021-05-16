#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    std::string result;
    if  (command == "add") {
        result = std::to_string(first + second);
    }
    if  (command == "subtract") {
        result = std::to_string(first - second);
    }
    if  (command == "multiply") {
        result = std::to_string(first * second);
    }
    if  (command == "divide") {
        if (second == 0)
            result = "Division by 0";
        else
            result = std::to_string(first / second);
    }
    if  (command == "quit") {
        exit(0);
    }
    if (command != "add" && command != "subtract" && command != "multiply" &&
            command != "divide" && command != "quit") {
        result = "Invalid data";
    }
    return result;
}
