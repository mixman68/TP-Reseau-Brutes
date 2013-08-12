package hassen.microftp;

import hassen.microftp.common.Protocol;

import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.OutputStream;

public class Writer {

	private OutputStream outputStream;
	private ByteArrayOutputStream baos = new ByteArrayOutputStream ();
	private DataOutputStream output = new DataOutputStream (baos);
	
	public Writer(OutputStream outputStream) {
		this.outputStream = outputStream;
	}

	private void writeInt (int v) {
		try {
			output.writeInt(v);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}	

	private void writeUTF (String v) {
		try {
			output.writeUTF(v);
		} catch (IOException e) {
			e.printStackTrace();
		}
	}	

	public void createText(String txt) {
		writeUTF (txt);
	}

	public void send() {
		byte [] message = baos.toByteArray();
		try {
			outputStream.write(message);
			outputStream.flush();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	public void createDir () {
	}

	public void createInfo (String filename) {
	}

	public void createGet (String filename) {
	}

}
