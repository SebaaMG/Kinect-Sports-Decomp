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
extern int fn_82517978();
extern int fn_827D50F8();
extern int fn_827D5630();
extern int fn_827D7BD8();
extern int fn_827D7D48();
extern int fn_827D98B8();
extern int fn_827D98C0();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


ulonglong fn_827E15D8(int param_1,undefined8 param_2)

{
  int iVar3;
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar4;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar3 = fn_827D50F8(*(undefined4 *)(param_1 + 0xc));
    if (iVar3 != 0) {
      fn_827D98B8(*(int **)(param_1 + 0x14),0x4c7);
      if (*(int *)(param_1 + 0x20) == 0) {
        uVar1 = fn_827D98C0(*(undefined4 *)(param_1 + 0x14));
        fn_827D7BD8(param_2,uVar1);
      }
      else {
        uStack_30 = 0;
        uStack_2c = 0;
        fn_82517978(&uStack_30,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18)
                          ,0);
        fn_827D7D48(param_2,&uStack_30);
        fn_827D5630(param_2);
      }
      return 0x4c7;
    }
    uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 4))();
    if (((uVar2 & 0xffffffff) == 0x3e5) || ((uVar2 & 0xffffffff) == 0x3e4)) {
      *(undefined4 *)(param_1 + 0x1c) = 1;
      return uVar2;
    }
    if ((uVar2 & 0xffffffff) == 0) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return uVar2;
      }
      goto LAB_827e1770;
    }
    fn_827D98B8(*(undefined4 *)(param_1 + 0x14),uVar2);
    if (*(int *)(param_1 + 0x20) == 0) goto LAB_827e1784;
  }
  else {
    iVar4 = fn_827D50F8(*(undefined4 *)(param_1 + 0xc));
    iVar3 = **(int **)(param_1 + 0x14);
    if (iVar4 == 0) {
      uVar2 = (**(code **)(iVar3 + 0xc))(*(int **)(param_1 + 0x14),param_2);
    }
    else {
      (**(code **)(iVar3 + 0x10))();
      uVar2 = 0x4c7;
    }
    fn_827D98B8(*(undefined4 *)(param_1 + 0x14),uVar2);
    iVar3 = (int)uVar2;
    if (iVar3 == 0x3e5) {
      return uVar2;
    }
    if (iVar3 == 0x3e4) {
      return uVar2;
    }
    if (*(int *)(param_1 + 0x20) == 0) {
      if (iVar3 == 0) {
        return uVar2;
      }
LAB_827e1784:
      uVar1 = fn_827D98C0(*(undefined4 *)(param_1 + 0x14));
      fn_827D7BD8(param_2,uVar1);
      return uVar2;
    }
    if (iVar3 == 0) goto LAB_827e1770;
  }
  uStack_30 = 0;
  uStack_2c = 0;
  fn_82517978(&uStack_30,*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),0);
  fn_827D7D48(param_2,&uStack_30);
LAB_827e1770:
  fn_827D5630(param_2);
  return uVar2;
}

