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
extern int fn_8251FA58();
extern int fn_82522ED8();
extern int fn_82545950();
extern int fn_82545A90();
extern int fn_825D6AD8();
extern unsigned int lbl_821C1424;
extern unsigned int lbl_821C5F0C;


void fn_82581140(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  
  *param_1 = &lbl_821C5F0C;
  piVar4 = (int *)param_1[0x37];
  while (piVar4 != (int *)0x0) {
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,1);
      *piVar4 = 0;
    }
    iVar1 = piVar4[1];
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
    }
    piVar2 = (int *)piVar4[5];
    fn_82522ED8(piVar4);
    piVar4 = piVar2;
  }
  param_1[0x37] = 0;
  piVar4 = (int *)param_1[0x38];
  while (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      fn_825D6AD8();
      *piVar4 = 0;
    }
    piVar2 = (int *)piVar4[4];
    fn_82522ED8(piVar4);
    piVar4 = piVar2;
  }
  param_1[0x38] = 0;
  if (param_1[0x39] != 0) {
    fn_8251FA58();
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  piVar4 = param_1 + 2;
  lVar3 = 0x1f;
  do {
    if (*piVar4 != 0) {
      fn_82545950(piVar4);
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  piVar4 = param_1 + 0x21;
  lVar3 = 0x16;
  do {
    if (*piVar4 != 0) {
      fn_82545A90(piVar4);
    }
    lVar3 = lVar3 + -1;
    piVar4 = piVar4 + 1;
  } while (lVar3 != 0);
  *param_1 = &lbl_821C1424;
  return;
}

