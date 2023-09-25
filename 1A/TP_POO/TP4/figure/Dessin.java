package figure;

public class Dessin {
	int nbLigne;
	int nbCol;
	char[][] mat;
	
	
	//constructeur
	public Dessin(int NbLigMax, int NbColMax) {
		nbLigne=NbLigMax;
		nbCol=NbColMax;
		mat=new char [nbLigne][nbCol];
		for(int i=0;i<nbLigne;i++) {
		    for(int j=0;j<nbCol;j++) {
			    mat[i][j]='.';
			    }
		    }    
	}
	
	//methodes
	
	public void setPoint(int nl, int nc, char c)throws IllegalArgumentException{
		if(!((nl>=nbLigne )||((nl)<0)||(nc>=nbCol)||((nc)<0)))
			this.mat[nl][nc]=c; 
	}
	
	
	public char getPoint(int nl, int nc) throws IllegalArgumentException{
		if(!((nl>=nbLigne )||((nl)<0)||(nc>=nbCol)||((nc)<0))) return this.mat[nl][nc];
		else 
			throw new IllegalArgumentException() ;
		}
    
	public String toString(){
		String res = "";
		for(int i=0;i<nbLigne;i++){
			for(int j=0;j<nbCol;j++) {
                 res=res+this.mat[i][j];}
			  res=res+ "\n";
			  }
        return res;
	}
	
}
