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
extern int fn_826826A8();
extern int fn_826A9138();


void fn_826AF178(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar4 = (uint *)(iVar1 + 8);
  uVar3 = *(int *)(iVar1 + 8) + 0x10;
  *puVar4 = uVar3;
  if (*(uint *)(iVar1 + 0x10) <= uVar3) {
    fn_826826A8(puVar4);
  }
  puVar2 = (undefined1 *)*puVar4;
  if (puVar2 != (undefined1 *)0x0) {
    *puVar2 = 5;
    iVar1 = *param_2;
    *(int *)(puVar2 + 4) = iVar1;
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_826A9138(*(int *)(param_1 + 8),0xffffffff82007730,*(undefined4 *)*param_2);
  }
  return;
}

