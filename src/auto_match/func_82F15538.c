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
extern int fn_8265C990();
extern int fn_82F45020();


void fn_82F15538(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar3 = (int *)(param_1 + 0x28);
    do {
      iVar1 = *piVar3;
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x38) != 0) {
          fn_8265C990(*(int *)(iVar1 + 0x38),0x248c8000);
          *(undefined4 *)(iVar1 + 0x38) = 0;
        }
        if (*(int *)(iVar1 + 0x30) != 0) {
          fn_8265C990(*(int *)(iVar1 + 0x30),0x248c8000);
          *(undefined4 *)(iVar1 + 0x30) = 0;
        }
        fn_82F45020(iVar1);
        fn_8265C990(iVar1,0x248c8000);
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_1 + 0x54) != 0) {
    fn_8265C990(*(int *)(param_1 + 0x54),0x248c8000);
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}

