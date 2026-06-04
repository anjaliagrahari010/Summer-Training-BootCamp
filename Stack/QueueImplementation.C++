#include<iostream>
using namespace std;

class CircularQueue{
    int front,rear,size;
    int *arr;
    public:
        CircularQueue(int n){
            size=n;
            arr=new int[size];
            front=rear=-1;

        }

        void enqueue(int val){
            if(front==-1){
                front=rear=0;
            }
            else{
                rear=(rear+1)%size;
            }
            arr[rear]=val;
            cout<<val<<"inserted"<<endl;
            if((rear+1)%size==front){
                cout<<"Queue is Full. Insertion can not perform"<<endl;
                return ;
            }
            
        }

        void dequeue(){
            if(front==-1){
                cout<<"Queue is Empty."<<endl;
                return ;
            }
            cout<<arr[front]<<"Removed"<<endl;
            if(front==rear){
                front=rear=-1;
            }
            else{
                front=(front+1)%size;
            }
        }

        void display(){
            if(front==-1){
                cout<<"Queue is Empty\n";
                return ;
            }
            int i=front;
            cout<<"Queue Elements: ";
            while(true){
                cout<<arr[i]<<" ";
                if(i==rear){
                    break;
                }   
                i=(i+1)%size;
            }
            cout<<endl;
        }
};
int main(){
    int n,choice,val;
    cin>>n;
    CircularQueue q(n);
    do {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Value: ";
            cin >> val;
            q.enqueue(val);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            q.display();
            break;

        case 4:
            cout << "Exiting...\n";
            break;

        default:
            cout << "Invalid Choice\n";
        }
    }
    while (choice != 4);

    return 0;
}