import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    val t = reader.nextInt()
    for(u in 1..t){
        val n = reader.nextInt()
        val k1 = reader.nextInt()
        val k2 = reader.nextInt()
        var s = reader.next()
        var last = 0
        var ans = 0
        for(i in 0..n-1){
            if(s[i] == '1'){
                if(k1 <= k2 - last){
                    ans = ans + k1
                    last = k1
                }
                else{
                    last = k2 - last
                    ans = ans + last
                }
            }
            else{
                last = 0
            }
        }
        println(ans)
    }

}
