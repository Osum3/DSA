const boxes=document.querySelectorAll('.box');
// console.log(restart)
let pre=document.querySelector('.dad').childElementCount;
let a=document.querySelector('.dad')
a.addEventListener('click',function(e){
    let removeit=e.target;
    if(removeit===document.querySelector('.box')){

        removeit.remove();
    }
   
    pre--;
    check()
    
})
let empty=document.querySelector('.dad');
function check(){
if(pre===0){
        setTimeout(()=>{alert("game ended")},10)

    }

}
document.querySelector('.restart').addEventListener('click', () => {
    let newdiv=document.createElement('div')
    newdiv.className="lol"
    
    
    boxes.forEach(box => {
        newdiv.appendChild(box);
    });
    document.querySelector('.dad').appendChild(newdiv);
    pre = boxes.length;
})