package hassen.microftp;

import hassen.microftp.common.Protocol;

import java.io.DataInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.ArrayList;
import java.util.List;

public class Reader {

	private DataInputStream inputStream;
	private String text;
	private int type;
	private List<String> filenames;
	private long size;
	private byte [] content;
	
	public Reader(InputStream inputStream) {
		this.inputStream = new DataInputStream (inputStream);
	}

	private int readInt () {
		try {
			return inputStream.readInt();
		} catch (IOException e) {
			return 0;
		}
	}

	private long readLong () {
		try {
			return inputStream.readLong();
		} catch (IOException e) {
			return 0;
		}
	}

	private String readUTF () {
		try {
			return inputStream.readUTF();
		} catch (IOException e) {
			return "";
		}
	}

	public void receive() {
		text = readUTF ();
	}

	public String getText () {
		return text;
	}
	
	public int getType () {
		return type;
	}
	
	public List<String> getFilenames () {
		return filenames;
	}

	public long getSize () {
		return size;
	}
	
	public byte [] getContent () {
		return content;
	}

}
