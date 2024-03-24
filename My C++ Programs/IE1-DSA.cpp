#include <bits/stdc++.h>
using namespace std;

string ltrim (const string &);
string rtrim (const string &);

class SinglyLinkedListNode
{
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode (int node_data)
        {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList
{
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList()
        {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node (int node_data)
        {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if(!this->head)
            {
                this->head = node;
            }
            else
            {
                this->tail->next = node;
            }
            this->tail = node;
        }
};

void print_singly_linked_list (SinglyLinkedListNode* node, string sep, ofstream& fout)
{
    while(node)
    {
        fout << node->data;
        node = node->next;
        if(node)
        {
            fout << sep;
        }
    }
}

int midElement (SinglyLinkedListNode* head)
{
    SinglyLinkedListNode *slow = head;
    SinglyLinkedListNode *fast = head;
  
    if(head!=NULL)
    {
        while (fast != NULL && fast->next != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
    }
    return slow->data ;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));
    SinglyLinkedList* node = new SinglyLinkedList();
    string node_count_temp;
    getline(cin, node_count_temp);
    int node_count = stoi(ltrim(rtrim(node_count_temp)));

    for (int i=0; i<node_count; i++)
    {
        string node_item_temp;
        getline(cin, node_item_temp);
        int node_item = stoi(ltrim(rtrim(node_item_temp)));
        node->insert_node(node_item);
    }

    int middleElement = midElement(node->head);

    fout << middleElement << "\n";

    fout.close();
    return 0;
}

string ltrim (const string &str) 
{
    string s(str);
    s.erase(s.begin(), find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));
    return s;
}

string rtrim (const string &str)
{
    string s(str);
    s.erase(find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),s.end());
    return s;
}