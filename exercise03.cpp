
/*#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >> Height of Box 1;
    cout << "Enter Box 1 Width : ";
    cin >> Width of Box 1;
    cout << "Enter Box 1 Length : ";
    cin >> Length of Box 1;
    
    cout << "Enter Box 2 Height : ";
    cin >> Height of Box 2;
    cout << "Enter Box 2 Width : ";
    cin >> Width of Box 2;
    cout << "Enter Box 2 Length : ";
    cin >> Length of Box 2;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( , , )
             + volume( , , );
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}
*/
// Implement the functions here
#include <iostream>
using namespace std;

int volume(int height, int width, int length);

struct box
{
	int w , h , l;
}box1,box2;

int main() {
	
 int box1Height, box1Width, box1Length;
 int box2Height, box2Width, box2Length;
 int totalVolume, totalSurface;

 cout << "Enter Box 1 Height : ";
 cin >> box1.h;
 cout << "Enter Box 1 Width : ";
 cin >> box1.w;
 cout << "Enter Box 1 Length : ";
 cin >> box1.l;

 cout << "Enter Box 2 Height : ";
 cin >> box2.h;
 cout << "Enter Box 2 Width : ";
 cin >> box2.w;
 cout << "Enter Box 2 Length : ";
 cin >> box2.l;

 totalVolume = volume(box1.h, box1.w, box1.l)
 + volume(box2.h, box2.w, box2.l);

 cout << "Volume of Box is " << totalVolume << endl;

 return 0;
}
int volume(int height, int width, int length){
	return height * width * length;
}