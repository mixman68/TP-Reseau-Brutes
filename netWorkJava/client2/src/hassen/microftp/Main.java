package hassen.microftp;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.Socket;
import java.util.List;

import hassen.microftp.common.Protocol;

public class Main {

	private Socket connection = null;
	
	public void connect (String serverName) throws Exception {
		connection = new Socket (serverName, Protocol.MICROFTP_PORT_ID);
	}

	public void disconnect () throws Exception {
		if (connection != null) connection.close();
		connection = null;
	}

	public void chat (String serverName) {
		try {
			connect (serverName);
			Session session = new Session (connection);
			BufferedReader input = new BufferedReader (new InputStreamReader(System.in));
			while (true) {
				String text = input.readLine();
				String reply = session.chat(text);
				if (reply == null) break;
				System.out.println("Reply >> " + reply);
			}
			disconnect ();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	public void ftp (String serverName) {
		try {
			connect (serverName);
			Session session = new Session (connection);
			IHM ihm = new IHM (System.in, System.out);
			while (true) {
				Command c = ihm.getCommand();
				if (c.getId() == Command.QUIT) break;
				switch (c.getId()) {
				case Command.DIR :
					List<String> dir = session.dir();
					ihm.displayList (dir);
					break;
				case Command.INFO :
					long size = session.info(c.getFilename());
					ihm.displayProperties (c.getFilename(), size);
					break;
				case Command.GET :
					boolean ok = session.getFile(c.getFilename());
					ihm.displayGetFileStatus (c.getFilename(), ok);
					break;
				}
			}
			disconnect ();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		String serverName = "10.75.0.169";
		if (args.length >= 1) serverName = args[0];
		Main m = new Main ();
		m.chat(serverName);
//		m.ftp(serverName);
	}

}
