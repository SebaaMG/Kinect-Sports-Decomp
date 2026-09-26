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


void fn_82FF6258(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != *(int *)(param_1 + 8)) {
    while( true ) {
      iVar1 = *(int *)(*(int *)(iVar3 + 4) + 0xc);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) == param_2)) break;
      iVar3 = iVar3 + 8;
      if (iVar3 == *(int *)(param_1 + 8)) {
        return;
      }
    }
    for (puVar2 = *(undefined4 **)(*(int *)(iVar3 + 4) + 0x1c); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)*puVar2) {
      (**(code **)(*(int *)puVar2[1] + 0xdc))();
    }
  }
  return;
}

