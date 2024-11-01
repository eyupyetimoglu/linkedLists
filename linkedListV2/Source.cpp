#include<iostream>

using namespace std;

struct n {
	int x;

	n* next;
};

typedef n node;

void printer(node* r) {
	while (r != NULL) {
		printf("%d", r->x);
		r = r->next;
	}
}

node* addingSeq(node* r, int x) {

	if (r == NULL) {

		r = (node*)malloc(sizeof(node));
		r->next = NULL;
		r->x = x;

		return r;

	}

	if (r->x > x) {

				node* temp = (node*)malloc(sizeof(node));
				temp->x = x;
				temp->next = r;

				return temp;

	}

	node* iter = r;
	while (iter->next != NULL && iter->next->x < x) {
		iter = iter->next;
	}


	node* temp = (node*)malloc(sizeof(node));
	temp->next = iter->next;
	iter->next = temp;
	temp->x=x;

	return r;

	


}

int main() {
	node* root;
	
	root = NULL;


	root = addingSeq(root, 100);
	root = addingSeq(root, 1000);
	root = addingSeq(root, 200);
	root = addingSeq(root, 500);
	root = addingSeq(root, 300);
	root = addingSeq(root, 700);
	root = addingSeq(root, 300);

	printer(root);

	node* iter;
	iter = root;
	for (int i = 0; i < 3; i++) {
		iter = iter->next;
		
	}
	node* temp = (node*)malloc(sizeof(node));
	temp->next = iter->next;
	iter->next = temp;
	temp->x = 100;

	




}