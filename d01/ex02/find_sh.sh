find . -name "*.sh" -type f | rev | cut -c4- | rev | egrep -o "[^/]+$"
