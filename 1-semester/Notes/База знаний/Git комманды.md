Инициализация и клонирование:
* `git init` - создать новый репозиторий
* `git clone <url>` - клонировать удаленный репозиторий

Работа с изменениями:
* `git status` - посмотреть статус изменений
* `git add <file>` - добавить файл в staging
* `git add *` - добавить все изменения
* `git commit -m "message"` - создать коммит
* `git diff` - посмотреть изменения (unstaged)
* `git diff --staged` - посмотреть staged изменения

Ветки:
* `git branch` - список веток
* `git branch <name>` - создать ветку
* `git checkout <branch>` - переключиться на ветку
* `git checkout -b <branch>` - создать и переключиться
* `git merge <branch>` - слить ветку в текущую
* `git branch -d <branch>` - удалить ветку

Работа с удаленным репозиторием:
* `git remote -v` - список удаленных репозиториев
* `git fetch` - получить изменения с сервера
* `git pull` - получить и слить изменения
* `git push` - отправить коммиты на сервер
* `git push -u origin <branch>` - отправить новую ветку

История:
* `git log` - история коммитов
* `git log --oneline` - краткая история
* `git log --graph --all` - граф всех веток
* `git show <commit>` - детали коммита

Отмена изменений:
* `git restore <file>` - отменить изменения в файле
* `git restore --staged <file>` - убрать из staged
* `git reset HEAD~1` - отменить последний коммит оставив изменения
* `git reset --hard HEAD~1` - отменить коммит и изменения
* `git revert <commit>` - создать коммит, отменяющий указанный

Другие полезные:
* `git stash` - временно сохранить изменения
* `git stash pop` - вернуть сохраненные изменения