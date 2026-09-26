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
extern int fn_822315A0();


void fn_823B8A50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar4;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0xc) * 4);
    puVar1 = *(undefined4 **)(iVar2 + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      fn_822315A0();
    }
    uVar4 = *(int *)(param_1 + 0xc) + 1;
    *(uint *)(param_1 + 0xc) = uVar4;
    if (*(uint *)(param_1 + 8) <= uVar4) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    lVar3 = (ulonglong)*(uint *)(param_1 + 0x10) - 1;
    *(int *)(param_1 + 0x10) = (int)lVar3;
    if (lVar3 == 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  return;
}

