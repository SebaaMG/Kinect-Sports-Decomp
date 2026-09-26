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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_822DB770();
extern int fn_8265CAA0();


undefined4 * fn_822DC868(undefined4 *param_1,ulonglong param_2,char *param_3,char *param_4)

{
  uint *puVar1;
  bool bVar2;
  int *piVar4;
  ulonglong uVar3;
  char *pcVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [80];
  
  piVar4 = (int *)fn_822DB770(auStack_60);
  uVar3 = fn_822DB770(auStack_50,piVar4);
  puVar1 = (uint *)uVar3;
  if (param_3 != param_4) {
    do {
      uVar8 = uVar3;
      if (8 < (ulonglong)puVar1[2]) {
        uVar8 = (ulonglong)*puVar1;
      }
      uVar6 = puVar1[2] + uVar8;
      uVar9 = uVar6 - uVar8;
      if (0 < (longlong)uVar9) {
        do {
          uVar7 = (longlong)((int)uVar9 >> 1) + (ulonglong)((int)uVar9 < 0 && (uVar9 & 1) != 0);
          if (*(char *)((int)uVar7 + (int)uVar8) < *param_3) {
            uVar8 = uVar7 + uVar8 + 1;
            uVar7 = (uVar9 - uVar7) - 1;
          }
          uVar9 = uVar7;
        } while (0 < (int)uVar7);
      }
      if (((uVar8 & 0xffffffff) == (uVar6 & 0xffffffff)) ||
         (bVar2 = true, *param_3 < *(char *)uVar8)) {
        bVar2 = false;
      }
    } while ((!bVar2) && (param_3 = param_3 + 1, param_3 != param_4));
  }
  if ((8 < puVar1[2]) && (*puVar1 != 0)) {
    fn_8265CAA0();
  }
  if ((8 < (uint)piVar4[2]) && (*piVar4 != 0)) {
    fn_8265CAA0();
  }
  if (param_3 == param_4) {
    *param_1 = param_4;
    param_1[1] = param_4;
  }
  else {
    puVar1 = (uint *)param_2;
    if (puVar1[3] == 0) {
      pcVar5 = param_3;
      do {
        uVar3 = param_2;
        if (8 < (ulonglong)puVar1[2]) {
          uVar3 = (ulonglong)*puVar1;
        }
        uVar9 = puVar1[2] + uVar3;
        uVar8 = uVar9 - uVar3;
        if (0 < (longlong)uVar8) {
          do {
            uVar6 = (longlong)((int)uVar8 >> 1) + (ulonglong)((int)uVar8 < 0 && (uVar8 & 1) != 0);
            if (*(char *)((int)uVar6 + (int)uVar3) < *pcVar5) {
              uVar3 = uVar6 + uVar3 + 1;
              uVar6 = (uVar8 - uVar6) - 1;
            }
            uVar8 = uVar6;
          } while (0 < (int)uVar6);
        }
        if (((uVar3 & 0xffffffff) == (uVar9 & 0xffffffff)) ||
           (bVar2 = true, *pcVar5 < *(char *)uVar3)) {
          bVar2 = false;
        }
      } while ((bVar2) && (pcVar5 = pcVar5 + 1, pcVar5 != param_4));
    }
    else {
      pcVar5 = param_3 + 1;
    }
    *param_1 = param_3;
    param_1[1] = pcVar5;
  }
  return param_1;
}

