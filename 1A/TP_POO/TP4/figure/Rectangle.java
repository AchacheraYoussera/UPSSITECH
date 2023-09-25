package figure;

public class Rectangle extends Figure {

	public Rectangle(int NbLigMax, int NbColMax, int x, int y, char c) {
		super(NbLigMax, NbColMax, x, y, c);
	}
	public void fill() {
		
		for(int i=0;i<nbL;i++) {
			for(int j=0;j<nbC;j++) {
				this.forme.setPoint(i,j,cd);
			}
		}
	}
	

}
