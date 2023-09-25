package figure;

public abstract class Figure {
	int xo,yo;  //position de la figure dans le schema
	int taille; //taille de la figure
	int nbL,nbC;
	Dessin forme;
	char cd;//caractere 
	
	public Figure (int NbLigMax, int NbColMax, int x, int y, char c) {
		this.xo=x;
		this.yo=y;
		this.cd=c;
		this.nbL=NbLigMax;
		this.nbC=NbColMax;
		forme=new Dessin(nbL,nbC);
		this.fill();}

	
	public abstract void fill();
	
	public String toString() {
		return forme.toString();}
}
	
