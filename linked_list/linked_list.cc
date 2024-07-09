#include "./linked_list.hh"

linked_list::linked_list(): size(0), head(nullptr) {}

void linked_list::add(std::string value) {
	list_node* item = new list_node(value);
	if(head == nullptr) {
		head = item;
		return;
	}
	item->next = head;
	head = item;
	size++;
}

void linked_list::remove(std::string value) {
	list_node* prev = nullptr;
	list_node* curr = head;
	while(curr) {
		if(curr->data == value) {
			if(prev) {
				prev->next = curr->next;
			} else {
				head = curr->next;
			}
			delete curr;
			return;
		}
		prev = curr;
		curr = curr->next;
	}
}

int linked_list::search(std::string value) {
	int idx = 0;
	list_node* curr = head;
	if(!curr) return -1;
	while(curr) {
		if(curr->data == value) {
			return idx;
		}
		curr = curr->next;
		idx++;
	}
	return idx;
}

void linked_list::reverse() {
	list_node* prev = nullptr;
	list_node* curr = head;
	list_node* foll = head;
	while(curr) {
		foll = foll->next;
		curr->next = prev;
		prev = curr;
		curr = foll;
	}
	head = prev;
}

void linked_list::print_res() {
	list_node* temp = head;
	while (temp) {
		std::cout<< temp->data;
		if(temp->next) {
			std::cout << "->";
		} else {
			std::cout << "\n";
		}
		temp = temp->next;
	}
}

