package exercicioStrategyDogs;

public class ChouChouDog extends Dogs {
	
	public ChouChouDog() {
		comportamentoLatir = new LatirBravo();
		comportamentoPular = new PularBaixo();

	}	
			

	@Override
	void MostrarCachorro() {

		System.out.println("Sou um ChouChou muito bravo");
	}

}
