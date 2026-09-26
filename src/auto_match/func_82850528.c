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
extern int fn_8284FA10();
extern int fn_8284FBD0();
extern int fn_82F691F0();


void fn_82850528(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x1c) == 0) {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 4) + 0x14);
      fn_8284FBD0(iVar1,uVar2,param_1,param_2);
      fn_8284FA10(*(undefined4 *)(param_1 + 0x90),uVar2,param_1,param_2);
    }
    else if (*(int *)(iVar1 + 0x1c) == 1) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(*(undefined4 *)(param_2 + 0x1c),0,*(undefined4 *)(param_1 + 0x94));
    }
  }
  return;
}

