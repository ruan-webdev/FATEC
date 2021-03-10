package uri1154;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class Main {

	public static void main(String[] args) throws IOException {
		Scanner ler=new Scanner(System.in);
		DecimalFormat df = new DecimalFormat("0.00");
		int qt = 0;
		int cont = 0;
		double somatorio = 0;
		double media = 0;
		
		while(qt>=0) {
			qt = ler.nextInt();
			if(qt>=0) {
			cont++;
			somatorio+=qt;
			}
		}
		media = somatorio/cont;
		System.out.println(String.format(df.format(media)));
	}

}
