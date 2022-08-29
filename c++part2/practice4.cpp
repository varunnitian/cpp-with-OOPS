// #include<iostream>
// using namespace std;
// int swap(int *a,int *b)
// {
// int temp;
// temp=*a;
// *a=*b;
// *b=temp;
// return temp;
// }
// int main()
// {
// int x=20,y=30,z;
// cout<<"before swapping:"<<x<<" "<<y<<endl;
// z=swap(&x,&y);
// cout<<"after swapping :"<<x<<" "<<y<<endl;
//     return 0;
// }    //return by address//


// #include<iostream>
// using namespace std;
// int swap(int a,int b)
// {
// int temp;
// temp=a;
// a=b;
// b=temp;
// return temp;
// }
// int main()
// {
// int x=20,y=30,z;
// cout<<"before swapping:"<<x<<" "<<y<<endl;
// z=swap(x,y);
// cout<<"after swapping :"<<x<<" "<<y<<endl;
//     return 0;
// }    //return byy value//

// #include<iostream>
// using namespace std;
// int swap(int &a,int &b)
// {
// int temp;
// temp=a;
// a=b;
// b=temp;
// return temp;
// }
// int main()
// {
// int x=20,y=30;
// cout<<"before swapping:"<<x<<" "<<y<<endl;
// swap(x,y);
// cout<<"after swapping :"<<x<<" "<<y<<endl;
//     return 0;
// }  //return by reference//
// #include<iostream>
// using namespace std;
// void fun(int a[],int n)
// {
//     int i;
//      a[0]=25;
//     for(i=0;i<n;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// int main()
// {
// int a[5]={2,4,6,8,10};
// fun(a,5);
//     return 0;
// }
// //array as parameter//
// #include<iostream>
// using namespace std;
// struct rectangle
// {
// int length;
// int breadth;
// };
// void fun(struct rectangle *p){
//     p->length=10;
//     cout<<"length:"<<p->length<<endl<<"breadth"<<p->breadth<<endl;
// }
// int main(){
//     struct rectangle r={30,5};
//     fun(&r);
//     cout<<"length is:"<<r.length<<endl;
//     cout<<"breadth is:"<<r.breadth<<endl;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// struct rectangle
// {
// int length;
// int breadth;
// };
// struct rectangle *fun()
// {
//     struct rectangle *p;
//     p=new rectangle;
//     p->length=15;
//     p->breadth=7;
//     return p;
// }
// int main(){
//     struct rectangle *ptr=fun();
//     cout<<"length:"<<ptr->length<<endl<<"breadth:"<<ptr->breadth<<endl;
//     return 0;
// }
