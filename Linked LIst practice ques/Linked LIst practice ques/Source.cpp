#include <iostream>
using namespace std;
struct node
{

	int data;
	node* next;
};
class list
{
	node* head, * tail;
public:
	list()
	{
		head = NULL;
		tail = NULL;
	}
	void Create_Node()
	{
		int value;
		cout << "elemnt inside the list \n";
		cin >> value;
		node* temp = new node;
		temp->data = value;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			
		}
		else

		{
			tail->next = temp;
			tail = tail->next;

		}

	}
	void Insert_in_the_start()
	{
		int x;
		cout << "Enter the element that you want to insert in the start \n";
		cin >> x;
		node* temp = new node;
		temp->data = x;
		temp->next = head;
		head = temp;
	}
	void Insert_in_the_end()
	{
		int x;
		cout << endl;
		cout << "Enter the element that you want to insert at the end \n";
		cin >> x;
		node* temp = new node;
		temp->data = x;
		temp->next = NULL;
		if (head == NULL)
		{
			head = temp;
			tail = temp;
			temp = NULL;
		}
		else
		{
			tail->next = temp;
			tail = tail->next;

		}

	}
	void Insert_at_the_new_pos()
	{
		int pos;
		int x;
		cout << "Enter the position of your new node \n";
		cin >> pos;
		node* curr = new node;
		node* pre = new node;
		node* temp = new node;
		curr = head;
		for (int i = 1; i < pos; i++)
		{
			pre = curr;
			curr = curr->next;
		}
		cout << "Enter the data \n";
		cin >> x;
		temp->data = x;
		pre->next = temp;
		temp->next = curr;

	}

	void display()
	{
		node* temp ;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "\t";
			temp = temp->next;
		}
	}

	void Delete_First_Node()
	{
		cout << "After deleting the first node of the list \n";
		node* temp = new node;
		temp = head;
		head = head->next;
		delete temp;
	}
	void Delete_End()
	{
		node* current = new node;
		node* previous = new node;
		current = head;
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;

		}
		tail = previous;
		previous->next = NULL;
		delete current;
	}

	void Delete_Position()
	{
		int position;
		cout << "Enter the position of the node you want to delete \n";
		cin >> position;
		node* current = new node;
		node* previous = new node;
		current = head;
		for (int i = 1; i < position; i++)
		{
			previous = current;
			current = current->next;

		}
		previous->next = current->next;
	}

	int Search()
	{
		int index = 0;
		int s;
		cout << "Enter the element you want to search \n";
		cin >> s;
		node* temp = head;
		while (temp != NULL)
		{
			if (temp->data == s)
			{
				cout << "Element is found \t" << "at node \t" << index << endl;
				return index;
				break;
			}
			temp = temp->next;
			index++;




		}
		cout << "Not found \n";
		return -1;
	}
	void Size()
	{
		node* temp = head;
		int size = 0;
		while (temp != NULL)
		{
			temp = temp->next;
			size++;
		}
		cout << "Size of list is " << size << endl;
	}
	void Mid_Point()
	{
		node* temp = head;
		int size = 0;
		while (temp != NULL)
		{
			temp = temp->next;
			size++;
		}
		cout << "Mid point is " << size / 2 << endl;
		cout << endl;
		node* iter = head;
		for (int i = 0; i <= (size / 2) - 1; i++)
		{
			iter = iter->next;
		}
		cout << endl;
		cout << endl;
		cout << "The middle element of the node is " << iter->data << endl;
	}
	/*void Swap()
	{


	}*/
	void Repeat()
	{
		
		node* temp = head;
		node* temp2 = head;
		while (temp != NULL)
		{
			cout<<temp->data;
			cout << endl;
			temp = temp->next;
			
			while (temp2 != NULL)
			{
				cout<<temp2->data;
				cout << endl;
			    	
				if (temp2->data == temp->data)
				{
					
					cout << "found \n";
					break;
				}
				
				temp2 = temp2->next;
			}
			
			
		}
	}

};
void show_list()
{
	list a;
	a.Create_Node();
	a.Create_Node();
	a.Create_Node();
	a.Create_Node();
	a.Create_Node();

	cout << endl;
	cout << endl;
	a.display();
	cout << endl;
	cout << endl;
	a.Size();
	a.Mid_Point();
	cout << endl;
	cout << endl;
	a.Repeat();
	a.Search();
	/*a.Insert_in_the_start();
	cout << endl;
	cout << endl;
	cout << "New linked list \n";
	cout << endl;
	a.display();
	cout << endl;
	a.Insert_in_the_end();
	cout << endl;
	cout << endl;
	cout << "Updated linked list \n";
	cout << endl;
	a.display();
	cout << endl;
	cout << endl;
	a.Insert_at_the_new_pos();
	cout << endl;
	cout << endl;
	cout << "updated linked list \n";
	a.display();
	cout << endl;
	cout << endl;
	a.Search();
	cout << endl;
	cout << endl;
	a.Delete_First_Node();
	cout << endl;
	cout << endl;
	cout << "Updated link list \n";
	a.display();
	cout << endl;
	cout << "After deletion of last node \n";
	a.Delete_End();
	cout << endl;
	cout << endl;
	cout << "Updated link list \n";
	a.display();
	cout << endl;
	a.Delete_Position();
	cout << endl;
	cout << endl;
	cout << "Updated link list \n";
	a.display();*/
}
int main()
{
	
	show_list();
	return 0;
}