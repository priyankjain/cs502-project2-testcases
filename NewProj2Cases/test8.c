int a;
int b;
int c;

int foo(int x, int sum){
	if(x > 0){
		a = x;
		sum = sum + a;
		x = x - 1;
		return foo(x, sum);
	}
	b = 5;
	c = 10;
	sum = sum + b + c;
	return sum;
}

void main(){
	int sum;
	sum = foo(10, 0);
	printf("a = %d, b = %d, c = %d\n", a, b, c);
	printf("sum = %d\n", sum);
}