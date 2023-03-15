int search(int D[],int n,int sayi){
	
	int i=0;  // 1  1  1
	
	while (i<n){  //  1   (n+1)/2   n
		
		
		if (D[i]==sayi) break;  // 2    ((n+1)/2)+1   n+1
		
		i++;  // 0    (n-1)/2   n-1

}
        if (i<n) return i; // 1   1   1
        
        
        else return -1;	// 1  1   1		
		
	
}

/*

En iyi: 1+1+2+0+1+1=6

Ortalama: 1+(n+1)/2+((n+1)/2)+1+(n-1)/2+1+1=(3n+9)/2

En kötü: 1+n+n+1+n-1+1+1=3n+3



*/
