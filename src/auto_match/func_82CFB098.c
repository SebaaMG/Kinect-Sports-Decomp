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
extern int fn_82CFAE20();


ulonglong fn_82CFB098(int param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 8) == 0) {
    lVar3 = param_2;
    if ((param_3 & 0xffffffff) != 0) {
      if ((param_3 & 0xffffffff) == 1) {
        lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) + param_2;
      }
      else {
        lVar3 = -1;
        if ((param_3 & 0xffffffff) < 3) {
          lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) - param_2;
        }
      }
    }
    iVar4 = (int)lVar3;
    if (iVar4 < 0) {
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar5 = iVar4;
      if (iVar1 < iVar4) {
        iVar5 = iVar1;
      }
      uVar2 = (ulonglong)(iVar1 < iVar4);
      *(int *)(param_1 + 0x10) = iVar5;
    }
  }
  else {
    fn_82CFAE20();
    uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x1c))(*(int **)(param_1 + 8),param_2,param_3);
  }
  return uVar2;
}

