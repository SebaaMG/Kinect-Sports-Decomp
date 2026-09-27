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
extern unsigned int *auStack_30;
extern int fn_822ABA88();
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;


void fn_823882F0(int param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 auStack_30 [8];
  
  puVar5 = (undefined4 *)param_3;
  puVar6 = (undefined4 *)param_4;
  auStack_30[0] = 0x15;
  auStack_30[1] = 1;
  auStack_30[3] = 2;
  auStack_30[4] = 0x17;
  uVar4 = 0;
  auStack_30[2] = 0x16;
  auStack_30[5] = 3;
  piVar1 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + 4);
  uVar8 = (ulonglong)*(uint *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8);
  if (uVar8 != 0) {
    uVar7 = (ulonglong)*(uint *)(piVar1[4] * 4 + *piVar1);
    do {
      iVar3 = fn_822ABA88(uVar7);
      puVar5 = (undefined4 *)param_3;
      puVar6 = (undefined4 *)param_4;
      if (*(int *)(iVar3 + 0x2e0) == 0x15) {
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        iVar3 = 1 - ((int)(-lbl_83265A28 & ~lbl_83265A28) >> 0x1f);
        goto code_r0x823883ec;
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  iVar3 = (int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) * lbl_82192604);
code_r0x823883ec:
  uVar2 = auStack_30[iVar3 * 2 + 1];
  *param_2 = auStack_30[iVar3 * 2];
  *puVar6 = uVar2;
  *puVar5 = 0;
  return;
}

