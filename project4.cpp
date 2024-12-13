#include <iostream>
using namespace std;

class Servin{
	public:
		int top = -1;
		int array[150];

        void push(int item){
        	top++;
            array[top] = item;
        }
        
        int pop(){
        	if(is_empty()){
        		cout<<"Tohi"<<endl;
        		return NULL;
			}
			else{
				int s = array[top];
				top--;
				return s;
			}
		}
		
		bool is_empty(){
            if(top == -1){
                return true;
            }   
            else{
                return false;
            }
        }
		
		int peek(){
			if(is_empty()){
				cout<<"Tohi"<<endl;
        		return NULL;
			}	
			else{
				return array[top];
			}		
		}
		
};

class Haji{
	public:
		Servin sr1 = Servin();
		Servin sr2 = Servin();
		
		void enqueue(int item){
			sr1.push(item);
		}
		
		void dequeue(){
			while(!sr1.is_empty()){
				int s = sr1.pop();
				sr2.push(s);
			}
			sr2.pop();
			
			while(!sr2.is_empty()){
				int v = sr2.pop();
				sr1.push(v);
			}
		}
};

int main(int argc, char** argv) {
	
	Haji h = Haji();
	h.Enqueue(2);
	h.Enqueue(5);
	h.Enqueue(6);
	h.Dequeue();
	return 0;
}





