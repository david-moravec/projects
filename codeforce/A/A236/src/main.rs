use std::io;

fn count_uniq_chars(username: &str) -> usize {
  let mut chars: Vec<char> = username.chars().collect();
  chars.sort();
  chars.dedup();
  
  chars.len() % 2 as usize
}

#[test]
fn test_decide_gender() {
  assert_eq!(count_uniq_chars("wjmzbmr"), 0);
  assert_eq!(count_uniq_chars("xiaodao"), 1);
  assert_eq!(count_uniq_chars("sevenkplus"), 0);
  
}

fn main() {
  let mut username = String::new();
  let stdin = io::stdin();
  
  match stdin.read_line(&mut username) {
    Err(e) => println!("{:?}", e),
    _ => ()
  };

  match count_uniq_chars(&username) {
    0 => println!("CHAT WITH HER!"),
    1 => println!("IGNORE HIM!"),
    _ => println!("NO USERNAME!"),
  }
}
