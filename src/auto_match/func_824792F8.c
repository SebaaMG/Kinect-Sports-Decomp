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
extern unsigned int *auStack_7e;
extern int fn_82280850();
extern int fn_82281530();
extern int fn_822815C8();
extern int fn_822848B8();
extern int fn_82284B08();
extern int fn_822A5480();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_824792F8(undefined8 param_1,int param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined1 auStack_7e [126];
  
  if (*(int *)(param_2 + 0x14) != 0) {
    fn_822815C8();
    if (*(int *)(param_2 + 0x54) != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_7e,0,0x3e);
    }
  }
  if (((*(int *)(param_2 + 0x58) != 0) && (param_4 != 0)) &&
     (iVar1 = *(int *)(*(int *)(*(int *)(param_2 + 0x14) + 0x10) + 0x84), iVar1 != 0)) {
    if (*(int *)(*(int *)(param_2 + 0x58) + 0x100) < 0x33) {
      *(undefined1 *)(iVar1 + 0xb0) = 0;
    }
    else {
      *(undefined1 *)(iVar1 + 0xb0) = 1;
    }
  }
  if ((*(int *)(param_2 + 0x2c) != 0) &&
     (iVar1 = fn_82281530(*(undefined4 *)(param_2 + 0x14)), iVar1 == 0)) {
    if (*(int *)(param_2 + 0x28) != 0) {
      iVar1 = *(int *)(param_2 + 0x14);
      fn_82280850(*(undefined4 *)(iVar1 + 0x10));
      if (*(int *)(iVar1 + 0x24) != 0) {
        fn_822A5480(*(int *)(iVar1 + 0x24),0xffffffff820e975c);
      }
      if (*(int *)(iVar1 + 0x28) != 0) {
        fn_822A5480(*(int *)(iVar1 + 0x28),0xffffffff820e975c);
      }
      if (*(int *)(param_2 + 0x54) != 0) {
        fn_822848B8();
        *(undefined4 *)(param_2 + 0x54) = 0;
      }
    }
    *(undefined4 *)(param_2 + 0x28) = 0;
  }
  if (*(int *)(param_2 + 0x54) != 0) {
    fn_82284B08(param_1);
  }
  return;
}

