import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    var n = reader.nextInt()
    var a = IntArray(n)
    for(i in 0..n-1){
        a[i] = reader.nextInt()
    }
    for(i in 0..n-1){
        println(a[i])
    }
}
