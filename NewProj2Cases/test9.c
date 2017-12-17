int a;
int b;
int c;
int d;
int e;

void getinput(int *x){
	printf("Pleae type your input:\n");
	scanf("%d", x);
}

int foo3(int *x, int *y){
	int res;
	if((*x) < (*y)){
		res = foo3(y, x);
		e = res * a;
		c = e;
	}
	else if((*y) == 0){
        res = *x;
		d = res + b;
	}
	else{
		*x = (*x) - (*x) / (*y) * (*y);
		res = foo3(y, x);
		c = res * res;
		e = d;
	}
	return res;
}

void foo2(int x){
	if((x - x / 5 * 5) == 0){
		c = x / 5;
		d = c;
	}
	else{
		b = (a + b) / 2;
		d = b * b;
		e = d;
	}
}

int foo1(int x, int y){
	int res;
	if(x > 0){
		a = y * y;
		x = x - 1;
		y = y + 5;
		res = foo1(x, y);
		e = y;
		if(a > 50){
			b = a - 50;
			c = b * res;
		}
		else c = a + res;
	}
	else if(x < 0){
		x = x + 1;
		y = y + 5;
		res = foo1(x, y);
		a = res + y;
		b = a * res;
		c = res * res;
		e = foo3(&x, &y);
		foo2(x);
	}
	else{
		res = 1;
		a = y;
		b = a + res;
		foo3(&x, &y);
	}
	return res;
}

void main(){
	int x;
	int y;
	int z;
	getinput(&x);
	getinput(&y);
	z = foo1(x, y);
	printf("Recusive result is: %d\n", z);
	printf("a = %d, b = %d, c = %d, d = %d, e = %d\n", a, b, c, d, e);
}