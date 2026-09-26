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
extern int fn_82FA5190();


void fn_82FF52D8(undefined4 *param_1,ulonglong param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar2 = (param_2 & 0xffffffff) * 0x8421085 >> 0x20;
  uVar2 = ((param_2 - uVar2 & 0xffffffff) >> 1) + uVar2 >> 4;
  iVar3 = (int)(((param_2 - ((uVar2 & 0x7ffffff) * 0x20 - uVar2)) + 1 & 0xffffffff) << 2);
  piVar1 = *(int **)(iVar3 + (int)param_1);
  piVar4 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    while( true ) {
      piVar5 = piVar1;
      if ((ulonglong)(uint)piVar5[2] == (param_2 & 0xffffffff)) break;
      piVar1 = (int *)*piVar5;
      piVar4 = piVar5;
      if ((int *)*piVar5 == (int *)0x0) {
        return;
      }
    }
    if (piVar4 == (int *)0x0) {
      *(int *)(iVar3 + (int)param_1) = *piVar5;
    }
    else {
      *piVar4 = *piVar5;
    }
    fn_82FA5190(*param_1,piVar5);
    param_1[0x20] = param_1[0x20] + -1;
  }
  return;
}

