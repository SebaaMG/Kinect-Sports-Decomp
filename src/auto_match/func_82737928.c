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
extern int fn_82757DE8();
extern int fn_82F68B74();


void fn_82737928(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar3;
  int *piVar4;
  ulonglong uVar2;
  ulonglong uVar5;
  int iVar6;
  
  param_1 = param_1 + 0x30;
  iVar3 = fn_82F68B74(param_2,param_1);
  uVar5 = (ulonglong)*(uint *)(iVar3 + 0xac);
  if (uVar5 != 0) {
    iVar6 = 0;
    do {
      piVar1 = *(int **)(iVar6 + *(int *)(iVar3 + 0xa8));
      if (piVar1 != (int *)0x0) {
        piVar4 = (int *)(**(code **)(*piVar1 + 0x44))(piVar1);
        uVar2 = (**(code **)(*piVar4 + 8))();
        if ((uVar2 & 0xff00) == 0x8200) {
          fn_82757DE8(param_1,piVar1);
        }
      }
      uVar5 = uVar5 - 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 != 0);
  }
  return;
}

