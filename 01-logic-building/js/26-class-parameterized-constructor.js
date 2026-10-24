class Demo
{
  constructor(A,B)
  {
    this.No1 = A
    this.No2 = B
    console.log("Inside Constructor")
  }
}

function main()
{
  dobj = new Demo(51,101);

  console.log(dobj.No1)
  console.log(dobj.No2)
}


main()