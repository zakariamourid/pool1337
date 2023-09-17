#!/bin/sh
id -Gn $USER | tr ' ' ',' | tr -d '\n'
