package MyCustom;
import java.util.ArrayList;
import java.util.Random;




public class MyCustomSet{
    ArrayList<Integer>liste;
    private Random rand = new Random();
    public MyCustomSet(){
        this.liste=new ArrayList<>();}
    
    public MyCustomSet(MyCustomSet customset){
    	this.liste=new ArrayList<Integer>();
    	for(int i=0;i<customset.size();i++) {
    		this.liste.add(customset.liste.get(i));
    	}
    }
    
    public void add(int x) {
        if(!this.liste.contains(x)) this.liste.add(x);
    }
    
    
    public Integer get(int index){  
    	if(index<0 || index>=this.liste.size())
    		return null;
    	return this.liste.get(index);
    }

    public int size() { return this.liste.size();}

    public boolean isEmpty() {return liste.isEmpty();}

    public void remove(int x){
        if(this.liste.contains(x))
        {int i= this.liste.indexOf(x);
          this.liste.remove(i);}
    }

    public boolean contains (int x)
        {return this.liste.contains(x);}

    public String toString() {
    	String s;
    	s="l'ensemble contient ";
    	s+=liste.size();
    	s+=" entier(s) :";
    	s+=liste.toString();
    	return s;}

    public void clear() {
        this.liste.clear();
    }

    public int random() {
        if(!this.liste.isEmpty()) {
        	int index = rand.nextInt(this.liste.size());
        	return this.liste.get(index);}
        return -1;
        
    }
    

    public boolean equals(Object e){
        MyCustomSet list1= (MyCustomSet) e;
        if(list1.liste.size()!=this.liste.size()) return false;
        for(int i=0; i<list1.liste.size();i++) {
            int x= this.liste.get(i);
            if(!list1.liste.contains(x)) return false;}
        return true;
    }
    
}

