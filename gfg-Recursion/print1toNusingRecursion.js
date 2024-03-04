const printNumber = (number) => {
    if(number == 0) return ;

    console.log(number)
    printNumber(number - 1)
}

let number = 12;
printNumber(number)