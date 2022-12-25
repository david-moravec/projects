use std::io;
use util::parse_input_to_int_tuple;

fn main() {
    let mut line = String::new();

    io::stdin().read_line(&mut line);

    let n, k = parse_input_to_int_tuple(&line);

    io::stdin().read_line(&mut line);
}
