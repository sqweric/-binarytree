#include "iostream.h"
#include "Binary_tree.cpp"
#include "Record.h"
template <class Entry>
void print(Entry &x){
	cout<<x;	
}

void main(){
	Binary_tree<Record> mytree;
	for(int i=0; i<10; i++)mytree.insert(Record(i));
	cout<<"Tree size is: "<<mytree.size()<<endl;
	cout<<"Tree height is: "<<mytree.height()<<endl;
	cout<<"Preorder:"<<endl;
	mytree.preorder(print);
	cout<<endl;
	cout<<"inorder:"<<endl;
	mytree.inorder(print);
	cout<<endl;
	cout<<"Postorder:"<<endl;
	mytree.postorder(print);
	cout<<endl;
	cin.get();
}