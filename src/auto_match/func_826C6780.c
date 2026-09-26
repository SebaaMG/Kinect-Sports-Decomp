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


void fn_826C6780(int param_1,undefined8 param_2)

{
  int *piVar1;
  int *piVar3;
  ulonglong uVar2;
  ulonglong uVar4;
  int iVar5;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0xac);
  if (uVar4 != 0) {
    iVar5 = 0;
    do {
      piVar1 = *(int **)(iVar5 + *(int *)(param_1 + 0xa8));
      if (piVar1 != (int *)0x0) {
        piVar3 = (int *)(**(code **)(*piVar1 + 0x44))(piVar1);
        uVar2 = (**(code **)(*piVar3 + 8))();
        if ((uVar2 & 0xff00) == 0x8200) {
          fn_82757DE8(param_2,piVar1);
        }
      }
      uVar4 = uVar4 - 1;
      iVar5 = iVar5 + 4;
    } while (uVar4 != 0);
  }
  return;
}

