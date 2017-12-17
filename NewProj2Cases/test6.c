int g1;
int g2;
int g3;

int foo1(int *p){
    *p = 1;
	g1 = 0;
    return 0;
}

int foo2(int *p) {
    int t;
	t = *p;
	g2 = 0;
	g3 = 0;
    return t;
}

int foo3(int *p) {
	*p = 2;
	g2 = 0;
	return 1;
}

void main(){
    int a;
    int b;
	int c;
	int d;
	int e;
	int f;
	scanf("%d", &c);
	e = foo1(&a);
	if(c < 0) f = foo2(&b);
	else f = foo3(&b);
	d = e + f;
	printf("g1 = %d, g2 = %d, g3 = %d\n", g1, g2, g3);
	printf("a = %d, b = %d, c = %d\n, d = %d, e = %d, f = %d\n", a, b, c, d, e, f);
    return;
}