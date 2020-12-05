#!/usr/bin/zsh
diff <(cd ./src/ && printf '%s\n' **/*(D:r)) \
        <(cd ./.obj/ && printf '%s\n' **/*(D:r))
return 0