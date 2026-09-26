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
extern int fn_82F68CC0();
extern U64 storeWordConditionalIndexed();


ulonglong fn_82BD66F0(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint *puVar11;
  int *piVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  char in_RESERVE;
  byte in_cr0;
  
  lVar10 = param_1 + 0x54;
  do {
    puVar11 = (uint *)lVar10;
    uVar1 = *puVar11;
    if (uVar1 != 1) {
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar10);
        *puVar11 = uVar4;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar4 = storeWordConditionalIndexed(2,0,lVar10);
      *puVar11 = uVar4;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  uVar13 = 0;
  if (((uVar1 == 1) && (iVar5 = (int)param_1, uVar13 = param_3, *(int *)(iVar5 + 0xc) != 0)) &&
     (bVar6 = (*(uint *)(iVar5 + 0xd0) & 0xf0000) == 0, in_cr0 = bVar6 << 1, !bVar6)) {
    param_1 = param_1 + 0x50;
    uVar13 = 0;
    uVar7 = KfAcquireSpinLock(param_1);
    piVar15 = *(int **)(iVar5 + 0x40);
    piVar12 = (int *)(iVar5 + 0x40);
    for (uVar14 = 0; (piVar15 != (int *)0x0 && ((uVar14 & 0xffffffff) < (param_3 & 0xffffffff)));
        uVar14 = ((ulonglong)*(uint *)(iVar2 + 0xc) - (ulonglong)*(uint *)(iVar2 + 4)) + uVar14) {
      iVar2 = *piVar15;
      piVar15 = (int *)piVar15[1];
    }
    KfReleaseSpinLock(param_1,uVar7);
    if ((param_3 & 0xffffffff) <= (uVar14 & 0xffffffff)) {
      piVar15 = (int *)*piVar12;
      while (((piVar15 != (int *)0x0 && ((uVar13 & 0xffffffff) < (param_3 & 0xffffffff))) &&
             (*puVar11 != 3))) {
        iVar2 = *piVar15;
        uVar8 = (ulonglong)*(uint *)(iVar2 + 0xc) - (ulonglong)*(uint *)(iVar2 + 4);
        uVar14 = param_3 - uVar13;
        if ((uVar8 & 0xffffffff) <= (param_3 - uVar13 & 0xffffffff)) {
          uVar14 = uVar8;
        }
        fn_82F68CC0((ulonglong)*(uint *)(iVar2 + 8) + (ulonglong)*(uint *)(iVar2 + 4),
                     uVar13 + param_2,uVar14);
        iVar2 = *piVar15;
        uVar9 = *(uint *)(iVar2 + 4) + uVar14;
        uVar8 = (ulonglong)*(uint *)(iVar2 + 0xc);
        if ((uVar9 & 0xffffffff) < (ulonglong)*(uint *)(iVar2 + 0xc)) {
          uVar8 = uVar9;
        }
        *(int *)(iVar2 + 4) = (int)uVar8;
        if ((uVar8 & 0xffffffff) == (ulonglong)*(uint *)(*piVar15 + 0xc)) {
          uVar7 = KfAcquireSpinLock(param_1);
          piVar3 = (int *)*piVar12;
          if (piVar3 != (int *)0x0) {
            if (piVar3 == *(int **)(iVar5 + 0x44)) {
              *(undefined4 *)(iVar5 + 0x44) = 0;
            }
            *piVar12 = piVar3[1];
            piVar3[1] = 0;
          }
          if (piVar15 == piVar3) {
            piVar15[1] = 0;
            if (*(int *)(iVar5 + 0x4c) == 0) {
              *(int **)(iVar5 + 0x48) = piVar15;
            }
            else {
              *(int **)(*(int *)(iVar5 + 0x4c) + 4) = piVar15;
            }
            *(int **)(iVar5 + 0x4c) = piVar15;
          }
          KfReleaseSpinLock(param_1,uVar7);
          piVar15 = (int *)*piVar12;
        }
        uVar13 = uVar14 + uVar13;
      }
    }
  }
  do {
    uVar14 = (ulonglong)*puVar11;
    if (*puVar11 != 3) {
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar14,0,lVar10);
        *puVar11 = uVar1;
        in_cr0 = 2;
      }
      break;
    }
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(0,0,lVar10);
      *puVar11 = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  do {
    if ((int)uVar14 == 3) {
      return uVar13;
    }
    do {
      uVar1 = *puVar11;
      if (uVar1 != 2) {
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((ulonglong)uVar1,0,lVar10);
          *puVar11 = uVar4;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(1,0,lVar10);
        *puVar11 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 == 2) {
      return uVar13;
    }
    if (uVar1 == 1) {
      return uVar13;
    }
    if (uVar1 == 0) {
      return uVar13;
    }
    do {
      uVar14 = (ulonglong)*puVar11;
      if (*puVar11 != 3) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed(uVar14,0,lVar10);
          *puVar11 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(0,0,lVar10);
        *puVar11 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  } while( true );
}

