#!/bin/bash

git config user.email "isaactheedwards@gmail.com"
git config user.name "DTBissy"

read -p "Enter commit message: " message

git add *
git commit -m "$message"
git push
