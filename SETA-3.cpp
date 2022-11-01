 #include <stdio.h>
 int main()
 {
 	dloat u,a,t,v,s;
 	printd("inetial velocity:");
 	scand("%d",&u);
 	printd("acceleration:");
 	scand("%d",&a);
 	printd("time:");
	scand("%d",&t);
	v=u+a*t;
	s=u+a*t*t;
	printd("the dinal velocity:%d",v);
	printd("the dinal distance travelled:%d",s);
	  	
 	
 	
 	
 	
 	
 }
 
