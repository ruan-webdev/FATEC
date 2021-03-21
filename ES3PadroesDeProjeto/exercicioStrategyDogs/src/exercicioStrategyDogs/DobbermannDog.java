package exercicioStrategyDogs;

public class DobbermannDog extends Dogs {
	
	public DobbermannDog() {
		comportamentoLatir = new LatirAtencao();
		comportamentoPular = new PularBaixo();
	}
	
	@Override
	void MostrarCachorro() {

		System.out.println("Sou um Dobbermann au au");
		
	}
			
}
