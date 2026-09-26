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
extern int fn_8270C708();
extern int fn_8270CED8();
extern int fn_82F68CC0();


undefined8 fn_8270CF78(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar2;
  undefined8 uVar1;
  longlong lVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x10) == 2) || (cVar2 = fn_8270CED8(param_1,2), cVar2 != '\0')) {
    iVar4 = (int)param_3;
    if ((iVar4 <= 0x1ff8 - *(int *)(param_1 + 0x14)) || (fn_8270C708(param_1), iVar4 < 0x1001)) {
      fn_82F68CC0((ulonglong)*(uint *)(param_1 + 0xc) + (ulonglong)*(uint *)(param_1 + 0x14),
                   param_2,param_3);
      *(int *)(param_1 + 0x14) = iVar4 + *(int *)(param_1 + 0x14);
      return param_3;
    }
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),param_2,param_3);
    if ((int)uVar1 < 1) {
      return uVar1;
    }
    lVar3 = (longlong)(int)uVar1 + *(longlong *)(param_1 + 0x20);
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x24))(*(int **)(param_1 + 8),param_2,param_3);
    if ((int)uVar1 < 1) {
      return uVar1;
    }
    lVar3 = (longlong)(int)uVar1 + *(longlong *)(param_1 + 0x20);
  }
  *(longlong *)(param_1 + 0x20) = lVar3;
  return uVar1;
}

