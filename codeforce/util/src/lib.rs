pub fn parse_input_to_int_tuple(line: &str) -> Option<(i32, i32)> {
    match line.find(' ') {
        None => None,
        Some(index) => {
            match(&line[..index].parse::<i32>(), &line[index+1..].parse::<i32>()) {
                (Ok(l), Ok(r)) => Some((*l, *r)),
                _ => None,
            }
        }
    }

}

#[test]
fn test_parse_input_to_int_tuple() {
    assert_eq!(parse_input_to_int_tuple("4 9"), Some((4, 9)))
}

pub fn parse_input_to_vector(line: &str, character: char) -> Vec<i32> {
    let mut parsed_input = Vec::new();

    let split = line.split(character);

    for number in split {
        let number_ok = number.parse::<i32>()?;
        parsed_input.push(number_ok);
    }
    parsed_input
}

#[test]
fn test_parse_input_to_vector() {
    assert_eq!(parse_input_to_vector("1 2 3 4 5", ' '), vec!(1,2,3,4,5))
}