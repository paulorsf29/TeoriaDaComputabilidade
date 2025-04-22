function soma(n) {
    if (n === 0) return 0;
    return n + soma(n - 1);
}

console.log("Soma:", soma(5));
