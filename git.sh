#!/bin/bash

:<<'END'
1.
로컬 저장소의 .git 디렉토리를 삭제한다.

2.
로컬 저장소에서 git init을 다시 수행하여 초기화 시킨다.

3. 
초기화에 등록될 파일을 추가 및 커밋한다.
git add .
git commit -m 'Initial commit'

4.초기화 시킬 원격 저장소를 추가시킨다.
git remote add origin <url>

5. 현재 상태를 원격저장소에 적용시킨다.
 git push --force --set-upstream origin master
END

echo `git init`
echo `git add .`

echo -n "Commit: "
read commit 
echo `git commit -m "$commit"`
echo `git remote add UVa https://github.com/ypjung/UVa.git`
echo `git push --force --set-upstream UVa master`

