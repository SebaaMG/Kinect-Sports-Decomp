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
extern int fn_825F4FE8();
extern int fn_825F50E8();
extern int fn_825F5150();
extern int fn_82BFEDE8();


void fn_825F4A28(int param_1)

{
  int iVar1;
  int aiStack_30 [12];
  
  if (*(int *)(param_1 + 0x8dc) == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x8fc);
  if (iVar1 == 0) {
    return;
  }
  if (iVar1 == 5) {
    return;
  }
  if (*(int *)(param_1 + 0x910) == 0) {
    if (*(int *)(param_1 + 0x10) == 1) {
      fn_825F5150();
      goto LAB_825f4ac8;
    }
LAB_825f4a98:
    fn_825F50E8(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x90c) != 0) {
      if (iVar1 != 4) goto LAB_825f4a98;
      if (*(int *)(param_1 + 0x90c) != 0) goto LAB_825f4ac8;
    }
    if ((iVar1 == 4) && (fn_825F5150(param_1), *(int *)(param_1 + 0x8fc) != 4)) {
      *(undefined4 *)(param_1 + 0x910) = 0;
    }
  }
LAB_825f4ac8:
  if (*(int *)(param_1 + 0x91c) != 0) {
    if (*(float *)(*(int *)(param_1 + 0x8dc) + 0x10) <= *(float *)(param_1 + 0x8f4)) {
      fn_825F4FE8(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x91c) != 0) {
      return;
    }
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x8dc) + 0x18);
  if (((iVar1 != 0) && (fn_82BFEDE8(iVar1,aiStack_30), aiStack_30[0] == 7)) &&
     (*(undefined4 *)(param_1 + 0x8fc) = 5, *(int *)(param_1 + 0x904) != 0)) {
    *(undefined4 *)(param_1 + 0x904) = 0;
  }
  return;
}

