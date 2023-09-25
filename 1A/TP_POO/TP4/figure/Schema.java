package figure;

import java.util.ArrayList;

public class Schema{
	ArrayList<Figure> figures;
	Dessin schema;
	public Schema (int NbLigMax, int NbColMax) {
	       schema=new Dessin(NbLigMax, NbColMax);
	       figures=new ArrayList<Figure>();
	}
    
	public String toString() {
	        return schema.toString();
	}
	
	public void ajout (Figure f) {
      		figures.add(f);
      		int x=f.xo;
      		int y=f.yo;
      		 for(int i=0;i<f.forme.nbLigne;i++) {
      			for(int j=0;j<f.forme.nbCol;j++) {
      			    if(j>=0 && i>=0 && j<this.schema.nbLigne && i<this.schema.nbCol)
      			    	this.schema.setPoint(i+x, j+y, schema.getPoint(i, j));
      				//schema.mat[x][y]=f.forme.mat[i][j];
      				//y++;
      			}
      			//x++;y=f.yo;	
      		} 		
	}
}            