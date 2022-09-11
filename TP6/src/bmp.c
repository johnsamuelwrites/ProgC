/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "bmp.h"

/*
 * fonction d'analyse des couleurs dans l'image du format BMP
 * Il faut un argument : le chemin du fichier image
 */
couleur_compteur *analyse_bmp_image(char *nom_de_fichier)
{

  couleur_compteur *cc = NULL;

  // l'ouverture du fichier pour la lecture
  int fd = open(nom_de_fichier, O_RDONLY);
  printf("%s", nom_de_fichier);
  if (fd < 0)
  {
    perror("Erreur: open");
    return 0;
  }

  bmp_header bheader;
  bmp_info_header binfo_header;

  // la lecture de l'en-tête du fichier pour en connaître la taille et le type
  ssize_t compte = read(fd, &bheader, sizeof(bheader));
  if (compte < 0)
  {
    perror("Erreur: read");
    return (NULL);
  }

  // Vérifier l'en-tête pour voir si le fichier est une image de format BMP
  if (bheader.type != 0x4D42)
  {
    return (NULL);
  }

  /* Obtenir l'information indiquant si l'image utilise 3 (RGB) ou 4 (RGBA)
   * octets pour stocker une seule couleur
   */
  compte = read(fd, &binfo_header, sizeof(binfo_header));
  if (compte < 0)
  {
    perror("Erreur: read");
    return (NULL);
  }

  // Se positionner correctement pour commencer à lire les couleurs
  off_t offset = lseek(fd, bheader.offset, SEEK_SET);
  if (offset != bheader.offset)
  {
    perror("Erreur: lseek");
    return (NULL);
  }

  // Lecture des couleurs de 4 octets
  if (binfo_header.compte_bit == 32)
  {
    couleur32 *c32 = calloc(binfo_header.taille_image / 4, 4);
    read(fd, c32, binfo_header.taille_image);
    if (compte < 0)
    {
      perror("Erreur: read");
      return (NULL);
    }

    couleur c;
    c.compte_bit = BITS32;
    c.c.c32 = c32;
    cc = compte_couleur(&c, binfo_header.taille_image / 4);
    trier_couleur_compteur(cc);
  }
  else if (binfo_header.compte_bit == 24)
  {
    // Lecture des couleurs de 3 octets
    couleur24 *c24 = calloc(binfo_header.taille_image / 3, 3);
    read(fd, c24, binfo_header.taille_image);
    if (compte < 0)
    {
      perror("Erreur: read");
      return (NULL);
    }

    couleur c;
    c.compte_bit = BITS24;
    c.c.c24 = c24;
    cc = compte_couleur(&c, binfo_header.taille_image / 3);
    trier_couleur_compteur(cc);
  }

  close(fd);

  return cc;
}
