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


undefined1 fn_822EF060(int *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if (*(int *)piVar1[8] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)piVar1[0xc];
    }
    if (iVar3 < 1) {
      uVar2 = (**(code **)(*piVar1 + 0x18))();
    }
    else {
      uVar2 = (uint)**(byte **)piVar1[8];
    }
    if (uVar2 != 0xffffffff) {
      *(char *)((int)param_1 + 5) = (char)uVar2;
      goto LAB_822ef0dc;
    }
  }
  *param_1 = 0;
LAB_822ef0dc:
  *(undefined1 *)(param_1 + 1) = 1;
  return *(undefined1 *)((int)param_1 + 5);
}

