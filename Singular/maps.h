#ifndef MAPS_H
#define MAPS_H
/****************************************
*  Computer Algebra System SINGULAR     *
****************************************/
/*
* ABSTRACT
*/
/* $Log: not supported by cvs2svn $
*/
#include "structs.h"

poly maEval(map theMap, poly p, int varnum, matrix s=NULL);
map maCopy(map theMap);

ideal maGetPreimage(ring theImageRing, map theMap,ideal id);

poly maIMap(ring r, poly p);

BOOLEAN maApplyFetch(int what,map theMap,leftv res, leftv w,
                     int *perm,int N,
                     int *par_perm,int P);
void maFindPerm(char **preim_names, int preim_n, char **preim_par,
                 char **names, int n, char ** par, int nop,
                 int * perm, int *par_perm);
#endif
