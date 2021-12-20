#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int QA=20,QB=20,QC=20;
        int A,B,C;  // time required
        int X,Y,Z;  // Points given
        cin>>A>>B>>C;
        cin>>X>>Y>>Z;
        int time = QA*A+QB*B+QC*C;
        if(time==240)
            cout<<(QA*X+QB*Y+QC*Z);
        else if (QA*A+QB*B+QC*C>240)
        {
            int result = min(X,min(Y,Z));
            if (result == X)
                while (QA*A+QB*B+QC*C>240)
                    QA--;
            else if (result == Y)
                while (QA*A+QB*B+QC*C>240)
                    QB--;
            else if (result == Z)
                while (QA*A+QB*B+QC*C>240)
                    QC--;
        }
        else if(time<240)
        {
            int remain = 240-time;
            int lowest = min(X,min(Y,Z));
            int heighest = max(X,max(Y,Z));

            if(heighest == X && remain>=A)
                QA++;
            else if(heighest == Y && remain>=B)
                QB++;
            else if(heighest == Z && remain>=C)
                QC++;
            else if(heighest != X && lowest!=X && remain>=A)
                QA++;
            else if(heighest != Y && lowest!=Y && remain>=B)
                QB++;
            else if(heighest != Z && lowest!=Z && remain>=C)
                QC++;
            else if(lowest == X && remain>=A)
                QA++;
            else if(lowest == Y && remain>=B)
                QB++;
            else if(lowest == Z && remain>=C)
                QC++;
        }
        cout<<(QA*X+QB*Y+QC*Z);
    }
    return 0;
}