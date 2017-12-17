int g1;
int g2;
int g3;

void foo1(int *p){
	int x;
	printf("Type your input:\n");
	scanf("%d", &x);
	*p = x;
	if(x < 0){
		g1 = x;
		g2 = -x;
	}
	else g2 = x;
}

void foo2(int *p){
	int x;
	x = *p;
	if(x < 0){
		g1 = x;
		g3 = -x;
	}
	else g3 = x;
}

void main(){
	int a;
	int b;
	foo1(&a);
	foo2(&a);
	printf("g1 = %d, g2 = %d, g3 = %d\n", g1, g2, g3);
	printf("a = %d, b = %d\n", a, b);
	return;
}