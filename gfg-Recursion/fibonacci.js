const fibonacci = n => {
    if(n==0 || n==1) return n;

    return fibonacci(n-1)+fibonacci(n-2);
}


let number = 3;
let fibo = fibonacci(number)
console.log(fibo)