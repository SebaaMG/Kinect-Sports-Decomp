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
extern int fn_82527DF8();
extern int fn_82528210();


void fn_82527438(int param_1)

{
  short sVar1;
  undefined1 *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar2 = *(undefined1 **)(param_1 + 0x1b8);
  if (puVar2 != (undefined1 *)0x0) {
    if ((*(int *)(puVar2 + 0xc) != 0) && (puVar2 != (undefined1 *)0x0)) {
      *puVar2 = puVar2[1];
      fn_82528210(param_1,*(undefined4 *)(puVar2 + 0xc));
      *(undefined4 *)(puVar2 + 0xc) = 0;
    }
    sVar1 = *(short *)(puVar2 + 0x90);
    if ((sVar1 != 0) && (sVar1 != 0)) {
      for (piVar4 = *(int **)(*(int *)(param_1 + 0x4c) + 0x310);
          piVar4 < *(int **)(*(int *)(param_1 + 0x4c) + 0x314); piVar4 = piVar4 + 2) {
        iVar3 = *piVar4;
        if (*(short *)(iVar3 + 0x8b8) == sVar1) goto LAB_825274cc;
      }
      iVar3 = 0;
LAB_825274cc:
      if (iVar3 != 0) {
        fn_82527DF8(param_1,iVar3,*(undefined2 *)(puVar2 + 0x92));
      }
    }
  }
  return;
}

