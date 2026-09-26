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
extern int fn_82A2A108();
extern int fn_82E49568();
extern int fn_82E49CA8();
extern int fn_82E4A178();
extern int fn_82E4A2D8();
extern int fn_82E50BE8();
extern int fn_82E65FD0();


ulonglong fn_82E4A3B0(int param_1,ulonglong param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_2 & 0xffffffff) == 0) || ((param_4 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else if (*(int *)(param_1 + 0x9c) == -1) {
    uVar1 = 0xffffffffc00d36b2;
  }
  else {
    uVar1 = fn_82E50BE8(100,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E49568(uVar1,1,0,0,0);
    }
    if (piVar2 == (int *)0x0) {
      uVar1 = 0xffffffff8007000e;
    }
    else {
      (**(code **)(*piVar2 + 4))(piVar2);
      uVar1 = fn_82E4A178(param_1,param_2,param_3,param_4,piVar2);
      if (-1 < (longlong)uVar1) {
        (**(code **)(*piVar2 + 4))(piVar2);
        fn_82E65FD0(piVar2);
        iVar3 = fn_82A2A108(*(undefined4 *)(param_1 + 0x9c),piVar2[0x12],piVar2[0x13],0,
                                  piVar2 + 1);
        if ((iVar3 == 0) && (iVar3 = thunk_FUN_82a2b798(), iVar3 != 0x3e5)) {
          (**(code **)(*piVar2 + 8))(piVar2);
          uVar1 = thunk_FUN_82a2b798();
          if (0 < (int)uVar1) {
            uVar1 = uVar1 & 0xffff | 0x80070000;
          }
        }
        else {
          fn_82E49CA8(piVar2,0xffffffffffffffff);
          uVar1 = fn_82E4A2D8(param_1,param_4,piVar2);
          if (-1 < (longlong)uVar1) {
            *(ulonglong *)(param_1 + 200) =
                 (ulonglong)(uint)piVar2[0x10] + *(longlong *)(param_1 + 200);
          }
        }
      }
      (**(code **)(*piVar2 + 8))(piVar2);
    }
  }
  return uVar1;
}

