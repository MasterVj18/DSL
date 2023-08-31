#include <iostream>
using namespace std;
class Array
{
private:
    int *a;
    int i;
    int size;

    public:
        Array()
        {

        }
        Array(int s)
        {
            a=new int[s];
            i=0;
            size=s;
        }
        void insert(int ele)
        {
            if(i>=size)
            {
                cout<<"Array full "<<endl;
            }
            else{
                a[i]=ele;
            i++;
            }
        }
        int traverse(int pos)
        {
            if(pos>i+1)
            {
                cout<<"Invalid position "<<endl;
                return 0;
            }
            return a[pos];
        }
        int search(int ele)
        {
            for(int j=0;j<=1;j++)
            {
                if(a[j]==ele)
                {
                    return j;
                }
            }
            return -1;
        }
        void update(int pos,int ele)
        {
            a[pos-1]=ele;
        }
        void display()
        {
            for(int j=0;j<i;j++)
               cout<<"---";
            cout<<"\n|";
            for(int j=0;j<i;j++)
                cout<<a[j]<<"|";
                cout<<endl;
            for(int j=0;j<i;j++)
                cout<<"---";
                cout<<endl;
        }

};
class node
{
public:
    int data;
    node* next;
}*head,*ptr,*temp;
class List
{
private:
    node n1;
    node* head=NULL;
public:
    void insert (char s,int a)
    {
        node *newnode=new node;
        newnode->next=NULL;
        newnode->data=a;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            newnode->next=head;
            head=newnode;
        }
    }
    void insert(int a)
    {
        node *newnode=new node;
        newnode->next=NULL;
        newnode->data=a;
        node *ptr=head;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            while(ptr->next!=NULL)
            ptr=ptr->next;
            ptr->next=newnode;
        }


    }
    void insert(int pos,int a)
    {
        node *newnode=new node;
        newnode->next=NULL;
        newnode->data=a;
        node *ptr=head;

        for(int i=1;i<pos-1;i++)
        {
            ptr=ptr->next;
        }
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    void remove(char c)
    {
        if(head==NULL)
            cout<<"List is empty"<<endl;
        else
        {
            node *ptr=head;
            head=head->next;
        }
    }
    void remove()
    {
        node *ptr=head;
        node *ptr1;
        while(ptr->next!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        ptr1->next = NULL;
    }
    void remove(int a)
    {
        node *ptr=head;
        for(int i=1;i<a-1;i++)
            ptr=ptr->next;
        node *ptr1=ptr->next;
        ptr->next=ptr1->next;
    }
    void display()
    {
        if(head==NULL)
        {
            cout<<"List is empty "<<endl;
        }
        else
        {
            cout<<"The elements are : "<<endl;
            for(node *ptr=head;ptr!=NULL;ptr=ptr->next)
            {
                cout<<ptr->data<<" --> ";
            }
            cout<<"NULL"<<endl;
        }
    }
    int search(int a)
    {
        int i=0;
        for(node *ptr=head;ptr!=NULL;ptr=ptr->next)
            {
                i++;
                if(ptr->data==a)
                return i;
            }
            return 0;
    }
    int peek(int pos)
    {
        node *ptr=head;
        for(int i=1;i<pos;i++)
            ptr=ptr->next;
        return ptr->data;
    }
};

class dnode
{
public:
    dnode *prev;
    int data;
    dnode *next;
};
class DList
{
private:
    dnode n;
    dnode* head=NULL;
    dnode *tail=NULL;
public:
    void insert(int a)
    {
        cout<<"Insert"<<endl;
        dnode *newnode=new dnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        newnode->data=a;
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
        }
        else{

            tail->next=newnode;
            newnode->prev=tail;
            tail=newnode;
        }
    }
    void insert(char c,int a)
    {
        dnode *newnode=new dnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        newnode->data=a;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
            dnode *p=head;
            newnode->prev=NULL;
            newnode->next=head;
            head=newnode;
            p->prev=newnode;
        }
    }
    void insert(int pos,int a)
    {
        dnode *newnode=new dnode;
        newnode->prev=NULL;
        newnode->next=NULL;
        newnode->data=a;
        dnode *p=head;
        for(int i=1;i<pos-1;i++)
        {
            p=p->next;
        }
        newnode->next=p->next;
        newnode->prev=p;
        p->next=newnode;
    }
    void display()
    {
        dnode *p=head;
        cout<<"Head -> ";
        for(p=head;p!=NULL;p=p->next)
        {
            cout<<p->data<<" <==> ";
        }
        cout<<"NULL"<<endl;
    }
    void remove()
    {
        if(tail==NULL)
        {
            cout<<"List is empty "<<endl;
        }
        tail=tail->prev;
        tail->next=NULL;
    }
    void remove(char x)
    {
        if(head==NULL)
            cout<<"List is Empty "<<endl;
        else
        {
            head=head->next;
            head->prev=NULL;
        }
    }
    void remove(int pos)
    {
        if(pos==1)
            this->remove();
        else
        {
            dnode *temp=head;
            for(int i=1;i<pos-1;i++)
            {
                temp=temp->next;
            }
            temp->next->prev=temp->prev;
            temp->prev->next=temp->next;
        }

    }
    int peek(int pos)
    {
         dnode *temp=head;
            for(int i=1;i<pos;i++)
            {
                temp=temp->next;
            }
            return temp->data;
    }
    int search(int a)
    {
        dnode *temp=head;
            for(int i=1;temp!=NULL;i++)
            {
                temp=temp->next;
                if(temp->data=a)
                    return i;
            }
            return 0;
    }

};

class Stack
{
    private:
        int top;
        int a[50];
        int n;
    public:
        Stack(int n)
        {
            this->n=n;
            top=-1;
        }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack is full "<<endl;
        }
        else{
             top++;
             a[top]=x;
        }

    }
    int pop()
    {
        if(top<0)
            cout<<"Stack is empty "<<endl;
        else{
                top--;
                return a[top+1];
        }
    }
    int peek()
    {
        return a[top];
    }
    bool empty()
    {
        if(top<0)
            return 1;
        return 0;
    }
    bool full()
    {
        if(top==n-1)
            return 1;
        return 0;
    }
    void display()
    {
        int i=top;
        while(i!=-1)
        {
            cout<<"| "<<a[i]<<" |\n"<<"-----\n";
            i--;
        }
    }

};
class Queue
{
    private:
        int a[50];
        int front;
        int rear;
        int n=10;
    public:
    Queue(int n)
    {
        this->n=n;
        front=0;
        rear=0;
    }
    bool empty()
    {
        if(front == rear)
            return 1;
        return 0;
    }
    bool full()
    {
        if(rear==n)
                return 1;
        return 0;

    }
    void enqueue(int x)
    {
        if(rear==n)
            cout<<"Queue is full "<<endl;
        else
        {
            a[rear]=x;
            rear++;
        }

    }
    int dequeue()
    {
        if(front==rear && front>n-1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }

        else
        {
            front++;
            return a[front-1];
        }

    }
    int peek()
    {
        return a[front];
    }
    void display()
    {
        int i=front;
        while(i!=rear)
        {
            cout<<a[i]<<" | ";
            i++;
        }
        cout<<endl;
    }
};

int c=5;
class tnode
{
public:
    int data;
    tnode *left;
    tnode *right;
    tnode()
    {
        data=0;
        left=NULL;
        right=NULL;
    }
};
class Tree
{
public:

    tnode* root;
    tnode q;
    int s=0;
        void print(tnode* t,int s)
        {
            if(t==NULL)
                return;
            s+=c;
            print(t->right,s);
            cout<<endl;
            for(int i=c;i<s;i++)
                cout<<" ";
            cout<<t->data<<endl;
            print(t->left,s);
        }
        void preorder(tnode *p)
        {
            if(p!=NULL)
            {
                cout<<" "<<p->data;
                preorder(p->left);
                preorder(p->right);
            }
        }
        void inorder(tnode *p)
        {

            if(p!=NULL)
            {

                inorder(p->left);
                cout<<" "<<p->data;
                inorder(p->right);
            }
        }
        void postorder(tnode *p)
        {
            if(p!=NULL)
            {
                postorder(p->left);
                postorder(p->right);
                cout<<" "<<p->data;
            }
        }
        void insert(int a[50],int s)
        {
            int c=1;
            tnode *p;
             tnode* q=new tnode;
             q->data=a[0];
            root=q;
            for(int i=1;i<s;i++)
            {
                tnode* q=new tnode;
                q->data=a[i];
                p=root;
                c=1;
                while(c)
                {
                    if(q->data<=p->data)
                    {
                        if(p->left==NULL)
                        {
                            p->left=q;
                            c=0;
                        }
                        else
                        {
                            p=p->left;
                        }
                    }
                    else if(q->data>p->data)
                    {
                        if(p->right==NULL)
                        {
                            p->right=q;
                            c=0;
                        }
                        else
                            p=p->right;
                    }
                }
            }
        }
};
