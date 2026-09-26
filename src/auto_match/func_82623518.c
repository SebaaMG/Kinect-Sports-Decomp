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
extern int fn_82BFE128();
extern U64 storeWordConditionalIndexed();


/* WARNING: Removing unreachable block (ram,0x82623438) */

void fn_82623518(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  
  for (puVar12 = *(undefined4 **)(param_1 + 0x10); puVar12 != *(undefined4 **)(param_1 + 0x14);
      puVar12 = puVar12 + 3) {
    uVar1 = *(uint *)(param_1 + 0xc);
    lVar10 = 4;
    iVar5 = puVar12[1];
    uVar2 = puVar12[2];
    uVar3 = *puVar12;
    uVar11 = (ulonglong)uVar1;
    do {
      piVar4 = (int *)*(int *)uVar11;
      if ((piVar4[1] == uVar2) && (*piVar4 == iVar5)) {
        fn_82BFE128(piVar4[4],uVar3,param_3,param_4,param_5);
        param_5 = in_MSR;
        lVar7 = (ulonglong)uVar1 + 0x20;
        do {
          puVar8 = (uint *)lVar7;
          if (in_RESERVE != '\0') {
            uVar6 = storeWordConditionalIndexed((ulonglong)*puVar8 - (ulonglong)uVar2,0,lVar7);
            *puVar8 = uVar6;
            in_cr0 = 2;
          }
          in_MSR = param_5;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
      lVar10 = lVar10 + -1;
      in_cr0 = (lVar10 == 0) << 1;
      uVar11 = uVar11 + 4;
    } while (lVar10 != 0);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (iVar5 != *(int *)(param_1 + 0x14)) {
    for (iVar9 = iVar5; iVar9 != *(int *)(param_1 + 0x14); iVar9 = iVar9 + 0xc) {
    }
    *(int *)(param_1 + 0x14) = iVar5;
  }
  return;
}

