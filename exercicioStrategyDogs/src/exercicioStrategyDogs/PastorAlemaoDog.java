package exercicioStrategyDogs;

public class PastorAlemaoDog extends Dogs {

	public PastorAlemaoDog() {
		
		comportamentoLatir = new LatirBravo();
		comportamentoPular = new PularMedio();
	}

	@Override
	void MostrarCachorro() {

		System.out.println("Eu sou um Pastor, n�o de Igreja, mas Alem�o, au au");
		
	}

}
