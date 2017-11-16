#include <stdio.h>
#include <stdlib.h>

struct hora {
	
	int min;
	int seg;
	int dec;
	
} hora;

struct hora variacao_tempo(struct hora t1, struct hora t2)
{
	struct hora deltat;
	
	deltat.dec = 0;
	deltat.seg = 0;
	deltat.min = 0;
	
	if (t1.dec>t2.dec) {
		deltat.dec += 100-t1.dec+t2.dec;
		deltat.seg -= 1;
	} else deltat.dec += t2.dec-t1.dec;
	
	if (t1.seg>t2.seg) {
		deltat.seg += 60-t1.seg+t2.seg;
		deltat.min -= 1;
	} else deltat.seg += t2.seg-t1.seg;
	
	deltat.min += t2.min-t1.min;
	
	return deltat;
}


int main() {
	
	struct hora t1;
	struct hora t2;
	struct hora deltat;
	
	scanf("%dm %ds %d", &(t2.min), &(t2.seg), &(t2.dec));
	scanf("%dm %ds %d", &(t1.min), &(t1.seg), &(t1.dec));
	
	deltat = variacao_tempo(t1, t2);
	
	printf("%dm %ds %d\n", deltat.min, deltat.seg, deltat.dec);
	
	return 0;
}