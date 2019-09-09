find -E . -regex ".*\.sh" -print | sed 's/\..*\///' | sed 's/\.sh$//'
