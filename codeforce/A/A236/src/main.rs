use std::io;

fn decide_gender(username: &str) -> usize {
  let len_username: usize = username.chars().count();
  println!("len: {}", len_username);

  len_username % 2 as usize
}

#[test]
fn test_decide_gender() {
  assert_eq!(decide_gender("wjmzbmr"), 0);
  assert_eq!(decide_gender("xiaodao"), 1);
  assert_eq!(decide_gender("sevenkplus"), 0);
  
}

fn main() {
  let mut username = String::new();
  let stdin = io::stdin();
  
  match stdin.read_line(&mut username) {
    Err(e) => println!("{:?}", e),
    _ => ()
  };

  match decide_gender(&username) {
    0 => println!("CHAT WITH HER!"),
    1 => println!("IGNORE HIM!"),
    _ => println!("NO USERNAME!"),
  }
}
