# Stage 2023

## links

Global :

- [Sujet du stage](https://dept-info.labri.fr/~denis/Enseignement/Sujet_PFE_2023_uintr.html)
- [Visio Alexandre](https://inria.webex.com/meet/alexandre.denis)
- [Visio Charles](https://inria.webex.com/meet/charles.goedefroit)
  > Préférences > Audio et vidéo > PIN de l'organisateur
- [doc-si INRIA](https://doc-si.inria.fr/)
- [password INRIA](https://password.inria.fr/)
- [Channel Mattermost TADaaM](https://mattermost.inria.fr/tadaam/channels/town-square)
- [Dalton docs](https://gitlab.inria.fr/runtime/internal/-/wikis/dalton/dalton)
- [Dalton docs reserve](https://gitlab.inria.fr/runtime/internal/-/wikis/dalton/reserve)

Examples :

- [Mémoire de stage - Guillaume](https://hal.inria.fr/hal-01587584)

- [Signals manual](https://man7.org/linux/man-pages/man2/sigaction.2.html)

## utile

### salle

- Pour réservé une salle il faut ajouté un événement dans le calendrier Zimbra et faire `envoyer` (et non enregistré).

### ssh

- `ssh acces.bordeaux.inria.fr`

- `ssh cgoedefr@dalton.bordeaux.inria.fr`
  On daltons `billy0` and `billy1` have BXI and infiniband NICs.

### git branch

- `nmad-uintr` : all
- ~~`nmad-uintr-shm-sig` : shm driver with signal handler~~

### Emacs

- `C-x` = `Ctrl+x`
- `M-x` = `Alt+x`
- `s-x` = `Mod4+x`

### Cmd

> `pdftotext these_trahay.pdf` pour avoir le text avec les accents.

## TODO

- faire une présentation des uinter
- check if task is thread (get citation)
- rpm source kernel
- see RedHat kernel
- add sig alt stack (test if pthread_self work in the alt stack).
- add fix for lock and multi thread (try_lock)
- refactor handler code
- v2 we juste dequeue(pw) to stop recv_poll
- lire la specs `portals 4` pour en discuté
- for `sig_shm` we consider one context by process and one connection by dest process (dest->pid).
- ...

## road map

![Alt text](img/rn_image_picker_lib_temp_f484c77a-c389-445e-8c7b-bcc0fc9adee4.jpg)

### 1. Voire le fonctionnement interne de `NewMadeleine`, les events, les drivers…

### 2. Testes avec le driver `shm`

- Avec des signaux en premier. `nmad-uintr-shm-sig`
- Avec les interruptions en espace utilisateur.
- Faire attention à ce qui est possible de faire ou non dans les handlers. (exec flow).

### 3. Au niveau du driver `tcp` (SIGIO)

### 4. Portals 4
