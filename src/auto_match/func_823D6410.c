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
extern unsigned int *auStack_f0;
extern int fn_823D6368();
extern int fn_823D6528();
extern int fn_823D6F20();
extern int fn_82F68CC0();
extern unsigned int iStack_f4;


void fn_823D6410(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iStack_f4;
  undefined4 auStack_f0 [28];
  undefined1 auStack_80 [128];
  
  piVar3 = &iStack_f4;
  *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  lVar9 = 0xe;
  uVar7 = 0;
  do {
    piVar3[1] = 0;
    piVar3 = piVar3 + 2;
    *piVar3 = 0;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  uVar4 = 0;
  piVar3 = &iStack_f4;
  piVar5 = (int *)(param_1 + 0x30);
  uVar8 = 1;
  do {
    if (*piVar5 == 1) {
      uVar2 = fn_823D6368(auStack_80);
      fn_82F68CC0(piVar5 + -0xc,uVar2,0x40);
    }
    else if (*piVar5 == 2) {
      if ((1 << (uVar4 & 0x3f) & *(uint *)(param_1 + 0x3b8)) != 0) {
        iVar1 = piVar5[1];
        uVar7 = uVar7 + 1;
        piVar3[1] = uVar4;
        piVar3 = piVar3 + 2;
        *piVar3 = iVar1;
      }
      *piVar5 = 1;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 0x10;
  } while (uVar4 < 0xe);
  if ((uVar7 != 0) &&
     (fn_823D6F20(auStack_f0,auStack_f0 + uVar7 * 2,
                        (int)(auStack_f0 + uVar7 * 2) - (int)auStack_f0 >> 3,0xffffffff823d63f8),
     1 < uVar7)) {
    puVar6 = auStack_f0;
    do {
      puVar6 = puVar6 + 2;
      fn_823D6528(param_1,*puVar6,auStack_f0,uVar8);
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  return;
}

