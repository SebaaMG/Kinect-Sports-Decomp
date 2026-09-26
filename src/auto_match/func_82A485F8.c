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
extern int fn_82A3FF60();
extern int fn_82A44370();
extern int fn_82A443F0();
extern int fn_82A4F4E0();
extern int fn_82BFE128();
extern int fn_82F68CC0();


longlong fn_82A485F8(int param_1,undefined8 param_2)

{
  int iVar2;
  longlong lVar1;
  
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 8))(*(int *)(param_1 + 0x34) + 0x2c);
  fn_82A443F0(param_1);
  iVar2 = fn_82A3FF60(0xffffffff83219d50,0x24,0x20970002,0);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    fn_82F68CC0(iVar2,param_2,0x24);
  }
  if (iVar2 != 0) {
    if (((*(int *)(iVar2 + 0x1c) != 0) && (*(int *)(iVar2 + 0x18) == 0)) &&
       (*(int *)(iVar2 + 0x10) != 0)) {
      *(int *)(iVar2 + 0x18) =
           (*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x14)) + *(int *)(iVar2 + 0x10);
    }
    lVar1 = fn_82BFE128(*(undefined4 *)(param_1 + 0x1ec),iVar2);
    if (lVar1 < 0) {
      fn_82A4F4E0(iVar2);
      goto LAB_82a48704;
    }
    iVar2 = fn_82A44370(param_1 + 0x94,*(undefined4 *)(iVar2 + 0x20));
    if (iVar2 != 0) {
      lVar1 = (**(code **)(**(int **)(param_1 + 0x90) + 0x34))(*(int **)(param_1 + 0x90),0x100);
      goto LAB_82a48704;
    }
  }
  lVar1 = -0x7ff8fff2;
LAB_82a48704:
  (**(code **)(*(int *)(*(int *)(param_1 + 0x34) + 0x2c) + 0x14))(*(int *)(param_1 + 0x34) + 0x2c);
  return lVar1;
}

