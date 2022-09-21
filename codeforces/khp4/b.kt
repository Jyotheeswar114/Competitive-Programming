import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    for(i in 1..t){
        val a1 = reader.nextInt()
        val b1 = reader.nextInt()
        val a2 = reader.nextInt()
        val b2 = reader.nextInt()
        if(a1 == a2 && b1 + b2 == a1){
            println("YES")
        }
        else if(a1 == b2 && a2 + b1 == a1){
            println("YES")
        }
        else if(b1 == a2 && a1 + b2 == b1){
            println("YES")
        }
        else if(b1 == b2 && a1 + a2 == b1){
            println("YES")
        }
        else{
            println("NO")
        }
    }
}
