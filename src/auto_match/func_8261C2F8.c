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
extern unsigned int *auStack_40;
extern int fn_82A1E658();
extern int fn_82A1EFC0();
extern int fn_82A2A108();


undefined4 fn_8261C2F8(int param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined4 auStack_40 [16];
  
  if (param_4 == -1) {
    iVar1 = fn_82A2A108(*(undefined4 *)(param_1 + 0x304),param_2,param_3,auStack_40,0);
    if (iVar1 == 0) {
      iVar1 = thunk_FUN_82a2b798();
      *(int *)(param_1 + 800) = iVar1;
      if (iVar1 == 0x3e5) {
        *(undefined4 *)(param_1 + 0x308) = 1;
      }
    }
    return auStack_40[0];
  }
  if (*(int *)(param_1 + 0x31c) != 0) {
    fn_82A1E658();
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0(param_1 + 0x30c,0,0x14);
}

