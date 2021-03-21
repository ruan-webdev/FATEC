public class Pessoa {
	
		private String Nome;
		private int Idade;
		private float Salario;

public Pessoa(String Nome, int Idade, float Salario) {
	this.Nome = Nome;
	this.Idade = Idade;
	this.Salario = Salario;
	
}

public void Mostrar() {
	System.out.println("Nome: "+ Nome);
	System.out.println("Idade: "+ Idade);
	System.out.println("Salario R$ "+ Salario);
	incrementarSalario(Salario);
}



public void incrementarSalario(float Salario) {
	if(Salario<2000) {
		this.Salario+=(Salario*30)/100;
	}else if(Salario>=2000) {
		this.Salario+=(Salario*30)/100;
	}
	System.out.println("Salario com aumento R$: "+this.Salario);	
}

	
public static void main(String[] args) {
			Pessoa pessoa = new Pessoa("Giovanna Nucci", 21, 1500);
			pessoa.Mostrar();
		
			System.out.println(" ");
			Pessoa pessoa2 = new Pessoa("Ruan Campos", 21, 1800);
			pessoa2.Mostrar();
		
			System.out.println(" ");
			Pessoa pessoa3 = new Pessoa("Tallita Lopes", 20, 3200);
			pessoa3.Mostrar();
					
		}
}
