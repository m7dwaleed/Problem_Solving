    #include <iostream>
    using namespace std;



    int main(){

    int n;
    cin>>n;
    int arr[n];



    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int s=0;
    int e=n-1;
    int p=0;

    int s1=0;
    int s2=0;
    bool mySwitch=false;

    for(int i=0;i<n;i++){
        if(arr[s]>arr[e]){
        p=arr[s];
        s++; 
        }else{
            p=arr[e];
            e--;
        }
        
    if(mySwitch == false){
        s1+=p;
    }else{
        s2+=p;
    }

    mySwitch = (!mySwitch);

    }



    cout<<s1<<" "<<s2<<endl;




        return 0;
    }