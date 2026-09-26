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
extern int fn_82A5C208();
extern int fn_82A77458();
extern int fn_82A77490();
extern int fn_82A77C10();
extern int fn_82A783F8();
extern int fn_82A78518();
extern int fn_82A78648();
extern int fn_82A786C8();


undefined8 fn_82A5B750(int param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_2 + 8);
  if (7 < iVar1 - 5U) {
    uVar2 = fn_82A5C208();
    return uVar2;
  }
  if (iVar1 != 6) {
    if (iVar1 == 7) {
      fn_82A77C10(*(undefined4 *)(param_1 + 0x90));
      return 0;
    }
    if (iVar1 == 8) {
      fn_82A77458(*(undefined4 *)(param_1 + 0x90));
      return 0;
    }
    if (iVar1 == 9) {
      fn_82A77490(*(undefined4 *)(param_1 + 0x90));
      return 0;
    }
    if (iVar1 == 10) {
      uVar2 = fn_82A783F8(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_2 + 0x10));
      return uVar2;
    }
    if (iVar1 == 0xb) {
      uVar2 = fn_82A78518(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_2 + 0x10));
      return uVar2;
    }
    if (iVar1 != 5) {
      uVar2 = fn_82A78648(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_2 + 0x10));
      return uVar2;
    }
  }
  uVar2 = fn_82A786C8(*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_2 + 0x10));
  return uVar2;
}

