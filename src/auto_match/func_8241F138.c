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
extern unsigned int *auStack_210;
extern int fn_82299AC8();
extern int fn_8229A000();
extern int fn_82358FD8();
extern int fn_82417F58();
extern int fn_8288B760();


void fn_8241F138(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_210 [512];
  
  iVar1 = fn_82417F58();
  if (*(int *)(iVar1 + 0x24) != 0) {
    if (*(int *)(iVar1 + 0x168) == 0) {
      uVar2 = *(uint *)(iVar1 + 0x16c);
    }
    else {
      uVar2 = fn_8288B760();
      uVar2 = uVar2 & 0xff;
    }
    if ((uVar2 == 0) && (iVar1 = *param_1, *(int *)(iVar1 + 0x2b40) == 0)) {
      if (param_1 != *(int **)(iVar1 + 0x2b20)) {
        return;
      }
      iVar1 = *(int *)(iVar1 + 0xd4);
      fn_82358FD8(*(undefined4 *)(iVar1 + 0x1c),auStack_210,0x100,0xffffffff821aadac);
      fn_82299AC8(*(undefined4 *)(iVar1 + 0x20),auStack_210);
      return;
    }
  }
  if (param_1 == *(int **)(*param_1 + 0x2b20)) {
    fn_8229A000(*(undefined4 *)(*(int *)(*param_1 + 0xd4) + 0x20));
  }
  return;
}

