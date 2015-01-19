template<typename T>
class tree_node{
	tree_node * first_child,next_sibling;
	T data;
};

template<typename T>
class tree{
public:
	class iterator;
	iterator begin();
	iterator end();
	void swap_data(iterator one,iterator two);
	iterator erase();
	iterator fire();
	iterator hire();
	void print();
	class iterator{
	public:
		iterator();
		iterator(tree_node nd);
		tree_node node;
		bool operator!=(iterator it);
		bool operator==(iterator it);
		iterator operator++();
		iterator operator--();
		iterator operator++(int);
		iterator operator--(int);

	};
private:tree_node<T> head,feet;
};

template<typename T>
tree<T>::iterator tree<T>::begin(){
	return iterator(head->nextsibling);
}
template<typename T>
tree<T>::iterator tree<T>::end(){
	return iterator(feet);
}
template<typename T>
void tree<T>::swap_data(iterator one,iterator two){
	T tmp;
	one
}
