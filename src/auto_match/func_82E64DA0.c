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
extern unsigned int *auStack_30;
extern int fn_82E50D88();
extern int fn_82E50FA0();
extern int fn_82E644B8();


undefined8 fn_82E64DA0(int param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint auStack_30 [12];
  
  uVar2 = 0;
  fn_82E50D88(param_1 + 0xc);
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    *param_2 = 0;
    if (*(int *)(param_1 + 0xb8) == -1) {
      uVar2 = 0xffffffff80004005;
    }
    else {
      lVar1 = fn_82E644B8(param_1 + 0x4c,*(int *)(param_1 + 0xb8),auStack_30);
      *param_2 = *(undefined4 *)((-(uint)(lVar1 != 0) & auStack_30[0]) + 0x6c);
    }
  }
  fn_82E50FA0(param_1 + 0xc);
  return uVar2;
}

