import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    var q:Int = reader.nextInt()
    for(i in 1..q){
        var s = readLine()!!
        var t = readLine()!!
        var a = 0
        var flag = 1
        for(j in 0..t.length-1){
            if(a == s.length){
                flag = 0
                break
            }
            if(t[j] == '-'){
                if(s[a] == '+'){
                    flag = 0
                    break
                }
                a = a + 1
            }
            else{
                if(s[a] == '+'){
                    a = a + 1
                    continue
                }
                else{
                    if(s.length-1 == a || s[a] == '+'){
                        flag = 0
                        break
                    }
                    a = a + 2
                }
            }
        }
        if(a != s.length){
            flag = 0
        }
        if(flag == 1){
            println("YES")
        }
        else{
            println("NO")
        }
    }
}
