import java.util.Scanner
fun main()
{
    var n: Int
    val reader = Scanner(System.`in`)
    var t:Int = reader.nextInt()
    for(i in 1..t){
        n = reader.nextInt()
        println(n/2)
    }
}
