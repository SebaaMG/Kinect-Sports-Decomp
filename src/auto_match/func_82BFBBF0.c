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
extern int fn_82A2A618();
extern int fn_82BFBA20();
extern unsigned int uStack_30;
extern U64 storeDoubleWordConditionalIndexed();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82BFBBF0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 in_r7;
  ulonglong uVar6;
  undefined8 in_r8;
  ulonglong uVar7;
  int iVar8;
  ulonglong in_r9;
  ulonglong in_r10;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 in_MSR;
  char in_RESERVE;
  byte in_cr0;
  undefined4 uStack_30;
  
  plVar4 = (longlong *)param_1;
  uVar11 = (ulonglong)*(uint *)(plVar4 + 5);
  lVar9 = param_1 + 0x2c;
  do {
    puVar10 = (uint *)lVar9;
    uVar2 = *puVar10;
    if ((int)uVar2 < 0) break;
    if (uVar2 == 0) {
      return 0;
    }
    if ((int)uVar2 < (int)uVar11) {
      uVar11 = (ulonglong)uVar2;
    }
    sync(1);
    do {
      uVar1 = *puVar10;
      in_r9 = (ulonglong)uVar1;
      if (uVar1 != uVar2) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed(in_r9,0,lVar9);
          *puVar10 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar2 - uVar11,0,lVar9);
        *puVar10 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    in_r8 = in_MSR;
    in_r10 = in_r9;
  } while (uVar1 != uVar2);
  lVar9 = (uVar11 & 0x1fffffff) * 8;
  uVar5 = fn_82BFBA20(*(undefined4 *)(plVar4 + 8),param_1 + 0x20,lVar9,param_1 + 0x34,in_r7,in_r8,
                        in_r9,in_r10);
  if ((uVar5 & 0xffffffff) == 0) {
    *puVar10 = 0;
  }
  else {
    do {
      puVar10 = (uint *)(param_1 + 0x30);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed(uVar11 + *puVar10,0,param_1 + 0x30);
        *puVar10 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar7 = uVar11 - 1;
    uVar5 = (lVar9 + uVar5) - 8;
    iVar8 = (int)uVar7;
    uVar6 = uVar7;
    if (iVar8 != 0) {
      do {
        while( true ) {
          lVar9 = *plVar4;
          uStack_30 = (undefined4)((ulonglong)lVar9 >> 0x20);
          *(undefined4 *)uVar5 = uStack_30;
          sync(1);
          in_RESERVE = '\x01';
          if (*plVar4 == lVar9) break;
          lVar9 = storeDoubleWordConditionalIndexed(*plVar4,0,param_1);
          *plVar4 = lVar9;
        }
        lVar9 = storeDoubleWordConditionalIndexed
                          ((lVar9 + 1U & 0x7fffffff) + (uVar5 << 0x20),0,param_1);
        *plVar4 = lVar9;
        uVar6 = uVar6 - 1;
        in_cr0 = (uVar6 == 0) << 1;
        uVar5 = uVar5 - 8;
      } while (uVar6 != 0);
    }
    if (*(int *)((int)plVar4 + 0x14) != 0) {
      do {
        puVar10 = (uint *)(param_1 + 0x10);
        uVar2 = *puVar10;
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar11 + uVar2,0,param_1 + 0x10);
          *puVar10 = uVar1;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      if (((int)uVar2 < -1) && (0 < iVar8)) {
        uVar11 = ~(ulonglong)uVar2;
        if (iVar8 < (int)uVar11) {
          uVar11 = uVar7;
        }
        fn_82A2A618(*(undefined4 *)((int)plVar4 + 0x14),uVar11,0);
      }
    }
  }
  return uVar5;
}

