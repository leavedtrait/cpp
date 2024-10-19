#include <format>
#include <iostream>
#include <memory>
#include <string>


void print_str(std::string str) { std::cout << str << std::endl; }

enum class Animal_type{cat, dog, chicken};


struct Animal {
    Animal_type type;

    // Implement the speak method to output different noises based on the animal type
    void speak() {
        switch (type) {
            case Animal_type::cat:
                std::cout << "Meow!" << std::endl;
                break;
            case Animal_type::dog:
                std::cout << "Woof!" << std::endl;
                break;
            case Animal_type::chicken:
                std::cout << "Cluck!" << std::endl;
                break;
            default:
                std::cout << "Unknown animal sound!" << std::endl;
        }
    }
};

int main() {
  int a = 10;
  float b = 3.14159;

  // Create the formatted string using std::format
  std::string formatted = std::format("Integer: {}, Float: {:.2f}", a, b);

  print_str(formatted);

  std::unique_ptr<std::string> str_ptr = std::make_unique<std::string>(
      "i just did memory allocation SAFELY in C++ >_< ");
  print_str(*str_ptr);
  
  Animal cat = {Animal_type::cat};
  Animal dog = {Animal_type::dog};
  Animal chicken = {Animal_type::chicken};

  // Test the speak method
  cat.speak();      // Outputs: Meow!
  dog.speak();      // Outputs: Woof!
  chicken.speak();  // Outputs: Cluck!
  return 0;
}
