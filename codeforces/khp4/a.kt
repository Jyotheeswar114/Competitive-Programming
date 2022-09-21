import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    for(i in 1..t){
        var a = reader.nextInt()
        var b = reader.nextInt()
        println("${a+b}")
    }
}
