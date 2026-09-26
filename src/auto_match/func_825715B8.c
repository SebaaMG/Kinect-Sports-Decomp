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
extern int fn_825737F0();
extern int fn_825BFE18();
extern int fn_825C16D8();
extern int fn_82D89B48();


void fn_825715B8(undefined4 *param_1,ulonglong param_2,undefined8 param_3)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar1 = param_1[10];
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x174) = 0;
      *(undefined4 *)(iVar1 + 0x170) = 0;
      *(undefined1 *)(iVar1 + 0xc0) = 0;
      *(undefined4 *)(iVar1 + 0xa0) = 0;
      *(undefined1 *)(iVar1 + 0x130) = 0;
      *(undefined4 *)(iVar1 + 0x110) = 0;
      *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar1 + 4);
      *(undefined2 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar1 + 0x18);
      *(undefined2 *)(iVar1 + 0x28) = 0;
      *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(iVar1 + 0x2c);
      *(undefined2 *)(iVar1 + 0x3c) = 0;
      *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x40);
      *(undefined2 *)(iVar1 + 0x50) = 0;
      fn_82D89B48(param_2,param_1[10]);
      piVar2 = (int *)param_1[10];
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))(piVar2,1);
      }
      param_1[10] = 0;
    }
    fn_825737F0(param_2 + 0x200);
  }
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[1] = *param_1;
  param_1[6] = param_1[5];
  *(undefined2 *)(param_1 + 9) = 0;
  if ((param_1[0x42] & 1) != 0) {
    fn_825BFE18(param_1 + 0xb);
  }
  if ((param_1[0x42] & 2) != 0) {
    fn_825C16D8(param_1 + 0x24,param_3);
  }
  return;
}

