package exercicioStrategyDogs;

public class PincherDog extends Dogs {

	public PincherDog() {
		comportamentoLatir = new LatirBravo();
		comportamentoPular = new PularAlto();
	}
	
	@Override
	public void MostrarCachorro() {
		System.out.println("Eu sou um Pincher au au");
		
	}
		
}
