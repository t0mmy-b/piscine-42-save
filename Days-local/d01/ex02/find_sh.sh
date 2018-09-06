find . \( -type f -name '*.sh' \) -print | sed 's/\(.*\)\///g' | rev | cut -c4- | rev
