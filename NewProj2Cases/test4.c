int m;
int n;
int k;

void foo(int *x, int *y){
	int a;
	int b;
	b = 5 * (*x);
	if (b > 20){
		*x = *y;
		if((*x) > 10){
			a = *x;
			m = 0;
			while(a > 0) {
				m = m + a * (*x);
				n = m - (*x);
				a = a - 1;
				if(m > 10000) break;
				k = m * (*x);
			}
		}
		else{
			m = (*x);
			n = 0;
			k = 0;
		}
	}
	else{
		b = (*x) + 10;
		*y = *x;
		m = b;
		n = m;
		k = n;
	}
}

void main(){
	int x;
	int y;
	x = 10;
	foo(&x, &y);
	printf("m = %d, n = %d, k = %d\n", m, n, k);
}