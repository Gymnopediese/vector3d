/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_v3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albaud <albaud@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:42:18 by albaud            #+#    #+#             */
/*   Updated: 2023/03/18 12:02:06 by albaud           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_V3_H
# define T_V3_H

# include <math.h>
# include <stdio.h>

typedef struct s_v3
{
	double	x;
	double	y;
	double	z;
}	t_v3;

//retourne 1 si a et b sont egaux
int			v_equal(const t_v3 *a, const t_v3 *b);

//retourne l'adress d'un vecteur vide, a ne pas modifier
const t_v3	*v_null(void);

//cree un vector resultant de a + b
t_v3		v_add(const t_v3 *a, const t_v3 *b);
//cree un vector resultant de a.x, a.y, a.z + b
t_v3		v_nadd(const t_v3 *a, const double b);
//assigne à a le resultat de a + b
void		v_cadd(t_v3 *a, const t_v3 *b);
//assigne à a le resultat de a.x, a.y, a.z + b
void		v_cnadd(t_v3 *a, const double b);

//cree un vector resultant de a - b
t_v3		v_rm(const t_v3 *a, const t_v3 *b);
//cree un vector resultant de a.x, a.y, a.z - b
t_v3		v_nrm(const t_v3 *a, const double b);
//assigne à a le resultat de a - b
void		v_crm(t_v3 *a, const t_v3 *b);
//assigne à a le resultat de a.x, a.y, a.z - b
void		v_cnrm(t_v3 *a, const double b);

//cree un vector resultant de a * b
t_v3		v_mult(const t_v3 *a, const t_v3 *b);
//cree un vector resultant de a.x, a.y, a.z * b
t_v3		v_nmult(const t_v3 *a, const double b);
//assigne à a le resultat de a * b
void		v_cmult(t_v3 *a, const t_v3 *b);
//assigne à a le resultat de a.x, a.y, a.z * b
void		v_cnmult(t_v3 *a, const double b);

//cree un vector resultant de a / b
t_v3		v_div(const t_v3 *a, const t_v3 *b);
//cree un vector resultant de a.x, a.y, a.z / b
t_v3		v_ndiv(const t_v3 *a, const double b);
//assigne à a le resultat de a / b
void		v_cdiv(t_v3 *a, const t_v3 *b);
//assigne à a le resultat de a.x, a.y, a.z / b
void		v_cndiv(t_v3 *a, const double b);

//renvoie la distance entre a et b
double		v_dist(const t_v3 *a, const t_v3 *b);
//renvoie le produit vectoriel de a et b
double		v_dotp(const t_v3 *a, const t_v3 *b);
//renvoie la mutliplication vectoriell
t_v3		v_v3mult(const t_v3 *a, const t_v3 *b);
//renvoie la norme de a
double		v_norm(const t_v3 *a);
//renvoie l'angle entre le vecter a et b
double		v_angle(const t_v3 *a, const t_v3 *b);
//renvoie le vecter a sous forme de couleur en int
int			v_tocol(const t_v3 *a);

//retourne le vecteur resultant de l'equation de la ligne a + b * x
t_v3		v_ponline(const t_v3 *a, const t_v3 *b, const double x);

//retourne le vecteur unitair de a
t_v3		v_unit(const t_v3 *a);
//retourne le pointeur sur a convertie en son vecteur unitair
t_v3		*v_cunit(t_v3 *a);

//retourne la moyenne de a et b
t_v3		v_average(const t_v3 *a, const t_v3 *b);

//retourne le plus grand element du vecteur
double		v_max(const t_v3 *v);
//retourne le plus petit element du vecteur
double		v_min(const t_v3 *v);
//retourne le plus grand element du vecteur absolue
double		v_maxabs(const t_v3 *v);

//imprime name suivie d'une copie de a (utilise printf!!!!)
void		v_nrprint(t_v3 a, const char *name);
//imprime name suivie de a (utilise printf!!!!)
void		v_nprint(const t_v3 *a, const char *name);
//imprime une copie de a (utilise printf!!!!)
void		v_rprint(t_v3 a);
//imprime a (utilise printf!!!!)
void		v_print(const t_v3 *a);

//imprime name suivie d'une copie de a puis d'un retour a la ligne
void		v_nrprintn(t_v3 a, const char *name);
//imprime name suivie de a puis d'un retour a la ligne
void		v_nprintn(const t_v3 *a, const char *name);
//imprime une copie de a puis d'un retour a la ligne
void		v_rprintn(t_v3 a);
//imprime a puis d'un retour a la ligne
void		v_printn(const t_v3 *a);


void		v_normalize(t_v3 *a);
t_v3		v_relative_pos(double height, double width, double x, double y);
void		v_applied(t_v3 *v, double d, double (*f)());
void		v_apply(t_v3 *v, double (*f)());
#endif
