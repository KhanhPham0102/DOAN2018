public class MyClass extends Thread {
	private String name;
	private MyObject myObj;

	public MyClass(MyObject obj , String n) {
		name = n ;
		myObj = obj;
	}

	public void run( ) {
		myObj.foo(name);
	}
}

public class MyObject {
	public synchronized void foo(String name ) {
		try {
			System.out.println("Thread " + name + ".foo(): starting");
			Thread.sleep(3000);
			System.out.println("Thread " + name + ".fooQ: ending");
		} catch (InterruptedException exc) {
			System.out.println("Thread " + name + ": interrupted.");
		}
	}
}
