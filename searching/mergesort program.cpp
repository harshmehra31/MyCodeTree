//It is correctly implementable

void merge(int a[],int l,int m,int r){
	int i,j,k,n1,n2;

	n1=m-l+1;
	n2=r-(m+1)+1;
	int b[n1],c[n2];

	for(i=0;i<n1;i++){
		b[i]=a[i+l];
	}

	for(i=0;i<n2;i++){
		c[i]=a[i+m+1];
	}
	
	i=0;
	j=0;
	k=l;

	while(i<n1 && j<n2){
		if(b[i]<=c[j]){
			a[k++]=b[i++];
		}
		else{
            a[k++]=c[j++];
		}
	}
	while(i<n1){
		a[k++]=b[i++];
	}
	while(j<n2){
		a[k++]=c[j++];
	}
};

void mergesort(int a[],int l,int r){
	if(l<r)
	{int mid=l+(r-l)/2;
	mergesort(a,l,mid);
	mergesort(a,mid+1,r);
	merge(a,l,mid,r);
	}
}
