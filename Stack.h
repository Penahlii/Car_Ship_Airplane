#pragma once

template<class T , int maxsize = 10>
class Stack
{
	T arr[maxsize];
	int top = -1;
	int size = 0;

public:

	// Is Empty , Is Full

	inline bool isEmpty() const;
	inline bool isFull() const;

	// Get size , top
	
	inline int get_size() const;
	inline int get_top() const;

	// push , pop

	void push(T new_item);
	void pop();

	// cout

	template<class T, int maxsize>
	friend ostream& operator<<(ostream& os, const Stack<T, maxsize>& stack);
};

// Is Empty , Is Full

template<class T, int maxsize>
inline bool Stack<T, maxsize>::isEmpty() const { return (this->top == -1); }

template<class T, int maxsize>
inline bool Stack<T, maxsize>::isFull() const { return (this->top == maxsize - 1); }

// Get size , top

template<class T, int maxsize>
inline int Stack<T, maxsize>::get_size() const { return this->size; }

template<class T, int maxsize>
inline int Stack<T, maxsize>::get_top() const { return this->top; }

// push , pop

template<class T, int maxsize>
void Stack<T, maxsize>::push(T new_item)
{
	if (this->isFull())
		assert(!"Stack Is FULL !!!");
	this->top++;
	this->size++;
	this->arr[this->top] = new_item;
}

template<class T, int maxsize>
void Stack<T, maxsize>::pop()
{
	if (this->isEmpty())
		assert(!"Stack is Empty !!!");
	this->size--;
	this->top--;
}

// cout

template<class T, int maxsize>
ostream& operator<<(ostream& os, const Stack<T, maxsize>& stack)
{
	for (size_t i = 0; i < stack.size; i++)
	{
		os << i + 1 << ") ";
		os << stack.arr[i] << endl;
	}

	return os;
}