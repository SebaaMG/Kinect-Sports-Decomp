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


void fn_82D58B20(int param_1,int param_2,int param_3,longlong param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_2 + 0x44) * 4;
  iVar3 = 0;
  *(uint *)(iVar4 + param_1) =
       *(uint *)((param_3 + 0x44) * 4 + param_1) | *(uint *)(iVar4 + param_1);
  if (0 < *(int *)(param_1 + 0x1e28)) {
    iVar4 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1e24) + iVar4);
      iVar1 = puVar2[1];
      if (iVar1 == param_2) {
        fn_82D58B20(param_1,*puVar2,iVar1,param_4 + 1);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x1e28));
  }
  return;
}

