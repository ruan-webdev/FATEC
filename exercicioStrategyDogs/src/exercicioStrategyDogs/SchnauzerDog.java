package exercicioStrategyDogs;

public class SchnauzerDog extends Dogs {

	public SchnauzerDog() {
		comportamentoLatir = new LatirBrincadeira();
		comportamentoPular = new PularMedio();
	}
	
	@Override
	void MostrarCachorro() {
		System.out.println("eu sou um c�o alem�o, sou um Schnauzer au au");
		
	}
		
}
