#include <iostream>


#define contains(x,y) (((x>=0)&&(x<y))?(1):(0))
#define gt(m,i,j) *(m[i][j])
#define gs(m,s) (sizeof(*m) / s)

using namespace std;
int main(int argc, char const *argv[]) {
    int m[3][3]={1,2,3,4,5,6,7,8,9};
    if (contains(7,10)==1){
        cout << "true" << '\n';
    }
    else{
        cout << "false" << '\n';
    }

    cout << gt(&m,1,2) << '\n';
    cout << gs(&m,sizeof (m[0][0])) << '\n';
    return 0;
}
