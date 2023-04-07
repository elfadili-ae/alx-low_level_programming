#!/bin/bash
ls -c1 *.c | xargs gcc -c
ls -c1 *.o | xargs ar rc liball.a
rm *.o
