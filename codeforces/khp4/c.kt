import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    var num = arrayOf(0,0,0,0)
    var jyo : Int
    for(i in 1..t){
        jyo = 0
        var n = reader.nextInt()
        var x = 1
        while(n > 0){
            if(n%10 != 0){
                num[jyo] = n%10 * x
                jyo = jyo + 1
            }
            n = n / 10
            x = x * 10
        }
        println(jyo)
        for(j in 0..jyo-1){
            print("${num[j]} ")
        }
        println()
    }
}
