# duarte's dwmblocks build 

This is my personal build of dwmblocks, forked from Luke Smith's build, with several changes.

You probably should make your own builds, since it's in the "suckless" mindset to know your programs and have only exactly what you want in them.

## Patches / Features Included

- **Custom blocks:** Uses the scripts in `/home/duarte/app/dwmblocks/statusbar/`.
- **Minimal default configuration:** Only a few essential blocks enabled by default; most others are commented out but available in `config.h` for reference or customization.
- **Signal-based updates:** Blocks update on demand by sending signals (e.g., `pkill -RTMIN+10 dwmblocks`), so updates happen only when necessary.
- **Clickable modules:** Supports click events in modules using `$BLOCK_BUTTON` if your dwm build has the required patch.

(See the source and `config.h` for details.)

## Compilation

To build and install dwmblocks, run:

```
make clean install
```

You might need to use `sudo` for installation.
