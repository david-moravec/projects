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