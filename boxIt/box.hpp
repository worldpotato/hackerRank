#ifndef BOX_H
#define BOX_H

#include<bits/stdc++.h>

class Box{
public:
	int l;
	int b;
	int h;

	Box();
	Box(int, int, int);
	Box(Box&);

	long long CalculateVolume();

	bool operator<(Box&);
	friend std::ostream& operator<<(std::ostream&, const Box&);
};

#endif
