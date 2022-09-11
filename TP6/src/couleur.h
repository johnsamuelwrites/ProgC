/*
 * SPDX-FileCopyrightText: 2021 John Samuel
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

#ifndef __COLOR_H__
#define __COLOR_H__

#include <stdint.h>

// Compte de bits (24 bits, 32 bits..)
typedef enum COMPTEBIT
{
  BITS24,
  BITS32
} COMPTEBIT;

// Structure de données d'une couleur de 32 bits
#pragma pack(push, 1)
typedef struct
{
  uint8_t bleu;
  uint8_t vert;
  uint8_t rouge;
  uint8_t alpha;
} couleur32;
#pragma pack(pop)

// Structure de données d'une couleur de 24 bits
#pragma pack(push, 1)
typedef struct
{
  uint8_t bleu;
  uint8_t vert;
  uint8_t rouge;
} couleur24;
#pragma pack(pop)

// Structure de données d'un couleurs de 24/32 bits
typedef struct
{
  COMPTEBIT compte_bit;
  union
  {
    couleur24 *c24;
    couleur32 *c32;
  } c;
  int size;
} couleur;

// Structure de données de compteur de couleurs de 32 bits
typedef struct
{
  couleur32 c;
  int compte;
} couleur32_compteur;

// Structure de données de compteur de couleurs de 24 bits
typedef struct
{
  couleur24 c;
  int compte;
} couleur24_compteur;

// Structure de données de compteur de couleurs de 24/32 bits
typedef struct
{
  COMPTEBIT compte_bit;
  union
  {
    couleur24_compteur *cc24;
    couleur32_compteur *cc32;
  } cc;
  int size;
} couleur_compteur;

// compter les couleurs distincts
couleur_compteur *compte_couleur(couleur *, int);

// afficher les couleurs
void print_couleur(couleur *, int);

// afficher le compte de couleurs distincts
void print_couleur_compteur(couleur_compteur *);

// trier le compte de couleurs distincts
void trier_couleur_compteur(couleur_compteur *);

#endif
