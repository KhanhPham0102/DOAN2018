
 public class MyClass extends Thread {
	...
	public void run() {
		if (name.equals("1") ) MyObject.foo(name);
		else if (name.equals("2") ) MyObject.bar(name) ;
	}
}
public class MyObject {
	public static synchronized void foo(String name ) {
	/* same as before */
	}
	public static synchronized void bar(String name) {
		/* sam e as foo */
	}
}
------------------------
public class MyClass extends Thread {
...
	public void run() {
		myObj.foo(name);
	}
}
public class MyObject {
	public void foo(String name) {
		synchronized(this) {
		...
		}
	}
}
