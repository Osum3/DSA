"use strict";
// a=9090;
a=1000
let obj={
  a: 10,
  b:function(){
      console.log(this.a)
  }
}
obj.b()