#ifndef NEOGEO_LOADER_H
#define NEOGEO_LOADER_H

#define NEO_FILE_RAW 0
#define NEO_FILE_8BIT 1
#define NEO_FILE_FIX 2
#define NEO_FILE_SPR 3

int neogeo_romset_tx(char* name, int cd_en);
int neogeo_scan_xml(char *path);
char *neogeo_get_altname(char *path, char *name, char *altname);
#endif
