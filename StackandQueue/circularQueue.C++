#include<iostream>
using namespace std;
class CircularQueue{
    int *arr;
    int front,rear,size;
    public:
        CircularQueue(int s){
            size=s;
            arr=new int[size];
            front=-1;
            rear=-1;
        }
        void enqueue(int val){
            if((rear+1)%size==front){
                cout<<"Overflow Condition"<<endl;
                return;
            }
            if(front==-1){
                rear=front=0;
            }
            else{
                rear=(rear+1)%size;
            }
            arr[rear]=val;
            cout<<val<<" inserted"<<endl;
        }
        void dequeue(){
            if(front==-1){
                cout<<"Underflow"<<endl;
                return;

            }
            int val=arr[front];
            cout<<val<<" dequeued"<<endl;
            if(front==rear){
                front=rear=-1;
            }
            else{
                front=(front+1)%size;
            }
        }
        void display(){
            if(front==-1){
                cout<<"Queue is empty"<<endl;
                return;
            }
            int i=front;
            while(true){
                cout<<arr[i];
                if(i==rear){
                    break;
                }
                i=(i+1)%size;
            }
            cout<<endl;
        }
};

int main(){
     int n;
    cout << "Enter size of Circular Queue: ";
    cin >> n;

    CircularQueue q(n);

    int choice, value;

    do {
        cout << "\n===== Circular Queue Menu =====\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

                

            case 4:
                cout << "Program Ended.\n";
                break;

            default:
                cout << "Invalid Choice!\n";
        }

    } while (choice != 4);

    return 0;
}