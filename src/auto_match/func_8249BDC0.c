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
extern int fn_82298280();
extern int fn_8249B9D0();
extern int fn_8249C358();
extern int fn_82512A48();
extern int fn_8251CD18();
extern int fn_825200A8();
extern int fn_82535298();
extern int fn_82536288();
extern int fn_828647D8();
extern int fn_82864898();
extern int fn_828648F0();
extern int (*lbl_83276798)();


void fn_8249BDC0(int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar4;
  undefined8 uVar3;
  undefined4 auStack_60 [4];
  undefined1 auStack_50 [80];
  
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 == 0) {
    bVar2 = true;
  }
  else {
    if (uVar1 != 1) {
      if (2 < uVar1) {
        return;
      }
      iVar4 = fn_8249C358();
      if (iVar4 != 0) {
        fn_8251CD18(*(undefined4 *)(param_1 + 0x70));
      }
      if (param_2 == 0) {
        if ((*(int *)(param_1 + 0x70) != 0) &&
           (iVar4 = fn_825200A8(*(int *)(param_1 + 0x70),param_1 + 0xe0), iVar4 != 0)) {
          return;
        }
        if (lbl_83276798 == (code *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (*lbl_83276798)();
        }
        if (iVar4 == 0) {
          return;
        }
      }
      goto LAB_8249bf1c;
    }
    if ((param_2 != 0) && (*(int *)(*(int *)(param_1 + 0xb0) + 0x60) != 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x4c) = 0;
      fn_82298280();
    }
    bVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 0x60) == 0;
    if (!bVar2) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x110) + 0x24) != 0) {
      fn_82512A48();
      *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x24) = 0;
    }
    if (*(int *)(param_1 + 0x78) != 0) {
      fn_828648F0(auStack_50,0xffffffff832924b0);
      uVar3 = fn_828647D8();
      auStack_60[0] = *(undefined4 *)(param_1 + 0xd8);
      auStack_60[0] = fn_82535298(auStack_60,uVar3,0xffffffff83296bc0,0xffffffff83296bd0);
      fn_82864898(auStack_50);
      fn_82536288(auStack_60);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
  }
  if (!bVar2) {
    return;
  }
LAB_8249bf1c:
  if (*(int *)(param_1 + 0x88) != 0) {
    *(undefined4 *)(param_1 + 4) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x5c) = 1;
  }
  fn_8249B9D0(param_1,*(undefined4 *)(param_1 + 0x10));
  return;
}

