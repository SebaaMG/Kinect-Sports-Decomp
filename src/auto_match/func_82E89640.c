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
extern int fn_82BA02A8();
extern int fn_82E85580();
extern int fn_82E86A10();
extern int fn_82E88BE8();
extern int fn_82E89078();
extern int fn_82EDAA10();
extern int fn_82F02410();
extern int fn_82F025F0();
extern int fn_82F0F900();
extern int fn_82F0F9A0();
extern int fn_82F10A48();
extern int fn_82F150C8();
extern int fn_82F1BC18();
extern int fn_82F23CE8();
extern int fn_82F23DD0();
extern int fn_82F691F0();
extern unsigned int lbl_8215F67C;
extern unsigned int lbl_8215F68C;


void fn_82E89640(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x6f98) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1ebc) + 0x10) != 0x20) {
      param_6 = (((ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 4) & 0xfffffffc) + 4 &
                0x1fffffff) << 3;
    }
    *(undefined4 *)(param_1 + 0x6fc8) = 0;
    *(undefined4 *)(param_1 + 0x6fa8) = 0;
    *(undefined4 *)(param_1 + 0x6fa4) = 0;
    *(undefined4 *)(param_1 + 0x6fa0) = 0;
    *(undefined4 *)(param_1 + 0x6f9c) = 0;
    *(undefined4 *)(param_1 + 0x6fc0) = 0;
    *(undefined4 *)(param_1 + 0x6fc4) = 0;
    *(undefined4 *)(param_1 + 0x6fbc) = 0;
    *(undefined4 *)(param_1 + 0x6fd8) = 0;
    *(undefined4 *)(param_1 + 0x6fd4) = 0;
    *(undefined4 *)(param_1 + 0x6fd0) = 0;
    *(undefined4 *)(param_1 + 0x6fdc) = 0;
    *(undefined4 *)(param_1 + 0x6fcc) = 0;
    *(undefined4 *)(param_1 + 0x75dc) = 0;
    *(undefined4 *)(param_1 + 0x75d4) = 0;
    *(undefined4 *)(param_1 + 0x75cc) = 0;
    *(undefined4 *)(param_1 + 0x75c4) = 0;
    *(undefined4 *)(param_1 + 0x75e4) = 0;
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x7004,0,0x1f8,param_4,param_5,param_6);
  }
  if (*(int *)(param_1 + 0x6f90) != 0) {
    *(undefined4 *)(param_1 + 0x75f8) = 0;
  }
  if (((*(int *)(param_1 + 0x630) == 0) || (*(int *)(param_1 + 0xaf0) == 1)) ||
     (*(int *)(param_1 + 0xaf0) == 2)) {
    fn_82F10A48(param_1);
  }
  if (*(int *)(param_1 + 0x1a80) != 0) {
    iVar3 = *(int *)(param_1 + 0xa1c) * 4;
    iVar5 = *(int *)(&lbl_8215F68C + iVar3);
    *(int *)(param_1 + 0xa24) = iVar5;
    iVar4 = 1 << (iVar5 - 1U & 0x3f);
    iVar5 = *(int *)(&lbl_8215F67C + iVar3);
    *(int *)(param_1 + 0xa2c) = iVar4;
    *(int *)(param_1 + 0x1aec) = iVar4 >> 2;
    *(int *)(param_1 + 0xa28) = iVar5;
    iVar5 = 1 << (iVar5 - 1U & 0x3f);
    *(int *)(param_1 + 0xa30) = iVar5;
    *(int *)(param_1 + 0x1af0) = iVar5 >> 2;
    *(int *)(param_1 + 0x1af4) = iVar4 >> 3;
    *(int *)(param_1 + 0xa34) = iVar4 * 2 + -1;
    *(int *)(param_1 + 0xa38) = iVar5 * 2 + -1;
    *(int *)(param_1 + 0x1af8) = iVar5 >> 3;
  }
  if (*(int *)(param_1 + 4) == 8) {
    if (*(int *)(param_1 + 0x8e0) != 0) {
      *(int *)(param_1 + 0x900) = (int)param_2;
    }
    if ((*(int *)(param_1 + 0x7b38) == 0) || (*(int *)(param_1 + 0x6de8) != 1)) {
      if (*(int *)(param_1 + 0x4fc) != 0) {
        fn_82E85580(param_1);
      }
      if (*(int *)(param_1 + 0x6d54) == 0) {
        if (*(int *)(param_1 + 0x202c) != 0) {
          fn_82E86A10();
          return;
        }
        fn_82E89078(param_1,param_2);
      }
      else if (*(int *)(param_1 + 0x7b38) == 0) {
        if (*(int *)(param_1 + 0x202c) != 0) {
          fn_82BA02A8(param_1);
          return;
        }
        fn_82BA02A8(param_1,param_2);
      }
      else {
        *(undefined4 *)(param_1 + 0x6dec) = *(undefined4 *)(param_1 + 0xaf0);
        fn_82BA02A8(param_1);
        fn_82BA02A8(param_1,param_2);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x6df0) = *(undefined4 *)(param_1 + 0xaf0);
      fn_82BA02A8(param_1);
      fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
      *(int *)(param_1 + 0xae8) =
           (int)((0x27 - (ulonglong)*(uint *)(*(int *)(param_1 + 0x1ebc) + 0x10) & 0xffffffff) >> 3)
           + *(int *)(*(int *)(param_1 + 0x1ebc) + 4);
      fn_82BA02A8(param_1,param_2);
    }
  }
  else {
    fn_82E88BE8(param_1,param_2);
  }
  *(undefined4 *)(param_1 + 0x608) = 1;
  if ((*(int *)(param_1 + 0x630) == 0) ||
     ((*(int *)(param_1 + 0xaf0) != 0 && (*(int *)(param_1 + 0xaf0) != 4)))) {
    if (*(int *)(param_1 + 0x644) != 0) {
      if (*(int *)(param_1 + 4) == 6) {
        fn_82F23CE8(param_1);
      }
      else if (*(int *)(param_1 + 4) == 8) {
        fn_82F23DD0(param_1);
      }
    }
    if (*(int *)(param_1 + 0x6f98) != 0) {
      iVar5 = *(int *)(*(int *)(param_1 + 0x1ebc) + 0x10);
      uVar2 = *(uint *)(*(int *)(param_1 + 0x1ebc) + 4);
      if (iVar5 == 0x20) {
        iVar5 = uVar2 << 3;
      }
      else {
        iVar5 = ((uVar2 & 0xfffffffc) + 4) * 8 - iVar5;
      }
      *(int *)(param_1 + 0x75ec) = iVar5;
    }
    if ((*(int *)(param_1 + 0xaf0) == 0) || (*(int *)(param_1 + 0xaf0) == 4)) {
      if ((*(int *)(param_1 + 0x6d54) == 0) || (*(int *)(param_1 + 0x7b38) != 0)) {
        fn_82EDAA10(param_1,*(undefined4 *)(param_1 + 0xd4c));
      }
      else {
        fn_82BA02A8();
      }
    }
    else if (*(int *)(param_1 + 0x6d54) == 0) {
      fn_82F1BC18(param_1);
    }
    else if (*(int *)(param_1 + 0x7b38) == 0) {
      fn_82BA02A8(param_1);
    }
    else {
      fn_82BA02A8(param_1);
    }
    if ((*(int *)(param_1 + 0x7b38) == 0) && (*(int *)(param_1 + 0x1a50) == 0)) {
      return;
    }
    if ((*(int *)(param_1 + 4) != 8) && (*(int *)(param_1 + 0x880) != 0)) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x884),2);
    }
    if (*(int *)(param_1 + 0x7b38) == 0) {
      bVar1 = *(int *)(param_1 + 0xb08) == 0;
    }
    else {
      bVar1 = *(int *)(param_1 + 0x6de8) == 1;
    }
    if (!bVar1) goto LAB_82e89a94;
  }
  else {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(uint *)(param_1 + 0x2ec) & 1,1);
    fn_82F150C8(*(undefined4 *)(param_1 + 0x1c18),*(undefined4 *)(param_1 + 0x1ebc));
    if (*(int *)(param_1 + 0x880) != 0) {
      fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*(undefined4 *)(param_1 + 0x884),2);
    }
  }
  fn_82F025F0(*(undefined4 *)(param_1 + 0x1ebc));
LAB_82e89a94:
  iVar5 = *(int *)(param_1 + 0xaf0);
  if (((iVar5 == 1) || (iVar5 == 0)) ||
     (((iVar5 == 2 || (iVar5 == 4)) &&
      (((*(int *)(param_1 + 0x6d54) != 0 && (*(int *)(param_1 + 0x7b38) != 0)) &&
       (*(int *)(param_1 + 0x6de8) == 0)))))) {
    fn_82F0F900(param_1);
    fn_82F0F9A0(param_1,0x17);
  }
  return;
}

