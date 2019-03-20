int main()
{
   int a[100],d,i,j,k,n,small,temp;
   scanf("%d",&n);
   for(i=0;i<n;i++){
   scanf("%d",&a[i]);
   }
       for(j=0;j<n;j++){
       for(i=j+1;i<n;i++){
           if(a[j]>a[i]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           }
       }
       }
   for(i=0;i<n;i++){
       printf("%d ",a[i]);
   }
return 0;
}
