int a;
int b;
int c;
int d;
int e;

int getmyabs(int a){
	int x;
	if(a > 0){
		b = a;
		return a;
	}
	else{
		b = -a;
		return x - a;
	}
}

int getnumber(int b){
	if(b != 0){
		c = b + d;
		d = e + c;
		return getmyabs(b);
	}
	else{
		c = b + d;
		e = d + c;
		return 0;
	}
}

int main(){
  int i,j,k,x;
  int a;
  a = getnumber(x);
  switch(a){
  case 0: 
    i=a;
	j=k;
	k=a;
	break;
  case 1:
    i = a + 5;
	j = i + a;
    k = a;
    break;
  case 2:
    i = a;
    j = a;
	k = a;
    break;
  default:
    i = a;
	j = a;
	k = a;
    break;
  };

  printf("%d %d %d\n", i,j,k);
  printf("%d %d %d %d\n", b, c, d, e);
  return 1;
}
