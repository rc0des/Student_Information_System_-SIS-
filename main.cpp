#include <iostream>
#include <math.h>

using namespace std;

const int stu = 5 ;
const int sub = 2 ;
typedef struct ranking
{
    string name ;
    float result ;
};
int main()
{
 string a[stu] ;
 string b[sub] ;
 float c[sub][stu]  ;
 ranking d[stu] ;
 int i,j,k,o ;
 float s,y ;
 string z ;
 cout << "please enter subject names" << endl ;
 for (i=0;i<sub;i++)
 {
     cin >> b[i] ;
 }
 cout << "please enter student names" << endl ;
 for (i=0;i<stu;i++)
 {
     cin >> a[i] ;
 }
 for (i=0;i<sub;i++)
 {
     for (j=0;j<stu;j++)
     {
         do
         {
            cout << "please enter the mark of the student : " << a[j] << "  in the subject :  " << b[i] << endl ;
            cin >> c[i][j] ;
         }while (c[i][j]>20 or c[i][j]<0) ;
     }
 }
     k=0 ;
     cout << endl ;
         cout << "the avrege of the subjects  : " << endl ;
     do
     {
        s=0 ;
         for (j=0;j<stu;j++)
         {
             s=s+c[k][j] ;
         }
         s=s/stu ;
                  cout << "the avrege of the subject :  " << b[k] << "  is : " << s << endl ;
         k=k+1 ;
     }while (k<sub) ;
    k=0 ;
    cout << endl ;
    cout << "the avrege of the students : " << endl ;
     do
     {
        s=0 ;
         for (i=0;i<sub;i++)
         {
             s=s+c[i][k] ;
         }
         s=s/sub ;
         d[k].result = s ;
         d[k].name = a[k] ;
                  cout << "the avrege of the student :  " << a[k] << "  is : " << s << endl ;
         k=k+1 ;
     }while (k<stu) ;
     for (i=0;i<stu;i++)
     {
         for (j=0;j<stu-1;j++)
         {
             if (d[j].result<d[j+1].result)
             {
                 z=d[j].name ;
                 y=d[j].result ;
                 d[j].name = d[j+1].name ;
                 d[j].result = d[j+1].result ;
                 d[j+1].name = z ;
                 d[j+1].result = y ;
             }
         }
     }
     o=1 ;
     cout << "student ranking :  " << endl ;
     for (i=0;i<stu;i++)
     {
         cout << o <<". " <<  d[i].name << "  with a score :  " << d[i].result << endl ;
         o=o+1 ;
     }

}
