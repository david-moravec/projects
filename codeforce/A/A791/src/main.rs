use std::io;
use util::parse_input_to_int_tuple;

fn years_to_outgrow_bob(limbak: i32, bob: i32) -> i32 {
    // each year the quotient between limbak and bob is increased by 3/2,
    // becouse each year limbak is multiplited by 3 and bob by 2.
    // l/b = c
    // 3/2b = d
    // --------
    // d/c = b/l * 2l/3b = 3/2
    // their ratio is geometric series with quotient of 3/2

    let mut weight_ratio: f32 = limbak as f32 / bob as f32;
    let mut years: i32 = 0;

    while weight_ratio <= 1. {
        weight_ratio = 3. / 2. * weight_ratio;
        years = years + 1;
    }
    years
}

#[test]
fn test_years_to_outgrow_bob() {
    assert_eq!(years_to_outgrow_bob(4, 7), 2);
    assert_eq!(years_to_outgrow_bob(4, 9), 3);
    assert_eq!(years_to_outgrow_bob(1, 1), 1);
}


fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input);
    let input = input.strip_suffix("\r\n").unwrap().to_string();

    let (limbak, bob) =  parse_input_to_int_tuple(&input)
                            .expect("Could not parse input");
    
    println!("{}", years_to_outgrow_bob(limbak, bob));
}