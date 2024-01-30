// Pattern 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// *****
// *****
// *****
// *****
// *****
// //

// Pattern 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 11111
// 22222
// 33333
// 44444
// 55555
// //

// Pattern 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = i;
        while (j <= x)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 11111
// 2222
// 333
// 44
// 5
// //

// Pattern 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 12345
// 12345
// 12345
// 12345
// 12345
// //

// Pattern 5
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        // int value=x;
        while (j <= x)
        {
            cout << x - j + 1;
            // cout<<value;
            // value=value-1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

// //
// 54321
// 54321
// 54321
// 54321
// 54321
// //
// Pattern 6
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    int count = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// //
// Pattern 7
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// *
// **
// ***
// ****
// *****
// //

// Pattern 8
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 1
// 22
// 333
// 4444
// 55555
// //

// Pattern 9
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    int count = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= i)
        {
            cout << count << " ";
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15
// //
// Pattern 10
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int row = i;
        int j = 1;
        while (j <= i)
        {
            cout << row << " ";
            row = row + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// 5 6 7 8 9
// //

// Pattern 11
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        // int row=i;
        int j = 1;
        while (j <= i)
        {
            // cout<<row<<" ";
            // row=row-1;
            cout << (i - j + 1) << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// //

// Pattern 12
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            char ch = 'A' + i - 1;
            cout << ch;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// AAAAA
// BBBBB
// CCCCC
// DDDDD
// EEEEE
// //
// Pattern 13
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        char ch = 'A';
        while (j <= x)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// A B C D E
// //

// Pattern 14
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    char ch = 'A';
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A B C D E
// F G H I J
// K L M N O
// P Q R S T
// U V W X Y
// //

// Pattern 15
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= x)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I
// //
// Pattern 16
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        char ch = 'A' + j + i - 2;
        while (j <= i)
        {
            cout << ch << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A
// B B
// C C C
// D D D D
// E E E E E
// //

// Pattern 17
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number";
    cin >> x;
    int i = 1;
    char ch = 'A' + i - 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A
// B C
// D E F
// G H I J
// K L M N O
// //

// Pattern 18
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A
// B C
// C D E
// D E F G
// E F G H I
// //

// Pattern 19
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        char ch = 'A' + x - i;
        while (j <= i)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// E
// D E
// C D E
// B C D E
// A B C D E
// //
// Pattern 20
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        char ch = 'A' + i - j;
        while (j <= x)
        {
            cout << ch << " ";
            ch = ch + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// A B C D E
// B C D E F
// C D E F G
// D E F G H
// E F G H I
// //
// Pattern 21
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int space = x - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
//     *
//    **
//   ***
//  ****
// *****
// //
// Pattern 22
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= (x - i + 1))
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// *****
// ****
// ***
// **
// *
// //
// Pattern 23
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= (x - i + 1))
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// *****
//  ****
//   ***
//    **
// //

// Pattern 24
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= (x - i + 1))
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 11111
//  2222
//   333
//    44
//     5
//     //

// Pattern 25
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int space = x - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
//     1
//    22
//   333
//  4444
// 55555
// //

// Pattern 26
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        int row = i;
        while (j <= (x - i + 1))
        {
            cout << row;
            row = row + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
// 12345
//  2345
//   345
//    45
//     5
// //

// Pattern 27
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    int row = i;
    while (i <= x)
    {
        int space = x - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << row;
            row = row + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
// //
//     1
//    23
//   456
//  78910
// 1112131415
// //

// Pattern 28
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int space = x - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j = j + 1;
        }
        int row = i;
        int start = row - 1;
        while (start)
        {
            row = row - 1;
            cout << row;
            start = start - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

// //
//     1
//    121
//   12321
//  1234321
// 123454321
// //
// Pattern 29
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number:";
    cin >> x;
    int i = 1;
    while (i <= x)
    {
        int j = 1;
        while (j <= (x - i + 1))
        {
            cout << j;
            j = j + 1;
        }
        // For Stars
        int star1 = i - 1;
        while (star1)
        {
            cout << "*";
            star1 = star1 - 1;
        }
        int star2 = i - 1;
        while (star2)
        {
            cout << "*";
            star2 = star2 - 1;
        }
        // For numeric value after stars
        int value = x - i + 1;
        while (value)
        {
            cout << value;
            value = value - 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}

// //
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// //