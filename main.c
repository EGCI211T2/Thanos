#include monster.h

int main() {

  Thanos T;
  int n;
  cout<<"How many monsters?";
  cin>>n;

  monster *m=new monster[n]; //make sure they have hp
 
  /* Add some story*/

  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);
    ++T;
  ++T;
  T.snap_finger(m,n);

  int i;
  for(i=0;i<n;i++)
      m[i].print();
  

  delete [] m;

}