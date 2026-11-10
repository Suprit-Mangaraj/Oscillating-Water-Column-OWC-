#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

// *Structures----->
// struct Rectangle
// {
//     int length;
//     int breadth;
// }; //*alernative variable with class declaration:- }r; (now we dont need to declare the variable again with class type and struct like line 11)

// *functions------->
// int add(int a,int b) // *a and b are formal parameters
// {
//     int c;
//     c=a+b;
//     return c;
// }

// *parameter passing------>
    // *pass by value
    // void swap(int p,int q)
    // {
    //     int temp=p;
    //     p=q;
    //     q=temp;
    //     cout<<endl<<p<<endl<<q<<endl;
    // }

    // *pass by adresses
    // void swap(int *p,int *q)
    // {
    //     int temp=*p;
    //     *p=*q;
    //     *q=temp;
    //     cout<<endl<<*p<<endl<<*q<<endl;
    // }

    // *call by reference
    // void swap(int &p,int &q)
    // {
    //     int temp=p;
    //     p=q;
    //     q=temp;
    //     cout<<endl<<p<<endl<<q<<endl;
    // }

// *array as parameter----->
// void fun(int A[],int n) // *call by address in array (use it when specificaly reefering to array in main)
// {
//     cout<<endl;
//     for (int i=0;i<n;i++)
//     {
//         cout<<A[i]<<endl;
//     }
// }

// void fun(int *A,int n)  // *use it as a general method as pointer can point to any data type,its more convinient
// {
//    cout<<endl;
//     for (int i=0;i<n;i++)
//     {
//         cout<<A[i]<<endl;
//     } 
// }

// *how to use func to manipulate actual parametrers------>
// *any change in formal parameters over here can change the actual parameter
// int * fun(int n, int &size)
// {
//     int *p;
//     p=(int*)malloc(n*sizeof(int));
//     size= n*sizeof(int);
//     return(p);
// }

// *example----->
// void fun(int A[], int n)  // *can use *A
// {
//     cout<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cout<<A[i]<<endl;
//     }
// }

// *example1------>
// int * fun(int size)
// {
//     int *p;
//     p=new int[size];
//     for(int i=0;i<size;i++)
//     {
//     p[i]=i+1;
//     }
//     return p;
// }

// *structure as parameter------>
// *call by value------>
// int area(struct Rectangle r1)
// {
//     return r1.length*r1.breadth; // *any chnge in formal parameter will chnage the actual parameter as it is call by value
// }

// *call by address----->
// void changelength(struct Rectangle *p,int l)
// {
//     p->length=l;
// }

// *array as data in struct------>
// struct Test 
// {
//     int A[5];
//     int n;
// };

// void fun(struct Test *t1)
// {  
//     cout<<endl;
//     // *this will change the actual parameter as this call by address
//     t1->A[0]=10;
//     t1->A[1]=9;
//     for(int x:t1->A)
//     {
//         cout<<x<<endl;
//     }
// }

// *structres and functions----->
    // void initialize(struct Rectangle *r,int l,int b)
    // {
    //     r->length=l;
    //     r->breadth=b;
    // }

    // int area(struct Rectangle r)
    // {
    //     return r.length*r.breadth;
    // }

    // void changelength(struct Rectangle *r,int l)
    // {
    //     r->length=l;
    // }

// *change c to c++------->
    // class Rectangle
    // {
    //     private:
    //     int length;
    //     int breadth;

    //     public:
    //     // *if we want to directly assign the value from calling function------>
    //     // Rectangle(int l,int b)
    //     // {
    //     //     length=l;
    //     //     breadth=b;
    //     // }
    //     void initialize(int l,int b)
    //     {
    //         length=l; // *as everything is inside the class we can access the variables directly without usig pointer or ->
    //         breadth=b;
    //         cout<<length<<" "<<breadth<<" "<<l<<" "<<b<<endl; // *cout function cannot be used outside a member function
    //     }

    //     int area()
    //     {
    //         return length*breadth;
    //     }
    //     void changelength(int l)
    //     {
    //         length=l;
    //     }
    // };

    // *Find area and perimeter of the rectangle using functions in c++ (User defined program)
    // class Rectangle
    // {
    //   private:
    //   int length, breadth;
      
    //   public:
    //   void initialize(int p, int q)
    //   {
    //     length=p;
    //     breadth=q;
    //   }
    //   int area()
    //   {
    //     return length*breadth;
    //   }
    //   int perimeter()
    //   {
    //     return 2*(length+breadth);
    //   }
    // };

    // *Alternative Way
    // struct Rectangle
    // {
    //     int length,breadth;
    // };
    
    // int area(struct Rectangle r)
    // {
    //     return r.length*r.breadth;
    // }
    // int perimeter(Rectangle r)
    // {
    //     return 2*(r.length+r.breadth);
    // }

    // *C++ class and constructor----->
    // class Triangle
    // {
    //     private:
    //     int s1,s2,s3,h;

    //     public:
    //     Triangle()
    //     {
    //         s1=0;
    //         s2=0;
    //         s3=0;
    //         h=0;
    //     }
    //     Triangle(int a,int b,int c,int d)
    //     {
    //         s1=a;
    //         s2=b;
    //         s3=c;
    //         h=d;
    //         cout<<"sides: "<<s1<<" "<<s2<<" "<<s3<<endl;
    //         cout<<"height: "<<h<<endl;
    //     }

    //     int area()
    //     {
    //         return 0.5*(h*s2);
    //     }

    //     int perimeter()
    //     {
    //     return s1+s2+s3;
    //     }
    //     ~Triangle()
    //     {
    //         cout<<"This is destructor";
    //     }
    // };

// *Template class------>
    // template<class t>
    // class Arithmetic
    // {
    //     private:
    //     t a=0;
    //     t b=0;

    //     public:
    //     Arithmetic(t a,t b);
    //     t add();
    //     t sub();
    // };

    // template<class t>
    // Arithmetic<t>::Arithmetic(t a,t b)
    // {
    //     this->a=a;
    //     this->b=b;
    // }
    // template<class t>
    // t Arithmetic<t>::add()
    // {
    //     return a+b;
    // }
    // template<class t>
    // t Arithmetic<t>::sub()
    // {
    //     return a-b;
    // }

// *Recursive function------>
    // void Recur(int a)
    // {
    //     if(a>0)
    //     {
    //         printf("%d\n",a);
    //         Recur(a-1);
    //     }
    // }

    // void Recurt(int b)
    // {
    //     if(b > 0)
    //     {
    //         Recurt(b - 1);
    //         printf("%d\n" , b);
    //     }
    // }

    // *types of recursion
    // *tail recursion
    // void fun(int n)
    // {
    //     if(n>0)
    //     {
    //         printf("%d\n", n); 
    //         fun(n-1);
    //     }
    // }

    // *head recursion
    // void fun(int n)
    // {
    //     if(n>0)
    //     {
    //         fun(n-1);
    //         printf("%d\n", n);
    //     }
    // }

// *Array---------->
    // *WAP to find greatest element in an array A[] = {3, 7, 2, 9, 5}
        // void grt(int p[])
        // {
        //     int max = 0;
        //     for(int i = 0; i<5; i++)
        //     {
        //         if(max < p[i])
        //         {
        //             max = p[i];
        //         }
        //     }

        //     printf("%d\n", max);
        // }

    // *WAP to peint the reverse of an array by simple traversal 
        // void revt(int q[])
        // {
        //     int *r;
        //     r = new int[5];
        //     for(int i = 0; i<5; i++)
        //     {
        //         r[i] = q[i];
        //     }

        //     printf("\n");

        //     for (int i = 4; i>=0; i--)
        //     {
        //         printf("%d\n", r[i]);
        //     }

        //     delete[] r;
        //     r = nullptr;
        // }

    // *WAP to print the reverse of an array by usig two pointer method
        // void revp(int s[])
        // {
        //     int i = 0;
        //     int j = 5-1;

        //     while(i < j)
        //     {
        //         int temp = s[i];
        //         s[i] = s[j];
        //         s[j] = temp;

        //         i++;
        //         j--;
        //     }
        // }

    // *WAP to print number of odd and even numbers in the array
        // void oe(int t[])
        // {
        //     int k=0, j=0;
        //     for(int i=0; i<5; i++)
        //     {
        //         if(t[i] % 2 == 0)
        //         {
        //             k++;
        //         }

        //         else
        //         {
        //             j++;
        //         }
        //     }

        //     printf("no. of odd numbers: %d\nno.of even numbers: %d", j,k);
        // }

    // *WAP to increase the space of an array
        
    // *WAP to find LCM and HCF 1.2, 2.4, 3.0
        // void HCF(float a, float b, float c)
        // {
        //     float hcf;
        //     for(float i=1; i<=a && i<=b && i<=c; i++)
        //     {
        //         if((int)a % (int)i == 0 && (int)b % (int)i == 0 && (int)c % (int)i == 0)
        //         {
        //             hcf = i;
        //         }
        //     }

        //     printf("HCF: %.2f\n", hcf);
        // }

        // void LCM(float a, float b, float c)
        // {
        //     float lcm;
        //     for(float i=1; i<=a*b*c; i++)
        //     {
        //         if((int)i % (int)a == 0 && (int)i % (int)b == 0 && (int)i % (int)c == 0)
        //         {
        //             lcm = i;
        //             break;
        //         }
        //     }

        //     printf("LCM: %.2f\n", lcm);
        // }

        // *Optimized code for the above problem
            // void sumopt(int A[], int N, int T)
            // {
            //     int DE=0, DO=0, flag=0;
            //     if(N>1)
            //     {
            //         for(int i=0; i<N; i++)
            //         {
            //             if(A[i] > T)
            //             {
            //                 printf("%d\n", -1);
            //                 flag = 1;
            //                 break;
            //             }

            //             if(A[i]%2 == 0)
            //             {
            //                 DE += T - A[i];
            //             }   

            //             else
            //             {
            //                 DO += T - A[i];
            //             }
            //         }

            //         if(flag != 1)
            //         {
            //             printf("Number of even opt.: %d\n", DE);
            //             printf("Number of odd opt.: %d\n", DO);
            //             printf("Total numeber of opt.: %d\n", DE + DO);
            //         }
            //     }    

            //     else
            //     {
            //         printf("Error: invalid input\n");
            //     }
            // }

    // *Operations on Array ADT-------->
        struct Array
        {
            int A[20]; // *For direct declaration.1 and user input
            // int *A;
            int size; 
            int length;
        };

        void Display(struct Array arr)
        {
            int i;
            printf("\nElements are\n");
            for(i = 0; i<arr.length; i++)
            {
                printf("%d ", arr.A[i]);
            }
        }

        // void Append(struct Array *arr, int x)
        // {
        //     if(arr->length < arr->size)
        //     {
        //         arr->A[arr->length++] = x;
        //     }
        // }

        // void Insert(struct Array *arr, int index, int x)
        // {
        //     int i;
        //     if(index >= 0 && index <= arr->length)
        //     {
        //         for(i = arr->length; i>index; i--)
        //         {
        //             arr->A[i] = arr->A[i-1];
        //         }
        //         arr->A[index] = x;
        //         arr->length++;
        //     }
        // }

        // int Delete(struct Array *arr, int index)
        // {
        //     int x = 0;
        //     int i;
        //     if(index >= 0 && index < arr -> length)
        //     {
        //         x = arr -> A[index];
        //         for(i = index; i < arr -> length-1; i++)
        //         {
        //             arr -> A[i] = arr -> A[i+1];
        //         }
        //         arr -> length--;
        //     }
        //     return x;
        // }

        // int BinarySearch(struct Array arr, int key)
        // {
        //     int l, mid, h;
        //     l = 0;
        //     h = arr.length-1;

        //     while (l <= h)
        //     {
        //         mid = (l+h)/2;
        //         if (key == arr.A[mid])
        //         {
        //             return mid; 
        //         }

        //         else if(key < arr.A[mid])
        //         {
        //             h = mid+1;
        //         }

        //         else
        //         {
        //             l = mid+1;
        //         }
        //     }

        //     return -1;
        // }

        int R_BinarySearch(int a[], int l,int h, int key)
        {
            int mid;

            if(l <= h)
            {
                mid = (l + h)/2;
                if (key == a[mid])
                {
                    return mid;
                }

                else if (key < a[mid])
                {
                    return R_BinarySearch(a, l, mid - 1, key);
                }
                
                else
                {
                    return R_BinarySearch(a, mid + 1, h, key);
                }
            }

            return -1;
        }

int main()
{

// *Structures----->

    // struct Rectangle r;
    // r.length=10;
    // r.breadth=20;
    // // *initialisation and declaration once:-struct Rectangle struct Rectangle r={10,20}
    // cout<<endl<<"size: "<<sizeof(r)<<endl<<"length: "<<r.length<<endl<<"breadth: "<<r.breadth<<endl<<"area: "<<r.length*r.breadth<<endl;

// *pointers----->

    // int a=10;
    // int *p;
    // p= &a;
    // cout<<endl<<a<<endl<<sizeof(p)<<endl<<*p<<endl<<p<<endl<<&p<<endl;

    // int b=20;
    // int *q;
    // q=&b;
    // q=(int*)malloc(5*sizeof(int)); //* for c
    // q=new int[5]; //*for c++
    // cout<<endl<<b<<endl<<sizeof(q)<<endl<<*q<<endl<<q<<endl<<&q<<endl;

    // *Arrays can also be accesed by using pointers but while initializing pointer(r) we dont need to use & directly use r=A
        // int A[5]={2,3,4,5,6};
        // int *r;
        // r=A;
        // cout<<endl;
        // for(int i=0; i<5; i++)
        // {
        //     cout<<r[i]<<endl;
        // }
    
    // *using dynamic memory allocation
    
    // int *m;
    // m=(int*)malloc(5*sizeof(int));
    // *alternate memory alloation p=new int[5]
    // for(int i=0;i<5;i++)
    // {
    //     cout<<endl<<("Enter the value: ");
    //     cin>>m[i];
    // }
    // cout<<endl;

    // for(int i=0;i<5;i++)
    // {
    //     cout<<m[i]<<endl;
    // }
    // cout<<endl<<sizeof(m)<<endl;
    // delete [] m; // *for c++
    // *free(p); for c
    // *p=Null;
    // cout<<endl<<sizeof(m)<<endl;
    // *size of pointer is independent of its datatype assigned its always 4 according to the compiler    
    
//  *reference ----->

    // int d=10;
    // int &f=d;
    // cout<<endl<<&d<<endl<<d<<endl<<&f<<endl<<f<<endl;

    // *Here when the reference f is assigned the value of e it will by default change the value of d as f is referencing to d. 
        // int e=30;
        // f=e;
        // cout<<endl<<e<<endl<<f<<endl<<d<<endl;

// *pointer to a structure(use the rectangle structure declared above while running)

    // struct Rectangle *s=&r;
    // cout<<endl<<s->length<<endl<<s->breadth<<endl;

    // struct Rectangle *t;
    // t=new Rectangle; // *c++
    // t=(struct Rectangle*)malloc(sizeof(struct Rectangle)); // *c
    // t->length=50;
    // t->breadth=60;
    // cout<<endl<<t->length<<endl<<t->breadth<<endl;

// *funcions --------->

    // *Types of parameter passing------->
    // 1. Pass by value
    // 2. pass by address
    // 3. pass by reference
   
    // *Styles of programming------->
    // 1. Monolithic
    // 2. Modular
    
    // int x,y,z;
    // x=5;
    // y=10;
    // z=add(x,y); // *Here x and y are actual parameter
    // cout<<endl<<"Sum is: "<<z<<endl;

// *parameter passing------>
    // *pass by value
    // swap(x,y);
    // cout<<endl<<x<<endl<<y<<endl;

    // *pass by addresses
    // swap(&x,&y); // *while using addresses it will also change the factual parameter values
    // cout<<endl<<x<<endl<<y<<endl;

    // *call by referense
    // swap(x,y); // *while using references it will also change the factual parameter values
    // cout<<endl<<x<<endl<<y<<endl;

// *array as parameter----->

    // int A[5]={2,4,5,6,7};
    // fun(A,5);

    // *how to use func to manipulate actual parameters------>
    // *Display the original size of *A and new size of after parameter passing done through function.
    // int *A, size=sizeof(A);
    // cout<<endl<<size;
    // A=fun(5, size);
    // cout<<endl<<size<<endl<<A<<endl;

    // *example------->
    // int A[]={2,3,4,5,6,7};
    // int n=6;
    // fun(A,n);
    // cout<<endl;
    // for(int x:A)
    // cout<<x<<endl;

    // *example1------>
    // int *ptr,sz=5;
    // ptr=fun(sz);
    // cout<<endl;
    // for(int i=0;i<sz;i++)
    // {
    //     cout<<ptr[i]<<endl;
    // }

// *structure as parameter------>
    
    // *call by value------>
    // cout<<endl<<"area is:"<<area(r)<<endl;

    // *call by address----->
    // cout<<endl<<r.length<<endl;
    // changelength(&r,20);
    // cout<<r.length<<endl;

    // *array as data in struct------>
    // *call by address------->
    // struct Test t={{1,2,3,4,5},5}; // *whenever pointer used always dynamically allocate memory to it  
    // fun(&t);
    // cout<<endl;
    // for(int x:t.A)
    // {
    //     cout<<x<<endl;
    // }

    // *Alternative way of writing---->
    // struct Test *t= new Test{{1,2,3,4,5},5}; // *whenever pointer used always dynamically allocate memory to it  
    // fun(t);
    // cout<<endl;
    // for(int x:t->A)
    // {
    //     cout<<x<<endl;
    // }

//  *structres and functions----->

    // struct Rectangle r;
    // initialize(&r,10,5);
    // cout<<"Area:- "<<area(r);
    // changelength(&r,20);

// *change c to c++------->

    // *if we want to directly assign value without any new function----->
    // Rectangle r(10,5);
    // cout<<"Area: "<<r.area();
    // r.changelength(20);
    // cout<<"Area: "<<r.area();

    // *To initialise using function---------->
    // Rectangle r; // *Remove the comments whe you use initialise function
    // r.initialize(30,20);
    // cout<<"Area: "<<r.area();
    // r.changelength(20);
    // cout<<"Area: "<<r.area();
    
    // *Find area and perimeter of the rectangle using functions in c++ (User defined program)
    // Rectangle r;
    // int a=0,b=0;
    // cout<<"Enter the Length: ";
    // cin>>a;
    // cout<<"Enter the breadth: ";
    // cin>>b;
    // r.initialize(a,b);
    // cout<<"area: "<<r.area()<<endl<<"perimeter: "<<r.perimeter()<<endl;

    // *Alternative Way
    // Rectangle r;
    // cout<<"Enter the length: ";
    // cin>>r.length;
    // cout<<"Enter the breadth: ";
    // cin>>r.breadth;
    // cout<<endl<<area(r)<<endl<<perimeter(r);

    // *Note:- you cannot initialise value directly in c++ need a calling func. but in c you can directly initialise the value through struct.

// *C++ class and constructor----->

    // Triangle t(10,20,30,15);
    // cout<<"area: "<<t.area()<<endl<<"area: "<<t.perimeter()<<endl;

// *Template class-------->

    // Arithmetic<float> ar(10.99,5.876); // *Here <> inside this our desired datatype should be provided.
    // cout<<endl<<ar.add()<<endl<<ar.sub()<<endl;

// *Recursive function--------->

    // int n=5 , p=5;
    // Recur(n);
    // printf("\n"); 
    // Recurt(p);
    // *types of recursion
    // *tail recursion
    // int x=3;
    // fun(x);

    // *head recursion
    // int x=3;
    // fun(x);

// *Array---------->

    // int a[5];
    // a[0] = 2;
    // a[1] = 3;
    // a[2] = 4;
    // a[3] = 5;
    // a[4] = 6;
    // printf("%d\n", a[3]);
    // printf("%d\n", 4[a]);
    // printf("%d\n", (a+2));

    // printf("\n");

    // int b[5] = {45, 56, 67, 34, 98};
    // for(int i=0; i<5; i++)
    // {
    //     printf("%d\n", b[i]);
    // }
    
    // printf("\n");

    // int c[] = {21, 33, 44};
    // printf("size of array c: %d", sizeof(c));

    // *Accessing value from heap--------->

        // int a[5] = {1,2,3,4,5};  
        // printf("size of array a : %d\n", sizeof(a));

        // int *p;
        // p = new int[5];  // *for c++
        // printf("size of pointer array p: %d", 5 * sizeof(int));

        // printf("\n");

        // for(int i = 0; i<5; i++)
        // {
        //     p[i] = a[i];
        // }
        
        // for(int i = 0; i<5; i++)
        // {
        //     printf("%d\n", p[i]);
        // }
        
        // p = (int*)malloc(5 * sizeof(int));   // *for c
        // delete[] p;  // *for c++
        // p = nullptr;

        // printf("size of pointer array p: %d\n", 5 * sizeof(int));
        
        // for(int i = 0; i<5; i++)
        // {
        //     printf("%d\n", p[i]);
        // }
        // free (p);  // *for c
    
    // *WAP to find greatest element in an array A[] = {3, 7, 2, 9, 5}
        
        // int a[] = {3, 7, 2, 9, 5};
        // grt(a);

    // *WAP to print the reverse of an array by simple traversal 
        
        // int b[] = {1,2,3,4,5};
        // revt(b);

    // *WAP to print the reverse of an array by usig two pointer method

        // int c[] = {1, 2, 3, 4, 5};
        // revp(c);

        // for(int i = 0; i < 5; i++)
        // {
        //     printf("%d\n", c[i]);
        // }

    // *WAP to print number of odd and even numbers in the array
        
        // int d[] = {1, 2, 3, 4, 5};
        // oe(d);

    // *WAP to increase the space of an array

        // int *n = new int[5];
        // int *o = new int[15];
        // printf("%d\n", sizeof(n));

        // for(int i=0; i<5; i++)
        // {
        //     o[i] = n[i];
        // }

        // delete[] n;
        // n = o;
        // o = nullptr;

        // printf("%d\n", sizeof(n));

// 2D Array------->

    // *WAP to initialise a 2d array and its element Dynamically------->

        // int **A;
        // A = new int*[3]; // *Allocates array of 3 row pointers in heap

        // // *Allocate column for 4 elements for each row(3) in Heap
        // A[0] = new int[4];
        // A[1] = new int[4];    
        // A[2] = new int[4];

        // // *Alloctaion of all elements to the array
        // for(int i=0; i<3; i++)
        // {
        //     for(int j=0; j<4; j++)
        //     {
        //         A[i][j] = i + j;
        //     }
        // }

        // // *Display of all elements
        // for(int i=0; i<3; i++)
        // {
        //     for(int j=0; j<4; j++)
        //     {
        //         printf("%d ", A[i][j]);
        //     }
        //     printf("\n");
        // }

        // // *Always free the memory after dynamically allocating it in 2D to prevent memeory leak or unused space issue.
        // for(int i=0; i<3; i++)
        // {
        //     {
        //         delete[] A[i];
        //     }
        // }
        // delete[] A;

        // printf("\n");

    // *WAP to find LCM and HCF 1.2, 2.4, 3.0

        // printf("Enter the numbers: ");
        // float a, b, c;
        // scanf("%f %f %f", &a, &b, &c);

        // HCF(a, b, c);
        // LCM(a, b, c);

    // *Wap to print the GP series of entered number and nth term of it.
        
        // int a, r, n;
        // printf("Enter A R N: ");
        // scanf("%d %d %d", &a, &r, &n);
        // printf("%d\n", a);

        // for(int i=1; i<=n-1; i++)
        // {
        //     a = a * r;
        //     printf("%d\n", a);
        // }

        // printf("nth term: %d", a);

    
    // *Wap to print the sum of no. of operations required to bring the current index to the target value by adding +1 to it. Divide the array into odd and even category, then check the total no. of operations required to bring all the ven no.s to target value and same with odd. Also find total no. of operations required for the whole array.
    // *For ex: let the array be A[2, 3, 5, 4, 1]; Target value: 7
    //         *Here we have even set[2, 4] and odd set[3, 5, 1]
    //         *To bring 2 to target value we have to add 1, 5 times and for 4, 3 so in even set we have 8 operations required
    //         *Now following the same pattern for odd set we would get total operation as 12.
    //         *So total operation needed for the array is 12 + 8 = 20.
    // *For ex: let the array be A[2, 3, 10, 4, 1]; Target value: 7
    //         *Here as we have 10 which is greater than the target value we wouldn't be proceeding further and return -1 as output.

        // int N, i = 0, T, E = 0, EC = 0, O = 0, OC = 0, Sum = 0, flag = 0;

        // printf("Enter the size of the array: ");
        // scanf("%d", &N);

        // if (N > 1)
        // {
        //     int A[N];

        //     printf("Enter the elements of the array\n");
        //     for (i = 0; i < N; i++)
        //     {
        //         scanf("%d", &A[i]);
        //     }

        //     printf("Enter the Target element: ");
        //     scanf("%d", &T);

        //     if (i == N)
        //     {
        //         for (i = 0; i < N; i++)
        //         {
        //             if (A[i] % 2 == 0)
        //             {
        //                 if (A[i] > T)
        //                 {
        //                     printf("%d\n", -1);
        //                     flag = 1;
        //                 }

        //                 if (flag != 1)
        //                 {
        //                     while (A[i] < T)
        //                     {
        //                         A[i] = A[i] + 1;
        //                         E++;
        //                     }

        //                     EC = E;
        //                 }
        //             }

        //             else
        //             {
        //                 if (A[i] > T)
        //                 {
        //                     printf("%d\n", -1);
        //                     flag = 1;
        //                 }

        //                 if (flag != 1)
        //                 {
        //                     while (A[i] < T)
        //                     {
        //                         A[i] = A[i] + 1;
        //                         O++;
        //                     }

        //                     OC = O;
        //                 }
        //             }

        //             Sum = EC + OC;
        //         }
        //     }

        //     else
        //     {
        //         printf("Error: invalid input\n");
        //     }

        //     if(flag != 1)
        //     {
        //         printf("Number of even opt.: %d\n", EC);
        //         printf("Number of odd opt.: %d\n", OC);
        //         printf("Total numeber of opt.: %d\n", Sum);
        //     }
        // }

        // else
        // {
        //     printf("Error: invalid input\n");
        // }

    // *Optimized code for the above problem

        // int N=5, T=7;
        // int A[N] = {2, 3, 5, 4, 1};
        // int B[N] = {2, 3, 10, 4, 1};

        // sumopt(A, N, T);
        // sumopt(B, N, T);

// *Operations on Array ADT-------->

    // *we can initialise value in two ways:

    // *Direct diclaration.1
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};

    // *Direct declaration.2
    // int A[20] = {2, 3, 4, 5, 6};
    // struct Array arr = {A, 10, 5};

    // *User input
    // struct Array arr;
    // int n,i;
    // printf("Enter size of array: ");
    // scanf("%d", &arr.size);
    // arr.A = (int *) malloc (arr.size * sizeof(int));
    // arr.length = 0;
    
    // printf("Enter number of elements to be entered: ");
    // scanf("%d", &n);

    // printf("Enter the elements: \n");
    // for(i=0; i<n; i++)
    // {
    //     scanf("%d", &arr.A[i]);
    // }

    // arr.length = n;

    // Display(arr);

    // char ch[50];

    // printf("Enter your choice [Append/Insert]: ");
    
    // fgets(ch, sizeof(ch), stdin);
    
    // // 2. Remove the trailing newline character added by fgets
    // ch[strcspn(ch, "\n")] = '\0';
    // if (strcmp(ch, "Append") == 0)
    // {
    //     Append(&arr, 10);
    //     Display(arr);
    // }

    // else if(strcmp(ch, "Insert") == 0)
    // {
    //     Insert(&arr, 2, 15);
    //     Display(arr);
    // }

    // else if(strcmp(ch, "Delete") == 0)
    // {
    //     int deletedValue = Delete(&arr, 1);
    //     printf("Deleted value: %d\n", deletedValue);
    //     Display(arr);
    // }

    // else
    // {
    //     printf("Invalid choice.\n");
    // }

    // WAP to find the key element in the array using Binary Search-------->

        Display(arr);

        // printf("\nThe index is: %d\n", BinarySearch(arr, 5));
        printf("\nThe index is: %d\n", R_BinarySearch(arr.A, 0, arr.length, 2));
    
    
    return 0; 
}

