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
extern int fn_82A4FA40();


void fn_82A50210(int param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 0x20);
  iVar2 = 0;
  iVar3 = 0;
  if (piVar4 != (int *)0x0) {
    do {
      if (iVar3 < 0) {
        return;
      }
      if (piVar4 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar4;
        piVar4 = (int *)piVar4[1];
      }
      iVar2 = (*(code *)**(undefined4 **)**(undefined4 **)(iVar3 + 8))
                        ((undefined4 *)**(undefined4 **)(iVar3 + 8),param_2);
      iVar3 = iVar2;
    } while (piVar4 != (int *)0x0);
    if (iVar2 < 0) {
      return;
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = (**(code **)*puVar1)(puVar1,param_2);
  }
  if ((-1 < iVar2) && (*(int *)(param_1 + 0x34) != 0)) {
    fn_82A4FA40(*(int *)(param_1 + 0x34),param_2);
  }
  return;
}

