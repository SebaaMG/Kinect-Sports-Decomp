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
extern int fn_82522ED8();
extern int fn_82628520();
extern int fn_827D9780();
extern int fn_82F63CA0();


void fn_82628468(int param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int aiStack_40 [16];
  
  piVar4 = *(int **)(param_1 + 0x34);
  if (piVar4 != *(int **)(param_1 + 0x38)) {
    piVar3 = piVar4 + 1;
    do {
      iVar1 = *piVar4;
      aiStack_40[0] = iVar1;
      iVar2 = fn_827D9780(param_2,iVar1);
      if (iVar2 == 0) {
        if (*(int *)(iVar1 + 0x20) == 0) {
          fn_82522ED8(*(undefined4 *)(iVar1 + 0x18));
          fn_82522ED8(iVar1);
        }
        else {
          fn_82628520(param_1 + 0x44,aiStack_40);
        }
        fn_82F63CA0(piVar4,piVar3,(*(int *)(param_1 + 0x38) - (int)piVar3 >> 2) << 2);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -4;
      }
      else {
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
      }
    } while (piVar4 != *(int **)(param_1 + 0x38));
  }
  return;
}

