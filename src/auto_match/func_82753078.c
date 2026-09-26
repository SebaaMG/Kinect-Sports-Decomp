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
extern int fn_8268AF70();


ulonglong fn_82753078(undefined8 param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar5;
  ulonglong uVar4;
  uint *puVar6;
  
  puVar5 = (uint *)(*(uint *)(param_2 + 0xc) & 0xfffffffc);
  if ((*puVar5 & 0x7fffffff) == 0) {
    puVar5 = (uint *)(**(code **)(**(int **)(*(int *)(param_2 + 0x14) + 0xc) + 0x3c))();
  }
  else {
    puVar5 = puVar5 + 2;
  }
  uVar2 = *(uint *)(param_2 + 8);
  uVar3 = *(uint *)(*(int *)(*(int *)(param_2 + 0x14) + 0xc) + 0x14);
  puVar6 = puVar5;
  do {
    cVar1 = *(char *)puVar6;
    puVar6 = (uint *)((int)puVar6 + 1);
  } while (cVar1 != '\0');
  uVar4 = fn_8268AF70(puVar5,(char *)((int)puVar6 + (-1 - (int)puVar5)),0x1505);
  return uVar4 ^ ((ulonglong)uVar3 & 3 | (ulonglong)(uVar2 | uVar3) & 3);
}

