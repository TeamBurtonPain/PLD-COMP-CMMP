echo "Test ID;Return code validation;Out result;StdErr result;File creation result;Global result" >results.csv
nOk=0
nKo=0
nTotal=0
nMis=0

for i in Test*
do
  ./test.sh $i
  result=$?
  if [ $result -eq 0 ]
  then
    nKo=$nKo+1
  elif [ $result -eq 1 ]
  then
    nOk=$((nOk+1))
  else
    nMis=$((nMis+1))
  fi
  nTotal=$((nTotal+1))
done

echo "Passed tests     : $nOk"
echo "Failed tests     : $nKo"
echo "Misformed tests  : $nMis"
echo "-----------------------"
echo "Total            : $nTotal"
