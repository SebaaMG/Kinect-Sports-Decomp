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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_826905F8();
extern int fn_82690708();
extern unsigned int lbl_8200E2B0;


/* WARNING: Removing unreachable block (ram,0x82690d3c) */

ulonglong fn_82690BA0(uint *param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((param_2 & 0xffffffff) < 0x41) {
    if ((param_2 & 0xffffffff) < 0x21) {
      uVar6 = *param_1 >> ((uint)(param_2 - 1) & 0x3f);
      if (uVar6 != 0) {
        if ((uVar6 & 0xffff) == 0) {
          if ((uVar6 & 0xff0000) == 0) {
            uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 >> 0x18] + 0x18;
          }
          else {
            uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 >> 0x10 & 0xff] + 0x10;
          }
        }
        else if ((uVar6 & 0xff) == 0) {
          uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 >> 8 & 0xff] + 8;
        }
        else {
          uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 & 0xff];
        }
        lVar4 = (uVar5 & 0xff) + (param_2 - 1);
        iVar2 = (int)((lVar4 + 1U & 0x3fffffff) << 2);
        piVar1 = *(int **)(iVar2 + (int)param_1);
        uVar5 = ZEXT48(piVar1);
        if (uVar5 == (uint)piVar1[1]) {
          *(undefined4 *)(iVar2 + (int)param_1) = 0;
          *param_1 = *param_1 & ~(1 << ((uint)lVar4 & 0x3f));
        }
        else {
          *(int *)(iVar2 + (int)param_1) = piVar1[1];
          *(int *)(*piVar1 + 4) = piVar1[1];
          *(int *)piVar1[1] = *piVar1;
        }
        if (uVar5 != 0) {
          uVar6 = (uint)*(ushort *)(piVar1 + 3);
          goto code_r0x82690ca4;
        }
      }
      lVar4 = 0;
    }
    else {
      lVar4 = param_2 - 0x21;
    }
    puVar3 = param_1 + 0x21;
    uVar6 = param_1[0x21] >> ((uint)lVar4 & 0x3f);
    if (uVar6 != 0) {
      if ((uVar6 & 0xffff) == 0) {
        if ((uVar6 & 0xff0000) == 0) {
          uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 >> 0x18] + 0x18;
        }
        else {
          uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 >> 0x10 & 0xff] + 0x10;
        }
      }
      else if ((uVar6 & 0xff) == 0) {
        uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 >> 8 & 0xff] + 8;
      }
      else {
        uVar5 = (ulonglong)(byte)(&lbl_8200E2B0)[uVar6 & 0xff];
      }
      lVar4 = (uVar5 & 0xff) + lVar4;
      iVar2 = (int)((lVar4 + 1U & 0x3fffffff) << 2);
      piVar1 = *(int **)(iVar2 + (int)puVar3);
      uVar5 = ZEXT48(piVar1);
      if (uVar5 == (uint)piVar1[1]) {
        *(undefined4 *)(iVar2 + (int)puVar3) = 0;
        *puVar3 = *puVar3 & ~(1 << ((uint)lVar4 & 0x3f));
      }
      else {
        *(int *)(iVar2 + (int)puVar3) = piVar1[1];
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)piVar1[1] = *piVar1;
      }
      if (uVar5 != 0) {
        uVar6 = piVar1[4];
code_r0x82690ca4:
        param_1[99] = param_1[99] - uVar6;
        return uVar5;
      }
    }
  }
  iVar2 = fn_82690708(param_1 + 0x42);
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar5 = (ulonglong)*(uint *)(iVar2 + 4);
    fn_826905F8(param_1 + 0x42);
    if ((uVar5 & 0xffffffff) != 0) {
      param_1[99] = param_1[99] - *(int *)((int)uVar5 + 0x10);
    }
  }
  return uVar5;
}

