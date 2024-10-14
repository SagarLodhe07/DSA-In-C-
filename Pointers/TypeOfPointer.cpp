#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    /**
     * 01 Wild Pointer
     * ==============================================
     * wild pointer is type of pointer where the user declare the pointer but not initialse it . this will point random address
     * Syntax => data_type *pointer_name;
     */
    // int *ptr;
    // cout << ptr << " " << *ptr;

    /**  02 Null Pointer
     * ==============================================
     * 
     * Syntax => data_type *pointer_name = null;
     */
    // int *null_Pointer = NULL;
    // int *p1 = 0;
    // int *p2 = '\0';
    // cout<<null_Pointer<<" "<<*null_Pointer<<endl;
    // cout<<p1<<" "<<*p1<<endl;
    // cout<<p2<<" "<<*p2<<endl;

    /**  03 Danling Pointer
     * ==============================================
     * 
     * 
     */
    /**  03 Void Pointer
     * ==============================================
     * 
     * 
     */


    float f = 2.5;
    int x=10;

    void *ptr = &f;
    ptr = &x;

    int *int_ptr = (int *)ptr;

    cout<<int_ptr<<" "<<*int_ptr;
    return 0;
}
