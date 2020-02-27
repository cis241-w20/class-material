#! /usr/local/bin/gawk -f

BEGIN {
    FS="\t"
    SUM=0
}
{ SUM+=$5 }
{
    if (NR % 5 == 0)
        print $0
    else
        next

    for (i=1; i<=NF; i++) if (i%5 == 0) print $i

}
END {
    print "sum = " SUM
}

