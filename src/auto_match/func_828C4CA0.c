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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_828C4508();
extern unsigned int uStack00000010;
extern unsigned int uStack00000018;
extern unsigned int uStack_68;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_80;


void fn_828C4CA0(ulonglong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  ulonglong uStack00000010;
  undefined8 uStack00000018;
  undefined1 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uStack00000010 = ((((U64)(uStack00000010)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_1)) & ((U64)0xFFFFFFFF)) << 32));
  uStack00000018 = ((((U64)(uStack00000018)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)param_2)) & ((U64)0xFFFFFFFF)) << 32));
  uVar4 = (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF);
  if ((((U64)(uStack00000010) >> 32) & 0xFFFFFFFF) != (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF)) {
    uVar14 = (((U64)(uStack00000010) >> 32) & 0xFFFFFFFF) + 1;
    uStack_70 = ((((U64)(uStack_70)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((int)(param_1 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    iVar5 = (((U64)(uStack_70) >> 0) & 0xFFFFFFFF);
    uStack_70 = CONCAT44((((U64)(uStack_70) >> 0) & 0xFFFFFFFF),uVar14);
    if (uVar14 != (((U64)(uStack00000018) >> 32) & 0xFFFFFFFF)) {
      uVar3 = (ulonglong)((((U64)(uStack00000010) >> 32) & 0xFFFFFFFF) >> 2);
      puVar13 = (uint *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 8);
      piVar12 = (int *)((((U64)(uStack_70) >> 0) & 0xFFFFFFFF) + 4);
      uStack00000010 = param_1;
      uStack00000018 = param_2;
      do {
        uVar11 = uVar14 >> 2;
        uVar7 = *puVar13;
        if (uVar7 <= uVar11) {
          uVar11 = uVar11 - uVar7;
        }
        iVar2 = *(int *)(*(int *)(uVar11 * 4 + *piVar12) + (uVar14 & 3) * 4);
        uVar9 = uVar3;
        if (*(uint *)(iVar5 + 8) <= uVar3) {
          uVar9 = uVar3 - *(uint *)(iVar5 + 8);
        }
        uStack_78 = ((((U64)(uStack_78)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((undefined4)((ulonglong)uStack_70 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
        if (*(uint *)(iVar2 + 8) <
            *(uint *)(*(int *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(iVar5 + 4)) +
                              (int)((param_1 & 3) << 2)) + 8)) {
          uStack_78 = CONCAT44((((U64)(uStack_78) >> 0) & 0xFFFFFFFF),uVar14 + 1);
          fn_828C4508(&uStack_68,param_1,uStack_70,uStack_78,uStack_80);
          uVar9 = uVar3;
          if (*(uint *)(iVar5 + 8) <= uVar3) {
            uVar9 = uVar3 - *(uint *)(iVar5 + 8);
          }
          *(int *)(*(int *)((int)((uVar9 & 0xffffffff) << 2) + *(int *)(iVar5 + 4)) +
                  (int)((param_1 & 3) << 2)) = iVar2;
        }
        else {
          uStack_68 = uStack_70;
          uVar6 = uStack_68;
          uStack_68 = ((((U64)(uStack_68)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uStack_70)) & ((U64)0xFFFFFFFF)) << 32));
          uVar7 = (((U64)(uStack_68) >> 32) & 0xFFFFFFFF);
          uStack_68 = uVar6;
          while( true ) {
            uVar6 = uStack_68;
            uVar7 = uVar7 - 1;
            uVar8 = (ulonglong)*puVar13;
            uVar9 = (ulonglong)(uVar7 >> 2);
            uStack_68 = CONCAT44((((U64)(uStack_68) >> 0) & 0xFFFFFFFF),uVar7);
            uVar10 = uVar9;
            if (uVar8 <= uVar9) {
              uVar10 = uVar9 - uVar8;
            }
            iVar1 = *piVar12;
            uStack_78 = ((((U64)(uStack_78)) & (~(((U64)0xFFFFFFFF) << 32))) | ((((U64)((uint)uVar6)) & ((U64)0xFFFFFFFF)) << 32));
            if (*(uint *)(*(int *)(*(int *)((int)((uVar10 & 0xffffffff) << 2) + iVar1) +
                                  (int)(((ulonglong)uVar7 & 3) << 2)) + 8) <= *(uint *)(iVar2 + 8))
            break;
            if (uVar8 <= uVar9) {
              uVar9 = uVar9 - uVar8;
            }
            uVar11 = (((U64)(uStack_78) >> 32) & 0xFFFFFFFF) >> 2;
            if (*(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar11) {
              uVar11 = uVar11 - *(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
            }
            *(undefined4 *)
             (*(int *)(*(int *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4) + uVar11 * 4) + ((((U64)(uStack_78) >> 32) & 0xFFFFFFFF) & 3) * 4) =
                 *(undefined4 *)
                  (*(int *)((int)((uVar9 & 0xffffffff) << 2) + iVar1) +
                  (int)(((ulonglong)uVar7 & 3) << 2));
          }
          uVar7 = (((U64)(uStack_78) >> 32) & 0xFFFFFFFF) >> 2;
          if (*(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8) <= uVar7) {
            uVar7 = uVar7 - *(uint *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 8);
          }
          *(int *)(*(int *)(uVar7 * 4 + *(int *)((((U64)(uStack_68) >> 0) & 0xFFFFFFFF) + 4)) + ((((U64)(uStack_78) >> 32) & 0xFFFFFFFF) & 3) * 4)
               = iVar2;
        }
        uVar14 = uVar14 + 1;
        uStack_70 = CONCAT44((((U64)(uStack_78) >> 0) & 0xFFFFFFFF),uVar14);
      } while (uVar14 != uVar4);
    }
  }
  return;
}

