#include <bits/stdc++.h>
using namespace std;

class heap
{
public:
    int arr[100];

    int size;
    heap(){
          arr[0]=-1;
          size=0;

    }
    void insert(int val)
    {
        size = size + 1;
        int index = size;
        arr[index] = val;
        while (index > 1)
        {
            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }


    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap(){
          if(size==0)cout<<"Nothing to Delete"<<endl;
          
          arr[1]=arr[size];
          size--;
          int i=1;
          while(i<size){
              int left=2*i;
              int right=2*i+1;

              if(arr[left]>arr[i] && left<size){
                
                   swap(arr[left],arr[i]);
                   i=left;
              }
              else if(right<size && arr[i]<arr[right]){
                  swap(arr[i],arr[right]);
                  i=right;
              }
              else{
                  return;
              }
          }

           
    }
};
int main()
{
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
  cout<<"Before Delete Heap  ";
    h.print();
    h.deleteFromHeap();
cout<<"\nAfter Deletion in Heap  ";
h.print();


}
//O(logn)