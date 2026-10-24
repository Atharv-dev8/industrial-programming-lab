function CheckEven(iNo)
{
    
    if(iNo % 2 == 0)
    {
        console.log("It Is Even Number");
    }
    else
    {
        console.log("It Is Odd Number")
    }
}
function main()
{
   let iValue = 12;

   CheckEven(iValue);
}

main()