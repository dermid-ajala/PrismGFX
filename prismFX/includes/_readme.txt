buildPrismFX_h.bat
buildPrismFX_h.bat is an executable to build the prismFX header file. It copies the static files as well as the user selectable files. Exactly 1 Thai font and exactly 1 ASCII font must be selected by remove the REM in front of it. All other font files must remain commented out.

Select the font file desired.
Copy it to enFont3.h in this folder's parent folder

Notes:
sans	9,12,28,24
serif	9,12,18,24

Printing mixed TH and EN characters works well.
Using significantly different size fonts for the two fonts will look odd if mixed.

Note: the font files from the OLED_GFX and dot_GFX are NOT compatible with Prism_GFX!