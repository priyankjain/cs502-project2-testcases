int a;
int b;
int c;

void foo1(int x, int *y){
	int h;
	printf("Pleae type your input:\n");
	scanf("%d", &h);
    *y = h;	
	if(x > 0) {
		a = x + (*y);
		b = a + 1;
	}
	else {
		a = x * x;
		c = a + x + (*y);
	}
	return;
}
void foo2(int y, int *z){
	switch(y){
		case 1:
		b = a + y + (*z);
		c = a * b;
		break;
		case 2:
		c = a * y;
		a = c + a;
		break;
		default:
		c = a;
	}
	return;
}

void main(){
	int x = 5;
	int y = 7;
	int m;
	int n;
	int d;
	if (x < y) d = y - x;
	else d = x - y;
	foo1(d, &m);
	foo2(d, &n);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("m = %d, n = %d\n", m, n);
	return;
}

