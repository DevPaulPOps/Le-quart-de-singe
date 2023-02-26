# Le-quart-de-singe
## Introduction
Le Singe est un jeu de lettres où les joueurs doivent à tour de rôle ajouter une lettre pour former un mot. Si un joueur donne une lettre qui termine un mot existant de plus de deux lettres, il perd la manche et prend un quart de singe. Si le joueur courant demande au joueur précédent à quel mot il pense et que celui-ci est incapable de donner un mot existant, il perd la manche. Le premier joueur qui récolte quatre quarts de singe perd la partie. Les mots acceptés sont ceux du dictionnaire de la langue française et les verbes peuvent être conjugués.

## Fonctionnement de l'application
L'application doit permettre à au moins deux joueurs de jouer une partie. Si un joueur veut jouer seul, l'application doit implémenter des joueurs robots qui joueront automatiquement. Le nombre de joueurs, leur nature (humain ou robot) et l'ordre dans lequel les joueurs prendront leur tour sont spécifiés par une chaîne de caractères passée sur la ligne de commande.

Par exemple, si l'exécutable est nommé singe.exe, alors la commande singe HRHR lance une partie où quatre joueurs s'affrontent. Les joueurs un et trois sont des humains tandis que les joueurs deux et quatre sont des robots.

À chaque tour de jeu, le numéro du joueur courant, sa nature ainsi que les lettres déjà annoncées sont affichées. Le joueur doit soit ajouter une lettre à la chaîne de lettres, soit demander au joueur précédent à quel mot il pense, soit abandonner la manche. Si la lettre jouée termine un mot existant du dictionnaire, l'application affiche "le mot XXX existe, le joueur X prend un quart de singe". Si le joueur précédent ne peut pas donner un mot existant, l'application affiche "le mot XXX ne commence pas par les lettres attendues, le joueur X prend un quart de singe". Si le mot saisi n'existe pas dans le dictionnaire, l'application affiche "le mot XXX n'existe pas, le joueur X prend un quart de singe". Si le joueur abandonne la manche, l'application affiche "le joueur X abandonne la manche et prend un quart de singe".

## Dictionnaire
Le dictionnaire de la langue française utilisé par l'application est composé de 369 085 mots et doit être présent dans le répertoire courant lors du lancement de l'application.

## Joueurs robots
Les joueurs robots jouent automatiquement et leurs lettres jouées sont affichées sans avoir à être saisies.

## Conclusion
L'application implémente les règles du jeu du Singe en français. Elle permet à deux joueurs ou plus de jouer une partie et de s'exercer seul grâce à la présence de joueurs robots.
