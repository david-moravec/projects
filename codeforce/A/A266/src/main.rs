use std::io;

fn trim_trailing_spaces(to_trim: &mut String) -> String {
    let len_after_trim = to_trim.trim_end().len();

    to_trim.to_string()
    
}

fn main() {
    let mut stone_row = String::new();
    let mut len_stone_row = String::new();

    match io::stdin().read_line(&mut len_stone_row) {
        Err(e) => println!("Could not read input: {:?}", e),
        _ => (),
    };
    let len_stone_row: String = len_stone_row.strip_suffix("\r\n").unwrap().to_string();
    let len_stone_row: usize = len_stone_row.parse::<usize>().unwrap();
    
    match io::stdin().read_line(&mut stone_row) {
        Err(e) => println!("Could not read input: {:?}", e),
        _ => (),
    };
    let stone_row = stone_row.strip_suffix("\r\n").unwrap();
    let mut stone_row_uniq: Vec<char> = stone_row.chars().collect::<Vec<char>>();

    stone_row_uniq.dedup();

    let stones_removed: usize = len_stone_row - stone_row_uniq.len();

    println!("{}", stones_removed);
}
