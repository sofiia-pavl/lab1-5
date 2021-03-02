#include "Vector3D.h"
#include <iostream>

using namespace std;

int main()
{
	Vector3D q;
	q.Read();
	cout << "edding vector:" << endl;
	q.addV();
	q.Display();

	Vector3D f;
	f.Read();
	cout << "multiplay to vector:" << endl;
	f.multiplayV();

	return 0;
}
