package hassen.microftp;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintStream;
import java.util.Iterator;
import java.util.List;

public class IHM {

	private BufferedReader input;
	private PrintStream output;
	
	public IHM(InputStream in, PrintStream output) {
		super();
		this.input = new BufferedReader (new InputStreamReader(in));
		this.output = output;
	}

	private void displayMenu () {
		output.println("[ 0 ] QUIT ");
		output.println("[ 1 ] DIR ");
		output.println("[ 2 ] INFO ");
		output.println("[ 3 ] GET ");
		output.println();
		output.print("Choice : ");
	}

	private void displayQuestion () {
		output.print("Filename : ");
	}
	
	private void displayError () {
		output.println("Error retry");
	}
	
	private int readID () {
		try {
			String text = input.readLine();
			int item = Integer.parseInt(text);
			return item;
		} catch (Exception e) {
			return 0;
		} catch (Error e) {
			return 0;
		}
	}

	private String readFilename () {
		try {
			String text = input.readLine();
			return text;
		} catch (IOException e) {
			return "";
		}
	}

	public Command getCommand () {
		int id = -1;
		String filename = null;
		while (id == -1) {
			displayMenu ();
			id = readID ();
			switch (id) {
			case Command.QUIT	: break;
			case Command.DIR	: break;
			case Command.INFO	: displayQuestion (); filename = readFilename(); break;
			case Command.GET	: displayQuestion (); filename = readFilename(); break;
			default: displayError (); id = 0; break;
			}
		}
		return new Command (id, filename);
	}

	public void displayList(List<String> dir) {
		output.println("Directory content :");
		output.println();
		if (dir != null) {
			Iterator<String> it = dir.iterator();
			int i=0;
			if (it.hasNext()) {
				while (it.hasNext()) {
					++i;
					String filename = it.next();
					output.print(i);
					output.print(" : ");
					output.print(filename);
					output.println();
				}
			} else {
				output.println("empty");
			}
		} else {
			output.println("error");
		}
	}
	
	public void displayProperties(String filename, long size) {
		output.print(filename);
		output.print(" : ");
		output.print("size = ");
		output.print(size);
		output.println();
	}

	public void displayGetFileStatus(String filename, boolean ok) {
		output.print(filename);
		output.print(" : ");
		if (ok) output.print("downloaded");
		else output.print("download failed");
		output.println();
	}

}
