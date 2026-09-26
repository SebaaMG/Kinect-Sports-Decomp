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
extern int fn_82CE5410();
extern int fn_82CF16D0();
extern int fn_82CFBBF0();


ulonglong fn_82CF1998(int param_1,ulonglong param_2,undefined8 param_3,char param_4)

{
  int iVar2;
  int iVar3;
  ulonglong uVar1;
  int iVar4;
  
  if ((param_4 != '\0') && (iVar3 = 0, param_1 != 0)) {
    iVar4 = 0;
    for (; ((param_2 & 0xffffffff) != 0 && (iVar3 < *(int *)(param_1 + 0x34))); iVar3 = iVar3 + 1) {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x30));
      if ((*(int *)(iVar2 + 0x4c) != 0) &&
         (iVar2 = fn_82CFBBF0(*(undefined4 *)(iVar2 + 0x4c),param_2), iVar2 == 0)) {
        return (ulonglong)*(uint *)(iVar3 * 4 + *(int *)(param_1 + 0x30));
      }
      iVar4 = iVar4 + 4;
    }
  }
  iVar3 = fn_82CE5410();
  uVar1 = (**(code **)(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x58);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82CF16D0(uVar1,param_1,param_2,param_3);
  }
  return uVar1;
}

