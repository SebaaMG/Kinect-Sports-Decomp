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
extern unsigned int *auStack_80;
extern int fn_828F0AE0();


longlong fn_828F0B58(undefined8 param_1,undefined8 param_2,char *param_3,ulonglong param_4,
                      undefined4 *param_5,undefined4 *param_6,undefined4 *param_7,
                      undefined1 *param_8)

{
  bool bVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  longlong lVar7;
  int *piStack_90;
  int *piStack_8c;
  int *piStack_88;
  char *pcStack_84;
  undefined1 auStack_80 [128];
  
  piStack_88 = (int *)0x0;
  piStack_90 = (int *)0x0;
  piStack_8c = (int *)0x0;
  if (param_8 == (undefined1 *)0x0) {
    lVar7 = 8;
    ppiVar3 = &piStack_88;
    do {
      ppiVar5 = ppiVar3;
      ppiVar3 = ppiVar5 + 2;
      ppiVar3[0] = (int *)0x0;
      ppiVar3[1] = (int *)0x0;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    ppiVar5[4] = (int *)0x0;
    param_8 = auStack_80;
  }
  bVar1 = false;
  if (((param_3 != (char *)0x0) && (*param_3 != 'v')) && (*param_3 != 'p')) {
    bVar1 = true;
    param_4 = param_4 | 0x100000;
  }
  pcStack_84 = param_3;
  if ((bVar1) || ((param_4 & 0x100000) != 0)) {
    lVar7 = fn_828F0AE0(param_1,param_2,&pcStack_84,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    lVar7 = fn_828F0AE0(param_1,param_2,&pcStack_84,param_4,&piStack_88,&piStack_90,&piStack_8c,
                          param_8);
    piVar2 = piStack_90;
    piVar6 = piStack_8c;
    piVar4 = piStack_88;
    if (-1 < lVar7) {
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = piStack_8c;
        piVar6 = (int *)0x0;
      }
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = piStack_88;
        piVar4 = (int *)0x0;
      }
    }
    if (param_6 != (undefined4 *)0x0) {
      piStack_90 = (int *)0x0;
      *param_6 = piVar2;
    }
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 8))();
    }
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    if (piStack_90 != (int *)0x0) {
      (**(code **)(*piStack_90 + 8))(piStack_90);
    }
  }
  return lVar7;
}

