import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    for(u in 1..t){
        val n = reader.nextInt()
        val k = reader.nextInt()
        val x = reader.nextInt()
        val y = reader.nextInt()
        var a = Array(n, {i -> i * 0})
        var sum = 0
        for(i in 0..n-1){
            a[i] = reader.nextInt()
            sum = sum + a[i]
        }
        a.sort()
        var j = n - 1
        var ans = 0
        while(sum > n * k && j > -1){
            sum = sum - a[j]
            j = j - 1
            ans = ans + x
        }
        var c = 0
        while(j > -1 && a[j] > k){
            c = c + 1
            j = j - 1
        }
        if(c * x < y){
            ans = ans + c * x
        }
        else{
            ans = ans + y
        }
        println(ans)
    }
}
