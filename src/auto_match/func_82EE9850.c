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
extern int fn_82E50BE8();
extern int fn_82E66120();
extern int fn_8306C690();


ulonglong fn_82EE9850(int param_1)

{
  ulonglong uVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x4c) == 0) {
    uVar1 = fn_82E50BE8(0x38,0,0,0,0);
    if ((uVar1 & 0xffffffff) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)fn_82E66120(uVar1,0,0,0);
    }
    if (piVar2 == (int *)0x0) {
      uVar4 = 0xffffffff8007000e;
    }
    else {
      (**(code **)(*piVar2 + 4))(piVar2);
      iVar3 = fn_8306C690(*(undefined4 *)(param_1 + 0x70),0,1,piVar2 + 1);
      if (iVar3 == 0) {
        uVar4 = thunk_FUN_82a2b798();
        (**(code **)(*piVar2 + 8))(piVar2);
        if (0 < (int)uVar4) {
          uVar4 = uVar4 & 0xffff | 0x80070000;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10ac) = 1;
      }
    }
  }
  else {
    uVar4 = 0xffffffff80070006;
  }
  return uVar4;
}

