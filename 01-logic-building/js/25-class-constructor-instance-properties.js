class Demo
{
  constructor()
  {
    this.No1 = 11
    this.No2 = 21
    console.log("Inside Constructor")
  }
}

function main()
{
  dobj = new Demo();

  console.log(dobj.No1)
  console.log(dobj.No2)
}


main()