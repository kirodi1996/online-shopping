// A suffix array based program to searh a given pattern in a given text
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

// Structure to store information of a suffix
struct suffix
{
    int index;
    char *suff;
};

// A comparison function used by sort() to compare two suffixes
int cmp(struct suffix a, struct suffix b)
{
    return strcmp(a.suff, b.suff) < 0? 1 : 0;
}


int *buildSuffixArray(char *txt, int n)
{
   struct suffix suffixes[n];

   for (int i = 0; i < n; i++)
    {
        suffixes[i].index = i;
        suffixes[i].suff = (txt+i);
    }
    sort(suffixes, suffixes+n, cmp);

   int *suffixArr = new int[n];
    for (int i = 0; i < n; i++)
        suffixArr[i] = suffixes[i].index;

   return  suffixArr;
}

void printArr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void search(char *pat, char *txt, int *suffArr, int n)
{
    int m = strlen(pat); 
    
    int l = 0, r = n-1;  
    while (l <= r)
    {
       int mid = l + (r - l)/2;
        int res = strncmp(pat, txt+suffArr[mid], m);
        cout<<"res="<<res<<"suff[mid]="<<suffArr[mid]<<endl;
       if (res == 0)
        {
            cout << "Pattern found at index " << suffArr[mid];
            return;
        }

       if (res < 0) r = mid - 1;

       else l = mid + 1;
    }

   cout << "Pattern not found";
}

int main()
{
    char txt[] = "banana";  // text
    char pat[] = "nan";   // pattern to be searched in text
    int n = strlen(txt);
    int *suffArr = buildSuffixArray(txt, n);

    // search pat in txt using the built suffix array
    search(pat, txt, suffArr, n);

    return 0;
}
