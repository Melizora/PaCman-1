## Lancer Giblixel sur Mac

### 1. Installer Homebrew (si ce n’est pas déjà fait)

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

### 2. Installer Wine

```bash
brew install --cask wine-stable
```

### 3. Lancer le jeu

```bash
cd ~/Downloads/Ghiblixel
wine pacman.exe
```
