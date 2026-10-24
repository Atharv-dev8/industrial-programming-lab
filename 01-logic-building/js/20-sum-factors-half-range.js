function SumFactor(iNo)
{
  let iCnt=1
  let iSum =0
  

  for(iCnt =1;iCnt <= iNo/2;iCnt++)
  {
      if((iNo % iCnt) == 0)
      {
          iSum = iSum+iCnt
      }
  }
  return iSum
}

function main()
{
  let iRet = 0
  iRet = SumFactor(12)
  console.log("Summation Of Factor : ",iRet)
}

main()