template<typename T>
struct node {
	node* prev = nullptr;
	T data;
	node* next = nullptr;
};

template<typename T>
class Node
{
private:
	node<T>* head = nullptr;
public:
	unsigned long size = 0;
	T elementAt(unsigned long);
	void push_At(unsigned long, T);
	void remove_At(unsigned long);
	void push_last(T);
	void push_back(T);
	void remove_match(T);
	void clear();
};

template<typename T>
T Node<T>::elementAt(unsigned long n)
{
	if (n < 0 || n >= size) {
		exit(103);
	}
	node<T>* tmp = head;
	for (unsigned long i = 0; i < n; i++) {
		tmp = tmp->next;
	}
	return tmp->data;
}

template<typename T>
void Node<T>::push_At(unsigned long n, T data)
{
	if (n < 0 || n > size) {
		exit(101);
	}
	size++;
	node<T>* tmp1 = new node<T>();
	tmp1->data = data;
	tmp1->next = nullptr;

	if (n == 0) {
		tmp1->next = head;
		head = tmp1;
		return;
	}

	node<T>* tmp2 = head;
	for (unsigned long i = 0; i < n - 1; i++) {
		tmp2 = tmp2->next;
	}

	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
}

template<typename T>
void Node<T>::remove_At(unsigned long n)
{
	if (n < 0 || n >= size) {
		exit(102);
	}
	size--;
	if (n == 0) {
		head = head->next;
		return;
	}

	node<T>* tmp = head;
	for (unsigned long i = 0; i < n - 1; i++) {
		tmp = tmp->next;
	}
	node<T>* tmp2 = tmp->next;
	tmp->next = tmp2->next;
	delete tmp2;
}

template<typename T>
void Node<T>::push_last(T data)
{
	node<T>* tmp1 = new node<T>();
	tmp1->data = data;
	tmp1->next = nullptr;

	if (size == 0) {
		size++;
		tmp1->next = head;
		head = tmp1;
		return;
	}

	size++;
	node<T>* tmp2 = head;
	for (unsigned long i = 0; i < size - 2; i++) {
		tmp2 = tmp2->next;
	}

	tmp1->next = tmp2->next;
	tmp2->next = tmp1;
}

template<typename T>
void Node<T>::push_back(T data)
{
	size++;
	node<T>* tmp = new node<T>();
	tmp->data = data;
	tmp->next = head;
	head = tmp;
}

template<typename T>
inline void Node<T>::remove_match(T data)
{
	node<T>* tmp = head;
	for (unsigned long i = 0; i < size; i++) {
		if (data == tmp->data) {
			remove_At(i);
			i--;
		}
		tmp = tmp->next;
	}
}

template<typename T>
void Node<T>::clear()
{

}