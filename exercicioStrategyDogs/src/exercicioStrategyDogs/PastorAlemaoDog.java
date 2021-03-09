package exercicioStrategyDogs;

public class PastorAlemaoDog extends Dogs {

	public PastorAlemaoDog() {
		
		comportamentoLatir = new LatirBravo();
		comportamentoPular = new PularMedio();
	}

	@Override
	void MostrarCachorro() {

		System.out.println("Eu sou um Pastor, não de Igreja, mas Alemão, au au");
		
	}

}
