curl -s https://projects.intra.42.fr/uploads/document/document/266/contacts_hard.txt | grep -i "bauer" | grep -i "nicolas" | grep -iv "bomber" | awk '{print $(NF-1)}'
