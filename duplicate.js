let arr=[5,3,3,6,6,7,7,8,5,6,7,4,3,2,6,5,7,3,4,6,8,6,2];
for(let i =0 ;i <arr.length;i++){
    for(let j = i+1;j<arr.length;j++){
        if(arr[i]===arr[j]){
            arr.splice(j,1);
            j--;
        }}
    console.log(arr[i]);
}