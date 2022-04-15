class TargetingSolution{
    // var x,y,z;
   
   constructor(x,y,z){
        this.x=x;      
        this.y=y;
        this.z=z
   }
    
    target = function(){
        return "("+this.x +", " +this.y +", " +this.z +");"
    } 
}


const sln = new TargetingSolution({
    x: 10,
  y: 15,
  z: 900,
  });
  
  
console.log(sln.target()); // Should output a string of (10, 15, 900)