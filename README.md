# Tetrix
They said there were no linux viruses. So we made one for CodeDay. I dunno who 'they' is but whatever.

##I want to compile from source.

just run `make` in the default folder. Copy all contents of `/builds` to wherever.

##So how's it work?

When you run it, payload 1 occurs. We create an alias within .bashrc (or .zshrc if you use zsh.)
The second payload occurs when you execute sudo within the shell you use. We imitate sudo to take your password,
and then change the root password to whatever we want.

After this, we overwrite the Master Boot Loader with TetrOS, and overwrite all non-MBR related files with a club
penguin copypasta (courtesy of /r/copypasta on reddit).

UPDATE:
I ran this in the latest version of Ubuntu. The Master Boot Record gets corrupted, but is otherwise fine. It app-
ears that it also deletes all non-MBR related files.

tldr; 
Thanks to security patches, the virus only partially works.
