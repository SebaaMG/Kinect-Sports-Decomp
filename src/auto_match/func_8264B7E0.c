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
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern int fn_82643B08();
extern int fn_82645110();
extern int fn_826452A8();
extern int fn_82645D88();
extern int fn_82F691F0();


void fn_8264B7E0(int param_1,int param_2,ulonglong param_3,int param_4,int param_5,int param_6,
                  ulonglong param_7)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  byte bVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) & 0xfffffff0 | 2;
  if (*(int *)(param_2 + 8) != 0) {
    iVar3 = KeGetCurrentProcessType();
    puVar8 = __imp__VdGlobalDevice;
    if (iVar3 == 2) {
      puVar8 = __imp__VdGlobalXamDevice;
    }
    if (*(int *)(param_2 + 8) != 0) {
      fn_826452A8(*puVar8,*(int *)(param_2 + 8),0x10,0);
    }
    *(undefined4 *)(param_2 + 8) = 0;
  }
  if (*(int *)(param_2 + 0x98) == 0) {
    iVar3 = KeGetCurrentProcessType();
    puVar8 = __imp__VdGlobalDevice;
    if (iVar3 == 2) {
      puVar8 = __imp__VdGlobalXamDevice;
    }
    uVar9 = *puVar8;
    RtlEnterCriticalSection((ulonglong)uVar9 + 0x3b50);
    (**(code **)(param_2 + 0xb0))(*(undefined4 *)(param_2 + 0xa4));
    RtlLeaveCriticalSection((ulonglong)uVar9 + 0x3b50);
  }
  *(int *)(param_1 + 0x35a0) = param_2;
  *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) & 0xffffff8f;
  *(undefined4 *)(param_2 + 0x7c) = 0;
  *(undefined4 *)(param_2 + 0x80) = 0;
  *(undefined4 *)(param_2 + 0x84) = 0;
  *(undefined4 *)(param_2 + 0x70) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x30) = 4;
  *(undefined4 *)(param_1 + 0x34) = 4;
  *(undefined4 *)(param_1 + 0x3b24) = 8;
  *(undefined4 *)(param_1 + 0x3b18) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar1 = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0x35a4) = 0;
  *(undefined4 *)(param_1 + 0x35a8) = 0;
  *(undefined4 *)(param_1 + 0x35ac) = 0;
  *(undefined4 *)(param_1 + 0x3b14) = uVar1;
  *(undefined4 *)(param_1 + 0x35b0) = 0;
  *(undefined4 *)(param_1 + 0x35b4) = 0;
  *(undefined4 *)(param_1 + 0x35b8) = 0;
  *(byte *)(param_1 + 0x2abd) = *(byte *)(param_1 + 0x2abd) & 0xdf;
  fn_82645110(param_1);
  if (param_4 == 0) {
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
  }
  else {
    puVar7 = (undefined8 *)(param_4 + -8);
    puVar6 = (undefined8 *)(param_2 + 0x10);
    lVar12 = 5;
    do {
      puVar7 = puVar7 + 1;
      puVar6 = puVar6 + 1;
      *puVar6 = *puVar7;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  puVar7 = (undefined8 *)(param_2 + 0x38);
  lVar12 = 5;
  if (param_5 == 0) {
    puVar6 = (undefined8 *)(param_2 + 0x10);
    do {
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  else {
    puVar6 = (undefined8 *)(param_5 + -8);
    do {
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
      *puVar7 = *puVar6;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  *(uint *)(param_2 + 0x6c) =
       (uint)(((param_3 & 0x20) << 3 | (param_3 & 0xffffffff) >> 4 & 1) << 7) |
       *(uint *)(param_2 + 0x6c) & 0xffff7f7f;
  if ((param_3 & 8) == 0) {
    *(undefined4 *)(param_1 + 0x2aa0) = 0x400000;
    uVar9 = *(uint *)(param_2 + 0x6c) & 0xfffffbff;
  }
  else {
    *(undefined4 *)(param_1 + 0x2aa0) = 0xffffffff;
    uVar9 = *(uint *)(param_2 + 0x6c) | 0x400;
  }
  *(uint *)(param_2 + 0x6c) = uVar9;
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(uint *)(param_2 + 0x6c) = uVar9 & 0xfffde7ff;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(byte *)(param_1 + 0x2abf) = *(byte *)(param_1 + 0x2abf) & 0xcf;
  *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) & 0x87;
  if ((param_3 & 3) != 0) {
    if ((param_3 & 2) == 0) {
      *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) | 0x1000;
      *(int *)(param_1 + 0x3484) = param_1;
      *(undefined4 *)(param_1 + 0x3474) = 0;
      *(undefined4 *)(param_1 + 0x3478) = 0x1080;
      *(undefined4 *)(param_1 + 0x347c) = 0;
      *(undefined4 *)(param_1 + 0x3480) = 0;
      *(undefined4 *)(param_1 + 0x3470) = 0;
      fn_82643B08(param_1 + 0x3470);
    }
    else {
      *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) | 0x800;
      *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) | 8;
    }
    uVar9 = 0;
    uVar4 = 0;
    *(int *)(param_1 + 0x327c) = (int)param_7;
    *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) | 0x30;
    if ((param_7 & 0xffffffff) != 0) {
      puVar5 = (uint *)(param_1 + 0x336c);
      puVar10 = (uint *)(param_6 + -0xc);
      puVar8 = (uint *)(param_1 + 0x327c);
      uVar13 = param_7;
      do {
        if (uVar9 <= puVar10[5]) {
          uVar9 = puVar10[5];
        }
        if (uVar4 <= puVar10[6]) {
          uVar4 = puVar10[6];
        }
        puVar8[1] = puVar10[3];
        puVar8[2] = puVar10[4];
        puVar8[3] = puVar10[5];
        puVar8 = puVar8 + 4;
        *puVar8 = puVar10[6];
        puVar5[1] = puVar10[3] & 0xffffffe0;
        puVar10 = puVar10 + 4;
        puVar5 = puVar5 + 2;
        *puVar5 = *puVar10 & 0xffffffe0;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    *(uint *)(param_1 + 0x342c) = uVar9;
    *(uint *)(param_1 + 0x3430) = uVar4;
    *(undefined4 *)(param_1 + 0x3434) = 0;
    *(undefined4 *)(param_1 + 0x3260) = 2;
    if ((param_3 & 0x40) != 0) {
      fn_82645D88(param_1,(param_3 & 0xffffffff) >> 7 & 1,param_7);
      *(uint *)(param_2 + 0x6c) = *(uint *)(param_2 + 0x6c) | 0x20000;
    }
  }
  if ((param_3 & 4) != 0) {
    *(byte *)(param_1 + 0x2abc) = *(byte *)(param_1 + 0x2abc) | 0x40;
    *(uint *)(param_1 + 0x3250) = *(uint *)(param_1 + 0x2934) >> 4 & 7;
    uVar13 = *(ulonglong *)(param_1 + 0x28) | 0x2000000000;
    if (((*(byte *)(param_1 + 0x2abf) & 0x20) != 0) &&
       (*(uint *)(param_1 + 0x3428) != (*(uint *)(param_1 + 0x2880) & 0x3fff))) {
      uVar13 = *(ulonglong *)(param_1 + 0x28) | 0x200002000000000;
    }
    *(ulonglong *)(param_1 + 0x28) = uVar13;
  }
  *(undefined4 *)(param_1 + 0x325c) = 0;
  if ((((*(byte *)(param_1 + 0x2abc) & 8) == 0) && ((*(byte *)(param_1 + 0x2abc) & 4) == 0)) &&
     (*(char *)(param_1 + 0x304b) == '\0')) {
    if ((*(byte *)(param_1 + 0x2abc) & 0x10) == 0) {
      if (((((*(byte *)(param_1 + 0x2abc) & 0x20) == 0) ||
           ((*(int *)(param_1 + 0x3268) != *(int *)(param_1 + 0x3148) &&
            (*(int *)(param_1 + 0x3148) != 0)))) ||
          ((*(int *)(param_1 + 0x326c) != *(int *)(param_1 + 0x314c) &&
           (*(int *)(param_1 + 0x314c) != 0)))) ||
         ((((*(int *)(param_1 + 0x3270) != *(int *)(param_1 + 0x3150) &&
            (*(int *)(param_1 + 0x3150) != 0)) ||
           ((*(int *)(param_1 + 0x3274) != *(int *)(param_1 + 0x3154) &&
            (*(int *)(param_1 + 0x3154) != 0)))) ||
          ((*(int *)(param_1 + 0x3278) != *(int *)(param_1 + 0x3158) &&
           (*(int *)(param_1 + 0x3158) != 0)))))) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
    bVar11 = 1;
    if (bVar2) goto LAB_8264bc90;
  }
  bVar11 = 0;
LAB_8264bc90:
  *(undefined4 *)(param_1 + 0x3254) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3258) = 0;
  *(undefined4 *)(param_1 + 0x2ab4) = 0;
  *(undefined4 *)(param_1 + 0x2ab8) = 0;
  *(byte *)(param_1 + 0x2abc) = bVar11 | *(byte *)(param_1 + 0x2abc) & 0xfe;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x480,0,0x300);
}

