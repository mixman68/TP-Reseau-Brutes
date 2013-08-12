package hassen.microftp;

import hassen.microftp.common.FileHelper;
import hassen.microftp.common.Protocol;

import java.io.IOException;
import java.net.Socket;
import java.util.List;

public class Session {

	private Socket connection;
	
	public Session (Socket connection) {
		this.connection = connection;
	}

	public String chat (String txt) {
		try {
			Writer writer = new Writer (connection.getOutputStream());
			writer.createText(txt);
			writer.send ();
			if (txt.equals(Protocol.EXIT_TEXT)) return null;
			Reader reader = new Reader (connection.getInputStream());
			reader.receive ();
			return reader.getText();
		} catch (IOException e) {
			return "";
		}
	}

	public boolean getFile (String filename) {
		return true;
	}

	public List<String> dir () {
		return null;
	}

	public long info (String filename) {
		return -1;
	}

}
