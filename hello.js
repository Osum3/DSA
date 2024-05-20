
// const name="ayush"
// const fullname=`${name} dubey`;
// console.log(fullname);

let one={
    name:"ayush",
    rollno:40,
    section:'a'
}
let two=one;
two.name="ayush"
// console.table([one.name,one.rollno,one.section])

// let name="ayush"
// let fullname=`${name} dubey`

// console.log(fullname);  
let iop="ayush"
// console.log(iop[0])
let no=4;
// console.log(Math.floor(Math.random()*(6)+1))

const arr=[0,1,2,3,4,5,-1]
// let arr1=arr.slice(0,3)
// console.log("arr1",arr1)
// console.log(arr)

// let arr2=arr.splice(0,3)
// console.log("arr2",arr2)
// console.log(arr)
let ans= Symbol("key")
const obj={
    name: "ayush",
    class: "ece",
    [ans] :23,
    email: "dubeji@234",
    fun:function(){
    console.log("running")
}}
    obj.lol="create a new key and value pair in js"
    // Object.freeze(obj)
    // obj.name="dubje"
    // console.log(`hello ${obj.name}`)
    let ob= new Object()
    ob.name="nitin"
    ob.name={name:"lolo"}
    ob.passcode=234

    // ob=ob+"  ayush"
    // console.log(ob.name.name)
  
// let ocs={...obj,...ob}
// console.log(obj.fun())

function fun(num1,num2){
    return num1+num2
}

function username (name="user"){
    if(!name){
        console.log("Please enter the username")
        return
    }
    else{
        return ` ${name} , "is valid"`
    }
}

// console.log(username(obj.name))

function price(var1,var2,...num1){
    return num1
}

// console.log(price(1,2,3,4,5,6,7,8,9))

function arrr(getarray){
    return getarray[0]


}
let num=[1,2,3,4,5,6,7,8]
// console.log(arrr(num))


// if(true){
//     const name="ayush"
//     if(name==="ayush"){
//         console.log(name+"dubey")
//     }


let uname = {
    name:"ayush",
    class:"ece a",
    welcome: function(){
        console.log(this.name)
        console.log(this)
    }
}


let count = () => ({username:"ayush"})
count.username()

