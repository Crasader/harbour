REM https://coderwall.com/p/g16jpq/keep-your-git-directory-clean-with-git-clean-and-git-trash


REM If you just clean untracked files ....
git clean -f
REM If you want to also remove directories ... 
git clean -f -d
REM If you just want to remove ignored files ...
git clean -f -X -d
git clean -f -X -d build

REM If you want to remove ignored as well as non-ignored files ....
git clean -f -x -d

