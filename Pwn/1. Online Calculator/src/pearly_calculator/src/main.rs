use std::io::{self, Write};
use std::process::Command;

fn main() {
    print!("Input mathematical expression: ");
    let _ = io::stdout().flush();
    
    let mut buf = String::new();
    match io::stdin().read_line(&mut buf) {
        Ok(_) => {
            let mut child = Command::new("perl")
                                 .arg("-e")
                                 .arg(format!("print {}", buf))
                                 .spawn()
                                 .expect("Failed to spawn perl");
            let _status = child.wait()
                              .expect("Couldn't wait for child");
        }
        Err(e) => println!("Error: {}", e),
    }
}
