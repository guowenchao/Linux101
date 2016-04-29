#!/bin/bash  
if [[ -z "$1" ]] || [[ ! -d "$1" ]]; then  
    echo "目录为空或者不存在，将会遍历测试脚本所在目录"    
    nowdir=$(pwd)  
else  
    nowdir=$(cd $1; pwd)  
fi  
echo "$nowdir"  
  
# 递归函数的实现  
function SearchCfile()  
{  
    cd $1  
    #修改grep条件便可改变遍历文件类型  
    cfilelist=$(ls -l | grep "^-" | awk '{print $9}')  
    for cfilename in $cfilelist  
    do  
        echo $cfilename  
    done  
# 遍历当前目录，当判断其为目录时，则进入该目录递归调用该函数；  
    dirlist=$(ls)  
    for dirname in $dirlist　　　　　　  
    do  
        if [[ -d "$dirname" ]];then  
            cd $dirname 
            SearchCfile $(pwd)  
            cd ..  
        fi;  
    done;  
}  
  
# 调用上述递归调用函数  
SearchCfile $nowdir  
