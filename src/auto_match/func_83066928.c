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
extern unsigned int *auStack_60;
extern int fn_82810280();
extern int fn_8305D618();
extern int fn_8305D680();
extern int fn_8305D688();
extern int fn_83066788();
extern unsigned int lbl_821AAD20;


char fn_83066928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 *param_5)

{
  int iVar2;
  undefined8 uVar1;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auStack_60 [96];
  
  iVar4 = 0;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  lVar8 = 0;
  iVar2 = fn_8305D680(param_3);
  if (0 < iVar2) {
    do {
      fn_8305D688(param_3,lVar8,auStack_60);
      iVar2 = fn_83066788(param_1,param_2,auStack_60);
      if (iVar2 == 0) {
        iVar5 = iVar5 + 1;
      }
      else if (iVar2 == 1) {
        iVar6 = iVar6 + 1;
      }
      else {
        iVar7 = iVar7 + 1;
      }
      lVar8 = lVar8 + 1;
      iVar2 = fn_8305D680(param_3);
    } while ((int)lVar8 < iVar2);
    if (iVar7 != 0) {
      if (iVar5 == 0) {
        if (iVar6 == 0) goto LAB_83066a08;
      }
      else if (iVar6 == 0) {
        return '\x05';
      }
      if (iVar5 == 0) {
        return '\x06';
      }
    }
  }
LAB_83066a08:
  lVar8 = 0;
  iVar2 = fn_8305D680(param_3);
  if (0 < iVar2) {
    do {
      fn_8305D688(param_3,lVar8,auStack_60);
      iVar2 = fn_83066788(param_1,param_2,auStack_60);
      if (iVar2 == 1) {
        if (0 < iVar4) {
          return '\x03';
        }
        iVar4 = iVar4 + -1;
      }
      else if (iVar2 == 0) {
        if (iVar4 < 0) {
          return '\x03';
        }
        iVar4 = iVar4 + 1;
      }
      lVar8 = lVar8 + 1;
      iVar2 = fn_8305D680(param_3);
    } while ((int)lVar8 < iVar2);
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = iVar4 == 0;
  }
  if (iVar4 == 0) {
    uVar1 = fn_8305D618(param_3);
    dVar9 = (double)fn_82810280(param_2,uVar1);
    cVar3 = '\x01';
    if (dVar9 <= (double)lbl_821AAD20) {
      cVar3 = '\x02';
    }
  }
  else {
    cVar3 = ((int)LZCOUNT(iVar4) == 0) + '\x01';
  }
  return cVar3;
}

