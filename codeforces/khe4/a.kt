import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    for(u in 1..t){
        val n = reader.nextInt()
        val k = reader.nextInt()
        val n1 = n/(1 + k + k*k + k*k*k)
        println("$n1 ${n1 * k} ${n1 * k * k} ${n1 * k * k * k}")
    }
}
