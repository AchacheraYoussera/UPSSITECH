package MyCustom;
import java.util.Collections;



public class MyCustomSortedSet extends MyCustomSet {
	
	public MyCustomSortedSet() {
		super();
	}
	public MyCustomSortedSet(MyCustomSortedSet customSS) {
	     super(customSS);
	}
	
	 public void add(int x) {
	        if(!this.liste.contains(x)) {
	        			this.liste.add(x);}
	        Collections.sort(liste);
	        	}
	        
	    
	 
	 public MyCustomSortedSet union(MyCustomSortedSet listeU) {
		 MyCustomSortedSet listeU1= new MyCustomSortedSet(listeU);
		 for(Integer i: this.liste) {
               listeU1.add(i);}
		return listeU1;
	 }
	 
	 public MyCustomSortedSet intersection(MyCustomSortedSet listeU) {
		 MyCustomSortedSet listeU1= new MyCustomSortedSet();
		 for(Integer i : this.liste) {
				 if(listeU.contains(i)){
					 listeU1.add(i);}
			 } 	 
		return listeU1;
	 }
	 
	 public MyCustomSortedSet difference(MyCustomSortedSet listeU) {
		 MyCustomSortedSet listeU1= new MyCustomSortedSet();
		 for(Integer i : this.liste) {
			 if(!listeU.contains(i)){
				 listeU1.add(i);}
		      } 	 
	     return listeU1;}
		 
	 
	 public boolean subset (MyCustomSortedSet listeU) {
		 int s=listeU.size();
		 int j=0;
		 for(int i=0;i<liste.size();i++) {
			 if(listeU.contains(liste.get(i)))
					 j++;
		 }
		return j==s;
	 }
	 
	 public String toString() {
		 String s;
	    	s="l'ensemble contient ";
	    	s+=liste.size();
	    	s+=" entier(s) :";
	    	s+=liste.toString();
	    	return s;}
	 
	  public Integer nearest(Integer valeur) {
			    Integer vr = 0;
			    Integer min=100;
			    Integer Diff;
			    int b = this.liste.size();
			    for(int i=0;i<=b/2;i++) {
			    	Diff= this.liste.get(i)-valeur;
			    	if(Diff<0) Diff=Diff*(-1);
			    	if(min>=Diff) {
			    		min=Diff;
			    		System.out.printf("min1="+min);
			    	    vr=this.liste.get(i);
			    	    System.out.printf("\n vr1="+vr);
			    		}}
			    for(int i=b-1;i>b/2;i--) {
			    	Diff= this.liste.get(i)-valeur;
			    	if(Diff<0) Diff=Diff*(-1);
			    	if(min>=Diff) {
			    		min=Diff;
			    		System.out.printf("\n min2="+min);
			    	    vr=this.liste.get(i);
			    	    System.out.printf("\n vr2="+vr);}}
				return vr;
	  }
		 
		 
		
	  
}
		     
		 

	 

