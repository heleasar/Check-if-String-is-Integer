#include <string>
#include <iostream>

bool isValidInteger(std::string str, int& intVar) {
    // Check if the string is empty
    if (str.empty()) {
        return false;
    }
    // Check if the first character is a sign (+ or -)
    bool hasSign = (str[0] == '+' || str[0] == '-');
    // Check if the string has a sign and only one character
    if (hasSign && str.size() == 1) {
        return false;
    }
    // Check if the string contains non-digit characters
    bool isDigit = true;
    for (size_t i = hasSign ? 1 : 0; i < str.size(); ++i) {
        if (!std::isdigit(str[i])) {
            isDigit = false;
            break;
        }
    }
    if (!isDigit) {
        // Check if the string is a floating-point number
        size_t dotPos = str.find('.');
        if (dotPos == std::string::npos) {
            return false;
        }
        std::string intPart = str.substr(0, dotPos);
        isDigit = true;
        for (size_t i = hasSign && intPart.size() == 1 ? 1 : 0; i < intPart.size(); ++i) {
            if (!std::isdigit(intPart[i])) {
                isDigit = false;
                break;
            }
        }
        if (!isDigit) {
            return false;
        }
        intVar = std::stoi(intPart);
    } else {
        intVar = std::stoi(str);
    }
    return true;
}
