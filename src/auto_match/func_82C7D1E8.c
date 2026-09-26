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
extern int fn_82CAAF00();
extern int fn_82CAAF50();


undefined8 fn_82C7D1E8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x571c) != 0) {
    if (*(int *)(param_1 + 0x5714) == 0) {
      if (*(int *)(param_1 + 0x3ba0) == 0) goto LAB_82c7d238;
    }
    else {
      if (*(int *)(param_1 + 0x3ba0) != 1) goto LAB_82c7d238;
      *(undefined4 *)(param_1 + 0x3ba0) = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x571c) = 0;
  }
LAB_82c7d238:
  iVar2 = *(int *)(param_1 + 0x3ba0);
  if ((iVar2 != -1) &&
     (((*(int *)(param_1 + 0x120) == 1 || (*(int *)(param_1 + 0x120) == 5)) &&
      (*(int *)(param_1 + 0x3ba0) = iVar2 + -1, iVar2 == 0)))) {
    uVar1 = *(undefined4 *)(param_1 + 0xea8);
    fn_82CAAF00(*(undefined4 *)(param_1 + 0x3ba4),param_1 + 0xea8,0xffffffffffffffff);
    iVar2 = fn_82CAAF50(*(undefined4 *)(param_1 + 0x3ba4),uVar1);
    if (iVar2 != 0) {
      return 0xffffffffffffff9c;
    }
  }
  if ((*(int *)(param_1 + 0x120) == 0) || (*(int *)(param_1 + 0x5714) != 0)) {
    *(undefined4 *)(param_1 + 0x5714) = 0;
    *(undefined4 *)(param_1 + 0x3ba0) = 1;
    if (*(int *)(param_1 + 0x120) == 0) {
      *(undefined4 *)(param_1 + 0x5718) = 1;
    }
  }
  return 0;
}

