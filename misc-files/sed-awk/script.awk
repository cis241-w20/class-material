#! /usr/local/bin/gawk -f

BEGIN {
    FS="\t"
}
$1 ~ /chevy/ {
    SUM+=$5 
    count++
    }
{
    if (NR % 5 == 0)
        sume5 += $5
}
{ counts[$1] += $5}
END {
    print "sum = " SUM ",  count = " count
    for(make in counts)
        print make, counts[make]
}

