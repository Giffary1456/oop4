using system;

namespace LatihanPolymorphism2
{
	public class ConvertToJson	;	IConvertObject
	{
		public void Convert(WindowsPrinter)
		{
			string Json = JsonConvert.serialzeObject(printer);
			
			Console.Writeline("Hasil konversi ke json\n");
			Console.Writeline(json);
		}
	}
}




public class PrinterWindows;
{
	public string Name {get;set;}
	
	public void WindowsPrinter()
	{
		Console.Writeline("Epson");
		Console.Writeline("Canon");
		Console.Writeline("LaserJet");
	}
}

public class Epson : PrinterWindows
{
	public override void printer()
	{
		Console.Writeline("printer : 1. Epson");
	}
}

public class Canon : PrinterWindows
{
	public override void printer()
	{
		Console.Writeline("printer : 2. Canon");
	}
}

public class LaserJet : PrinterWindows
{
	public override void printer()
	{
		Console.Writeline("printer : 3. LaserJet");
	}
}

public interface  IConvertObject
{
	// metode abstract
	void convert(PrinterWindows);
}

public class PrinterWindows
{
	public string Epson { get; set }
    public string Canon { get; set }
	public string LaserJet { get; set }
}

static void Main(string[] args)
{
	PrinterWindows printer;
	
	Console.Writeline("Pilih Printer: ");
	Console.Writeline("1. Epson");
	Console.Writeline("2. Canon");
	Console.Writeline("3. LaserJet");
	
	Console.Writeline("nomor printer [1..3]: ");
	int nomorPrinter = convert.ToInt32(Console.ReadLine());
	
	if (nomorPrinter == 1)
		printer = new Epson();
	else if (nomorPrinter == 2)
		printer = new Canon();
	else 
		printer = new LaserJet();
	
	printer.Show();
	printer.Print();
	
	console.ReadKey();
}
	