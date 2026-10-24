function DisplayFactor(iNo)
{
   let iCnt=1
   console.log("Factors of  : ",iNo)
  for(iCnt =1;iCnt <= iNo/2;iCnt++)
  {
      if((iNo % iCnt) == 0)
      {
         console.log(iCnt)
      }
  }
}

function main()
{
  DisplayFactor(12)
}

main()