package figure;

public class Triangle extends Figure {

	public Triangle(int NbColMax, int x, int y, char c) {
		super((NbColMax/2)+1, NbColMax, x, y, c);
	}
	public void fill() {
		
		int taille=nbC/2;
        int nE=0;
        for(int i=taille;i>=0;i--) {
			for(int j=nE;j<nbC;j++)
			      this.forme.setPoint(i,j,cd);
			        nE++;
			        nbC--; 
			    }}
}	



/*public void fill() {
		
		int taille;
        int nE=0;
		if(nbC%2!=0) {
			taille=(nbC/2)+1;
			 for(int i=taille-1;i>=0;i--)
			    {
			        for(int j=nE;j<nbC;j++)
			        	this.forme.setPoint(i,j,cd);
			        nE++;
			        nbC--; 
			    }}
		if(nbC%2==0) {
			taille=nbC/2;
			for(int i=taille;i>=0;i--)
		    {
		        for(int j=nE;j<nbC;j++)
		        	this.forme.setPoint(i,j,cd);
		        nE++;
		        nbC--; 
		    }
			     
	                           }



		
		}		*/
		