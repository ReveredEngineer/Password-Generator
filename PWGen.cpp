#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

std::string generatePassword(int length = 12) {
    const std::string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+";
    std::string password;
    srand(time(0));

    for (int i = 0; i < length; i++) {
        password += chars[rand() % chars.length()];
    }

    return password;
}

int main() {
    std::cout << generatePassword(16) << std::endl;
    return 0;
}
