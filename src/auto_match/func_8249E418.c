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
extern int fn_82F4DA20();
extern int fn_82F4EBC0();
extern int fn_82F4ECF8();
extern int fn_82F4EFF8();
extern unsigned int lbl_82186E64;
extern unsigned int lbl_8327F880;


void fn_8249E418(int param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char cVar6;
  int iVar4;
  int iVar5;
  uint uVar7;
  
  if (1 < *(int *)(param_1 + 0xc4)) {
    return;
  }
  iVar4 = *(int *)(param_1 + 200);
  fVar2 = lbl_8327F880 * lbl_82186E64 * lbl_8327F880 * lbl_82186E64;
  if (iVar4 == 1) {
    fVar1 = *(float *)((*(int *)(param_1 + 0xcc) + 0x2e) * 4 + param_1);
  }
  else {
    if (iVar4 != 2) goto LAB_8249e48c;
    if (*(float *)(param_1 + 0xb8) < fVar2) {
      return;
    }
    fVar1 = *(float *)(param_1 + 0xbc);
  }
  if (fVar1 < fVar2) {
    return;
  }
LAB_8249e48c:
  if ((*(int *)(param_1 + 0xc0) != 0) && (0 < iVar4)) {
    uVar7 = *(uint *)(param_1 + 0xcc);
    if ((iVar4 == 2) && (uVar7 = 0, *(float *)(param_1 + 0xbc) < *(float *)(param_1 + 0xb8))) {
      uVar7 = 1;
    }
    lVar3 = fn_82F4EBC0(uVar7 & 0xff);
    if ((lVar3 != 0) && (cVar6 = fn_82F4EFF8(lVar3), cVar6 != '\0')) {
      iVar4 = fn_82F4DA20(2);
      iVar5 = fn_82F4ECF8(lVar3);
      if (*(int *)(iVar5 * 0x1c0 + iVar4 + 0x34) == *(int *)(param_1 + 0xc0)) {
        return;
      }
    }
  }
  if ((((*(int *)(param_1 + 0x14) != 0) &&
       (iVar4 = *(int *)(*(int *)(param_1 + 0x14) + 0xd54), iVar4 != -0x10)) &&
      (*(int *)(iVar4 + 0x18) == 0)) && (iVar5 = *(int *)(iVar4 + 0x14), iVar5 != 0)) {
    uVar7 = (uint)(*(int *)(iVar5 + 8) == 9);
    if (*(int *)(iVar5 + 0x2c) != 0) {
      uVar7 = (uint)LZCOUNT(*(undefined4 *)(*(int *)(iVar5 + 0x2c) + 0x2c)) >> 5 & uVar7;
    }
    if (((((uVar7 != 0) && (iVar4 != -0x10)) &&
         ((*(int *)(iVar4 + 0x14) != 0 &&
          ((*(int *)(iVar4 + 0x18) == 0 &&
           (iVar4 = *(int *)(*(int *)(iVar4 + 0x14) + 0x18), iVar4 != 0)))))) &&
        (*(int *)(iVar4 + 0xe8) != 0)) &&
       (*(int *)(*(int *)(*(int *)(iVar4 + 0xd4) + 0x18) + 0xc) == 0)) {
      *(undefined4 *)(iVar4 + 0xec) = 1;
    }
  }
  return;
}

