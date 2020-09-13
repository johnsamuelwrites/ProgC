/*
 * SPDX-FileCopyrightText: 2020 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef __READ_BMP_H__
#define __READ_BMP_H__

#include <stdint.h>
#include "couleur.h"

//Reference: http://www.ue.eti.pg.gda.pl/fpgalab/zadania.spartan3/zad_vga_struktura_pliku_bmp_en.html
//https://stackoverflow.com/questions/14279242/read-bitmap-file-into-structure

//Structure de données d'une image bmp (en-tête)
#pragma pack(push, 1)
typedef struct {
  uint16_t type;
  uint32_t file_size;
  uint16_t reserved1;
  uint16_t reserved2;
  uint32_t offset;
} bmp_header;
#pragma pack(pop)

//Structure de données d'une image bmp (en-tête): détails (taille etc.)
#pragma pack(push, 1)
typedef struct {
  uint32_t info_header_size;
  uint32_t largeur;
  uint32_t hauteur;
  uint16_t planes;
  uint16_t compte_bit;
  uint32_t compression;
  uint32_t taille_image;
  uint32_t xpixels_par_metre;
  uint32_t ypixels_par_metre;
  uint32_t couleurs_utilise;
  uint32_t couleurs_important;
} bmp_info_header;
#pragma pack(pop)

// analyse d'un fichier bmp (compter et trier)
couleur_compteur * analyse_bmp_image(char *);
#endif
