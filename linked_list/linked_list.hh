#include <iostream>
#include <string>

struct list_node {
		std::string data;
		list_node *next;
		list_node(std::string value): data(value), next(nullptr) {}
};

class linked_list {
	private:
		unsigned int size;
		list_node* head;
	public:
		linked_list();
		void add(std::string value);
		void remove(std::string value);
		int search(std::string value);
		void reverse();
		void print_res();
};
