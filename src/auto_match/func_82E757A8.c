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
extern int fn_82E75200();
extern unsigned int iStack_3c;
extern unsigned int uStack_34;
extern unsigned int uStack_38;


longlong fn_82E757A8(int param_1,int *param_2)

{
  undefined2 uVar3;
  int iVar2;
  longlong lVar1;
  int *piStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_2 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  piStack_40 = (int *)0x0;
  uVar3 = (**(code **)(*param_2 + 0x88))(param_2);
  *(undefined2 *)(param_1 + 0x14) = uVar3;
  if (*(int *)(param_1 + 0x60) == 0) {
    iStack_3c = 0;
    iVar2 = (**(code **)(*param_2 + 0x3c))(param_2,0xffffffff8214c2a0,&uStack_38,0xc,&iStack_3c);
    if ((-1 < iVar2) && (iStack_3c == 0xc)) {
      *(undefined4 *)(param_1 + 0x18) = uStack_38;
      *(undefined4 *)(param_1 + 0x1c) = uStack_34;
    }
    if ((*(int *)(param_1 + 0x1c) == 0) || (*(int *)(param_1 + 0x18) == 0)) {
      lVar1 = -0x7fff0001;
    }
    else {
      lVar1 = fn_82E75200(param_1);
      if (-1 < lVar1) goto LAB_82e75874;
    }
  }
  else {
LAB_82e75874:
    lVar1 = (**(code **)(*param_2 + 0x90))(param_2,&piStack_40);
    if (-1 < lVar1) {
      if (piStack_40 != (int *)0x0) goto LAB_82e758c0;
      lVar1 = -0x3ff2c945;
    }
  }
  if (piStack_40 == (int *)0x0) {
    return lVar1;
  }
LAB_82e758c0:
  (**(code **)(*piStack_40 + 8))();
  return lVar1;
}

