#include <iostream>
#include "./linked_list.hh"

int main() {
    linked_list ll;
    while(true) {
        std::string input;
        std::cout << "add to ll: ";
        getline(std::cin, input);
        if(input.empty()) continue;
        ll.add(input);
        std::cout << "internal:" << std::endl;
        ll.print_res();
        std::cout << std::endl;
        std::cout << "reversed:" << std::endl;
        ll.reverse();
        ll.print_res();
    }
    return 0;
}