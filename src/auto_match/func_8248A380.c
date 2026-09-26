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
extern int fn_82489AA0();
extern int fn_82A1E650();


void fn_8248A380(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  piVar1 = *(int **)(param_1 + 8);
  uVar5 = 0;
  iVar2 = *piVar1;
  if (piVar1[1] - iVar2 >> 2 != 0) {
    iVar6 = 0;
    do {
      iVar2 = *(int *)(iVar6 + iVar2);
      if (((0 < *(int *)(iVar2 + 4)) && (*(int *)(iVar2 + 4) < 3)) &&
         (iVar3 = fn_82A1E650(*(undefined4 *)(iVar2 + 0x18),0), iVar3 == 0)) {
        uVar4 = 0;
        if (*(int *)(iVar2 + 0x28) != 0) {
          uVar4 = 3;
        }
        fn_82489AA0(iVar2,uVar4);
      }
      iVar2 = *piVar1;
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 4;
    } while (uVar5 < (uint)(piVar1[1] - iVar2 >> 2));
  }
  return;
}

