#!/bin/bash

DUMP_SIZE=51
FILENAME="/root/osc_info.txt"

# 逐块读取文件并打印内容
dump_memory() {
    local offset=0
    while IFS= read -r -n "$DUMP_SIZE" liujia; do
        printf " |"
        
        # 打印可打印字符
        for ((i=0; i<${#liujia}; i++)); do
            char="${liujia:i:1}"
            # 判断字符是否是可打印的ASCII字符
            if [[ "$char" =~ [[:print:]] ]]; then
                printf "%s" "$char"
            else
                printf "."
            fi
        done
        
        # 填充剩余区域以确保对齐
        for ((i=${#liujia}; i<$DUMP_SIZE; i++)); do
            printf " "
        done
        
        printf "|\n"
        ((offset+=${#liujia}))
    done < "$FILENAME"
}

# 确保文件存在
if [[ ! -f "$FILENAME" ]]; then
    echo "Failed to open file: $FILENAME"
    exit 1
fi

# 调用 dump_memory 函数
dump_memory
