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
extern int fn_8240D928();


bool fn_82898430(int param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))(), iVar1 == 0)) {
      return false;
    }
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x14))();
      goto LAB_8289849c;
    }
  }
  else if (*(int **)(param_1 + 0x20) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 4))();
    goto LAB_8289849c;
  }
  iVar1 = 0;
LAB_8289849c:
  uVar2 = fn_8240D928(param_2);
  return (1 << (uVar2 + (((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0)) * -8 & 0x3f
               ) & (uint)*(byte *)(((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0) +
                                   iVar1 + 4)) != 0;
}

