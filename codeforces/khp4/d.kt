import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    for( p in 1..t){
        val n = reader.nextInt()
        var mov = 1
        var num = Array(n, {i -> i * 0})
        for(i in 0..n-1){
            num[i] = reader.nextInt()
        }
        var l = 1
        var r = n-1
        var a = num[0]
        var b = 0
        var last = num[0]
        var s: Int
        while(l <= r){
            s = 0
            while(s <= last && l <= r){
                s = s + num[r]
                r = r - 1
            }
            if( s != 0){
                mov = mov + 1
            }
            last = s
            b = b + s
            s = 0
            while(s <= last && l <= r){
                s = s + num[l]
                l = l + 1
            }
            if( s != 0){
                mov = mov + 1
            }
            a = a + s
            last = s
        }
        println("$mov $a $b")
    }
}
