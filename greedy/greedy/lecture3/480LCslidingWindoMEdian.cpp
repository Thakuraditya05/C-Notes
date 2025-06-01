// vector ke pass bhi apna ye erase function hota hai but order of n complexity 






hrr window pe ja ke uska median nikalana hai 
ek max heap banao 
ek min heap 
median se chote elemnt ek min heap me and median se bade elemnt max heap me 
such that min(size) = max(size)
min(size) = max(size) + 1
1st elemtn in min heaps median become 1
2nd elemnt check karo median se bada hai ya chota if bada hai to min heap if chota hai max heap and median update karo 
(if ele > median ) min heap me push karo 

if (ele<median ) maxHeaps e push kr do 
also   condition balanced honi chahiye 

// ab sliding windpow move kr gayi hai 
kya top ka elemnt remove krne layak tha ya nahi ie  


elemnt if == root kisi dono heap me se to to remove that now window elemnt 
if elemnt > median will be found in min heap
if e;emt < median then ele  will be found in max heap 



kull mila ke baad ye hai ki 
    1 jaise koi elemnt window ke bahr ja raha hai check ki wo maxHeadp ya minHeap ka top  hai ya nahi if hai to remove if nahi hai to uss time pe jo x and y as the size paramater banaye gaye dino heaps ke liye unko minus plus krte jaao 
    2 baad me kabhi kisi time pe wo elemnt aayega to usko remove kr dena but usse size paramenter pe impact mt dalana kyo ki usko pahle se hoi hata chuke the
    3 jb koi upper diye hue condition se macthed ko kr koi elemnt maxHeap ka part ho ya min heap ka part bane to size paramater ko alter kr dena yani add ya substract kr dena 

// 
do heap maxHEap and min ke naam sizeof
1s elemtn 



// isska code git hub repo se nikal lena plz 