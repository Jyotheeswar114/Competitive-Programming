import java.util.Scanner
fun main()
{
    var x: Int; var y: Int; var a: Int; var b: Int; var c: Int
    val reader = Scanner(System.`in`)
    var t:Int = reader.nextInt()
    for(i in 1..t){
        x = reader.nextInt()
        y = reader.nextInt()
        if(x<y){
            a = x - 1
        }
        else{
            a = y - 1
        }
        b = x - a
        c = y - a
        println("$a $b $c")
    }
}
