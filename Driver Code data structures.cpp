#include"dataStructure.h"
#include<iostream>
int arrays();
int stacks();
int queues();
int lists();
int trees();
int main()
{
        int ch;
        label:
        cout<<"1).Arrays\n2).Stack\n3).Queue\n4).Linked List\n5).Trees\n6).Exit\n";
        cout<<"Please enter your choice: ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int a;
                        a=arrays();
                        if(a==77)
                            goto label;
                        break;
                }
                case 2:
                {
                        int a;
                        a=stacks();
                        if(a==77)
                            goto label;
                        break;
                }
                case 3:
                {
                        int a;
                        a=queues();
                        if(a==77)
                            goto label;
                        break;
                }
                case 4:
                {
                        int a;
                        a=lists();
                        if(a==77)
                            goto label;

                        break;
                }
                case 5:
                {
                        int a;
                        a=trees();
                        if(a==77)
                            goto label;
                        break;
                }
                case 6:
                {
                        cout<<"Exit!!"<<endl;
                        return 0;
                }
        }
        goto label;
}

int arrays()
{
        //Array a;
        int ch,size;
        cout<<"Enter the size: ";
        cin>>size;
        Array a(size);
        l1:
        cout<<"1).Insert\n2).Traverse\n3).Search\n4).Update\n5).Display\n6).Exit\n";
        cout<<"Enter your choice of operation: ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                {
                        int ele;
                        cout<<"Enter the element :";
                        cin>>ele;
                        a.insert(ele);
                        break;
                }

                case 2:
                {
                        int pos;
                        cout<<"Enter the position of the element that you want to traverse: ";
                        cin>>pos;
                        pos=a.traverse(pos-1);
                        cout<<pos<<endl;
                        break;
                }

                case 3:
                {
                        int ele;
                        cout<<"Enter the element that you want to search: ";
                        cin>>ele;
                        ele=a.search(ele);
                        cout<<"The Entered element is in "<<ele+1<<" position!!"<<endl;
                        if(ele==-1)
                            cout<<"The entered element is not found!"<<endl;
                        break;
                }

                case 4:
                {
                        int ele,pos;
                        cout<<"Enter the position: ";
                        cin>>pos;
                        cout<<"Enter the new element that you want to update: ";
                        cin>>ele;
                        a.update(pos,ele);
                        break;
                }

                case 5:
                        a.display();
                        break;
                case 6:
                    {
                        cout<<"Exit!!"<<endl;
                        return 77;
                    }
                default:
                        cout<<"Invalid choice!"<<endl;
        }
        goto l1;
}
int stacks()
{
        int ch,n;
        cout<<"Enter the size of the stack: ";
        cin>>n;
        Stack s(n);
        l2:
        cout<<"1).Push\n2).Pop\n3).Peek\n4).IsStackEmpty\n5).IsStackFull\n6).Display\n7).Exit\n";
        cout<<"Enter your choice of operation: ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                    {
                        int ele;
                        cout<<"Enter the element that you want to push: ";
                        cin>>ele;
                        s.push(ele);
                        break;
                    }
                case 2:
                    {
                        int res=s.pop();
                        cout<<"The popped element is: "<<res<<endl;
                        break;
                    }
                case 3:
                    {
                        int r=s.peek();
                        cout<<"The top element of the stack is: "<<r<<endl;
                        break;
                    }

                case 4:
                    {
                        bool b=s.empty();
                        if(b==1)
                                cout<<"Stack is Empty!!"<<endl;
                        else
                                cout<<"Elements are available inside the stack!"<<endl;
                        break;
                    }
                case 5:
                    {
                        bool b=s.full();
                        if(b==1)
                                cout<<"Stack is Full!!"<<endl;
                        else
                                cout<<"Stack is not full!"<<endl;
                        break;
                    }
                case 6:
                    {
                        s.display();
                        break;
                    }
                case 7:
                    {
                        cout<<"Exit!!"<<endl;
                        return 77;
                    }
                default:
                        cout<<"Invalid choice!"<<endl;
        }
        goto l2;
}
int queues()
{
        int ch,n;
        cout<<"Enter the size of the queue: ";
        cin>>n;
        Queue q(n);
        l3:
        cout<<"1).Enqueue\n2).Dequeue\n3).Peek\n4).IsQueueEmpty\n5).IsQueueFull\n6).Display\n7).Exit\n";
        cout<<"Enter your choice of operation: ";
        cin>>ch;
        switch(ch)
        {
                case 1:
                    {
                        int ele;
                        cout<<"Enter the element that you want to Enqueue: ";
                        cin>>ele;
                        q.enqueue(ele);
                        break;
                    }
                case 2:
                    {
                        int val=q.dequeue();
                        if(val==-1)
                            break;
                        cout<<"The dequeued element is: "<<val<<endl;
                        break;
                    }
                case 3:
                    {
                        int r=q.peek();
                        cout<<"The front value of the queue is: "<<r<<endl;
                        break;
                    }
                case 4:
                    {
                        bool b=q.empty();
                        if(b==1)
                                cout<<"Queue is Empty!!"<<endl;
                        else
                                cout<<"Elements are available inside the Queue!"<<endl;
                        break;
                    }
                case 5:
                    {
                        bool b=q.full();
                        if(b==1)
                                cout<<"Queue is Full!!"<<endl;
                        else
                                cout<<"Queue is not full!"<<endl;
                        break;
                    }
                case 6:
                    {
                        q.display();
                        break;
                    }
                case 7:
                    {
                        cout<<"Exit!!"<<endl;
                       return 77;
                    }
                default:
                        cout<<"Invalid choice!"<<endl;
        }
        goto l3;
}
int singly()
{
    List l;
    int ch;
    char cc;
    l5:
    cout<<"1).Insertion\n2).Deletion\n3).Display\n4).Search\n5).Peek\n6).Exit\n";
    cout<<"Which operation you want to perform: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            int ele;
            cout<<"Enter the element that you want to insert: ";
            cin>>ele;
            cout<<"a). Insertion at the beginning\nb). Insertion at the middle\nc). Insertion at the end\n";
            cout<<"Enter your choice of operation: ";
            cin>>cc;
            if(cc=='a')
            {
                l.insert('a',ele);
            }
            if(cc=='b')
            {
                int pos;
                cout<<"Enter the position: ";
                cin>>pos;
                l.insert(pos,ele);
            }
            if(cc=='c')
            {
                l.insert(ele);
            }
            break;

        }

        case 2:
        {
            cout<<"a). Deletion at the beginning\nb). Deletion at the middle\nc). Deletion at the end\n";
            cout<<"Enter your choice of operation: ";
            cin>>cc;
            if(cc=='a')
                l.remove('a');
            if(cc=='b')
            {
                int pos;
                cout<<"Enter the position that you want to delete: ";
                cin>>pos;
                l.remove(pos);
            }
            if(cc=='c')
            {
                l.remove();
                break;
            }

        }
        case 3:
            l.display();
            break;
        case 4:
            {
                int a;
                cout<<"Enter the element that you want to search: ";
                cin>>a;
                int c=l.search(a);
                cout<<"The entered element is in "<<c<<" position\n";
                break;
            }
        case 5:
        {
            int pos;
            cout<<"Enter the position of the required element: ";
            cin>>pos;
            int g=l.peek(pos);
            cout<<"The element "<<g<<" is present in the given position!!"<<endl;
            break;
        }
        case 6:
        {
            cout<<"Exit!!\n";
            return 77;
        }
        default:
            cout<<"Invalid choice!!"<<endl;
    }
    goto l5;
}
int doubly()
{
    DList d;
    int ch;
    char cc;
    l6:
    cout<<"1).Insertion\n2).Deletion\n3).Display\n4).Exit\n";
    cout<<"Which operation you want to perform: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            int ele;
            cout<<"Enter the element that you want to insert: ";
            cin>>ele;
            cout<<"a). Insertion at the beginning\nb). Insertion at the middle\nc). Insertion at the end\n";
            cout<<"Enter your choice of operation: ";
            cin>>cc;
            if(cc=='a')
            {
                d.insert('a',ele);
                break;
            }

            if(cc=='b')
            {
                int pos;
                cout<<"Enter the position: ";
                cin>>pos;
                d.insert(pos,ele);
                break;
            }
            if(cc=='c')
            {
                d.insert(ele);
                break;
            }
        }

        case 2:
        {
            cout<<"a). Deletion at the beginning\nb). Deletion at the middle\nc). Deletion at the end\n";
            cout<<"Enter your choice of operation: ";
            cin>>cc;
            if(cc=='a')
            {
                d.remove('a');
            }

            if(cc=='b')
            {
                int pos;
                cout<<"Enter the position that you want to delete: ";
                cin>>pos;
                d.remove(pos);
            }
            if(cc=='c')
            {
                d.remove();
                break;
            }

        }
        case 3:
            {
                d.display();
                break;
            }

        case 4:
            cout<<"Exit!!\n";
            return 77;
    }
    goto l6;
}
int lists()
{
    int choice;
    l4:
    cout<<"1).Singly Linked List\n2).Doubly Linked List\n3).Exit\n";
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            {
                int a;
                a=singly();
                if(a==77)
                    return 77;
                break;
            }

        case 2:
            {
                int a;
                a=doubly();
                if(a==77)
                    return 77;
                break;
            }


        case 3:
            cout<<"Exit!!"<<endl;
            return 77;;
        default:
            cout<<"Invalid choice!!"<<endl;
    }
    goto l4;
}
int trees()
{
    int ch;
    int a[50],s;
    tnode *tt;
    Tree t;
    tt=t.root;
    cout<<"Enter the size: ";
    cin>>s;
    for(int i=0;i<s;i++)
    {
        cout<<"Enter the element :";
        cin>>a[i];
    }
    l7:
    cout<<"1).Insert\n2).Inorder Traversal\n3).Preorder Traversal\n4).Postorder Traversal\n5).Display\n6).Exit\n";
    cout<<"Which operation you want to perform: ";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            t.insert(a,s);
            break;
        }
        case 2:
        {
            t.inorder(tt);
            break;
        }
        case 3:
        {
            t.preorder(tt);
            break;
        }
        case 4:
        {
            t.postorder(tt);
            break;
        }
        case 5:
        {
            t.print(tt,s);
            break;
        }
        case 6:
        {
            cout<<"Exit!!"<<endl;
            return 77;
        }
    }
    goto l7;
}
