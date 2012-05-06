#!/bin/sh
BASE_URL=http://archive.org/details/
S3CMD=/home/h4ck3rm1k3/experiments/s3cmd-modification/s3cmd
for bfile in `ls fosm-*-idx-*.txt`
do
    BASE_HEADER=${bfile} #something that should be unique
    $S3CMD mb s3://$BASE_HEADER

    while true
    do	
	$S3CMD ls | grep $BASE_HEADER 	
	if [ $? -eq 0 ] 
	then
	    break
	fi
	echo Sleeping...#sometimes it takes a moment to be processed on their end	
	sleep 400
    done
    
    for file in `cat $bfile`
    do 
	echo put $file
	cmd="$S3CMD put /pine02/www/index2/$file s3://$BASE_HEADER/$file"
	echo going to $cmd
	while true
	do 
	    echo start;
	    $cmd;
	    
	    if [ $? -eq 0 ] 
	    then
		break
	    fi	    
	    echo failed $cmd;
	    sleep 40;
	done
    done

done

echo $BASE_URL$BASE_HEADER
