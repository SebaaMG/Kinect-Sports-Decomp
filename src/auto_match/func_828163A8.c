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
extern int fn_82815268();
extern int fn_828162C0();
extern int (*lbl_8320A5C8)();


undefined8 fn_828163A8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  if (param_3 != 0) {
    *(uint *)(param_2 + 0xc) = *(uint *)(param_2 + 0xc) | 0x10;
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    iVar2 = *(int *)(param_2 + 0x24);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_2 + 0x18);
    }
    iVar1 = *(int *)(param_2 + 8);
    uVar3 = (ulonglong)*(uint *)(param_2 + 4) + 0x7f & ~((ulonglong)*(uint *)(param_2 + 4) - 1);
    *(int *)(param_2 + 8) = (int)uVar3 + iVar1;
    if ((*(uint *)(param_2 + 0x10) & 2) == 0) {
      uVar4 = (*lbl_8320A5C8)(iVar2,iVar1,uVar3,*(undefined4 *)(param_2 + 0x1c));
      uVar4 = fn_828162C0(param_1,param_2,uVar4);
    }
    else {
      (**(code **)(param_1 + 4))();
    }
  }
  else {
    uVar4 = fn_82815268(param_1,param_2,*(undefined4 *)(param_2 + 0x14));
  }
  return uVar4;
}

