# Projet-C-TR
Ce projet consiste à réimplémenter une version simplifiée de la commande Unix tr. Le programme lit des données depuis l’entrée standard, transforme les caractères selon le mode choisi, puis écrit immédiatement le résultat sur la sortie standard.

Pour exécuter ce projet :
gcc -Wall -Wextra -Werror -Iinclude src/*.c -o tr
echo "tata" | ./tr at if

Ou avec différentes options :
echo zabcdef | ./tr -d zcdb
echo lmqskdjfqmssldtakjfqmslkdmf | ./tr -cd ta\\n

Vous pouvez faire cette commande pour en savoir plus sur les différentes options implémentées :
./tr --help
