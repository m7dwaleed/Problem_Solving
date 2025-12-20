#include <iostream>
using namespace std;

int main()
{

    int arr[] = {3, 5, 3, 3, 9, 5};
    for (int i = 0; i < 6; i++)
    {
       int current=arr[i];
        bool found=false;
        for(int j=0;j<i;j++){
            if(current==arr[j]){
                found=true;
                break;
            }
        }
       
        if (found==true){
            continue;
        }

        
            int count=0;

            for(int k=i;k<6;k++){
                if(current==arr[k]){
                    count++;
                }
            }
        
      

        cout<<current<<" appear"<<count<<endl;


    }

    return 0;
}