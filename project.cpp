#include <iostream>


using namespace std;




class arrayreplica{
	private:
		int list[100];
        int size = 0;


	public:

        int Search_By_Value(int value){
			
            for(int i = 0; i < size; i++){
				if(list[i] == value)
                {
					return i;
				}
			
            }	


			return -1;
		}

        void Reverse(){
			int i = 0;
            while(i < size / 2){
                int e = list[i];
                list[i] = list[size - i - 1];
                list[size - i - 1] = e;
                i++;
            }
		}

		int Delete_By_Value(int value){
			for(int i=0; i < size; i++)
            {
				
                if (list[i] == value){
					for(int j= i; j< size - 1; j++){
						
                        
                        list[j]= list[j + 1];
					}
					size = size - 1;

					return i;
				}
			}
			return -1;
		}

		void Delete_By_Index(int input)
        {
			for (int i = input; i < size - 1; i++){
				list[i] = list[i + 1];
			}	
			size--;
		}
		void Display(){
			
            for(int i=0; i< size; i++){
				cout<<list[i]<<" ";
			
            }
			
            cout<<endl;
		}
		void Append(int value){
			list[size] = value;


			size++;
		}
		
        void Insert(int index, int value){
			for(int i= size; i>= index; i--){
				list[i+1] = list[i];

			}
			list[index] = value;
			
            size++;
			
		}
};

int main() {
	
    arrayreplica array;
    array.Append(1);
    array.Append(2);
	array.Append(3);
    array.Append(4);
    array.Append(5);

    array.Insert(1, 63);
    array.Display();

    array.Delete_By_Index(1);
    array.Display();

    array.Delete_By_Value(5);
    array.Display();

    array.Reverse();
    array.Display();

    int value = array.Search_By_Value(4);
    cout<<value<<endl;

	return 0;
}

