#include <ctime>
#include <iostream>
#include <random>
#include <string>

std::string generatePassword(int length = 12, bool includeNumbers = true,
                             bool includeSymbols = true) {
  const std::string letters =
      "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::string password;
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(0, letters.size() - 1);

  for (int i = 0; i < length; ++i) {
    char c = letters[dist(gen)];
    password += c;
  }

  if (includeNumbers) {
    password += std::to_string(dist(gen) % 10);
  }
  if (includeSymbols) {
    password += "!@#$%^&*()";
  }

  return password;
}
int main() {
  std::cout << generatePassword() << std::endl;
  return 0;
}
