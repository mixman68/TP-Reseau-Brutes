package hassen.microftp;

public class Command {
	private int id;
	private String filename;

	public Command(int id, String filename) {
		super();
		this.id = id;
		this.filename = filename;
	}

	public int getId() {
		return id;
	}

	public String getFilename() {
		return filename;
	}

	static final int QUIT = 0;
	static final int DIR = 1;
	static final int INFO = 2;
	static final int GET = 3;
}
