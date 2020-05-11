#!/bin/bash
ifconfig -a |grep 'ether*'|cut -f 2 -d ' '|grep '[0-9]'
