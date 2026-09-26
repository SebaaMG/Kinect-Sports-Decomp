typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82275128();
extern int fn_82533578();
extern int fn_82539560();
extern unsigned int lbl_82191F78;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83265A58;
extern unsigned int lbl_83265A5C;


undefined8
fn_82278030(double param_1,float *param_2,undefined8 param_3,undefined8 param_4,longlong param_5)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  
  if ((int)param_5 < 0) {
    return 0;
  }
  if (1 < (int)param_5) {
    return 0;
  }
  dVar5 = (double)lbl_821CC160;
  if ((((param_2[0xd] == 0.0) || (iVar4 = fn_82275128(), dVar5 <= (double)*(float *)(iVar4 + 0xc))
       ) || (lbl_83265A58 == 1)) ||
     ((lbl_83265A5C != 0 ||
      (SQRT((param_2[1] - param_2[5]) * (param_2[1] - param_2[5]) +
            (*param_2 - param_2[4]) * (*param_2 - param_2[4])) < lbl_82192480)))) {
    *(float *)((int)((param_5 + 0xfU & 0xffffffff) << 2) + (int)param_2) = (float)dVar5;
    return 0;
  }
  iVar4 = fn_82533578(param_2,param_2 + 2,param_2 + 4,param_3);
  if (iVar4 == 0) {
    iVar4 = fn_82533578(param_2,param_2 + 4,param_2 + 6);
    bVar2 = false;
    if (iVar4 == 0) goto LAB_82278138;
  }
  bVar2 = true;
LAB_82278138:
  fVar3 = lbl_82191F78;
  iVar4 = (int)((param_5 + 0xfU & 0x3fffffff) << 2);
  if (bVar2) {
    fVar1 = (float)((double)*(float *)(iVar4 + (int)param_2) + param_1);
    *(float *)(iVar4 + (int)param_2) = fVar1;
    if (fVar1 < fVar3) {
      bVar2 = false;
    }
  }
  else {
    *(float *)(iVar4 + (int)param_2) = (float)dVar5;
  }
  if (!bVar2) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_82539560((double)(*(float *)(iVar4 + (int)param_2) - fVar3),dVar5,(double)lbl_821CA460,dVar5);
}

