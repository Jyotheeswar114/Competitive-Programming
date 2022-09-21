import java.util.Scanner
fun main()
{
    val reader = Scanner(System.`in`)
    var n = reader.nextInt()
    var temp: Int; var max1: Int; var max2: Int; var ans: Int = 0
    max1 = reader.nextInt()
    if(n!=1){
        max2 = reader.nextInt()
        if(n!=2){
            if(max1 < max2){
                temp = max2
                max2 = max1
                max1 = temp
            }
            for(i in 2..n-1){
                temp = reader.nextInt()
                if(temp < max2){
                    ans = ans + 1
                }
                else{
                    if(temp > max1){
                        max2 = max1
                        max1 = temp
                    }
                    else{
                            max2 = temp
                    }
                }
            }
        }
    }
    println(ans)
}
