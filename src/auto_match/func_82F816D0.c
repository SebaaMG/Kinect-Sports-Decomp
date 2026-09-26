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
extern int fn_82D7E470();
extern int fn_82F68BF0();
extern int fn_82F6AB08();
extern int fn_82F7C468();
extern unsigned int lbl_83263398;


undefined8 fn_82F816D0(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  fn_82F7C468();
  iVar2 = fn_82D7E470();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = fn_82F6AB08();
  if (param_1 == (undefined4 *)(iVar2 + 0x20)) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82F6AB08();
    if (param_1 != (undefined4 *)(iVar2 + 0x40)) {
      return 0;
    }
    iVar2 = 1;
  }
  lbl_83263398 = lbl_83263398 + 1;
  if ((param_1[3] & 0x10c) != 0) {
    return 0;
  }
  iVar2 = iVar2 * 4;
  if (*(int *)(iVar2 + -0x7cd9c9e4) == 0) {
    iVar3 = fn_82F68BF0(0x1000);
    *(int *)(iVar2 + -0x7cd9c9e4) = iVar3;
    if (iVar3 == 0) {
      param_1[6] = 2;
      param_1[2] = param_1 + 5;
      *param_1 = param_1 + 5;
      param_1[1] = 2;
      goto LAB_82f8179c;
    }
  }
  uVar1 = *(undefined4 *)(iVar2 + -0x7cd9c9e4);
  param_1[6] = 0x1000;
  param_1[1] = 0x1000;
  param_1[2] = uVar1;
  *param_1 = uVar1;
LAB_82f8179c:
  param_1[3] = param_1[3] | 0x1102;
  return 1;
}

