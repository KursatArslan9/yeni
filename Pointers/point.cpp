#include <iostream>
using namespace std;

int main()
{
    string yiyecek = "etli ekmek";
    string *ptr = &yiyecek; // *ptr, yiyecek değişkeninin bellek adresini tutuyor. * tanımlamada kullanıldığında pointer değişkeni
    *ptr = "pizza";         // pointer değeri değiştirme

    cout << ptr << endl;  // değişkenin bellek adresi. Ampersant ile (&). İşaretçi; bellek adresini değeri olarak depolayan değişkendir.
    cout << *ptr << endl; // "Dereference" yaparak pointerdan değişkeni aldık. * tanımlamada kullanılmazsa dereference öpertörü olur.

    /* işaretçi (pointers) değişkenini belirtmenin 3 yolu vardır.

    string* myString;  genelde tercih edilen
    string *myString;
    string * myString; */
}