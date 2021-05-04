git add .
git remote -v
git status
git tag -a v0.1 -m "Version 0.1"
git commit -m "0.1"
git remote add origin https://github.com/0Nera/KolibriRPG.git
git pull origin master
git push --follow-tags --force origin master
pause