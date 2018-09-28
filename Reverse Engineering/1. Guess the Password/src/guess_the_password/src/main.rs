use std::io::{self, Write};

const FLAG: &str = "UiTHack18{static_strings_are_visible_in_the_binary}";
const PASSWORD: &str = "hiding_unencrypted_secrets_in_binaries_is_unsmart";

fn main() {
    let mut buf = String::new();
    print!("Password plase: ");
    let _ = io::stdout().flush();
    match io::stdin().read_line(&mut buf) {
        Ok(_) => {
            if buf.trim() == PASSWORD {
                println!("You got the right password, the flag is: {}", FLAG);
            } else {
                println!("Wrong password!");
            }
        }
        Err(e) => println!("Error: {}", e),
    }
}
