#!/bin/bash
#
#busystation.cgi
#
#purpose:   processing script for busystation.html
#usage:     none. Automatically links busystation.html and
#           busystation
#
    eval $(./qryparse)
    echo "Content-Type: text/plain"
    echo ""

    echo "Busiest hour for the $station station on $when is: " 
    ./busystation "$station" "$when"
    echo "Have a very nice trip!"
