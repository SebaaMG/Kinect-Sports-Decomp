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
extern int fn_8281D460();
extern unsigned int lbl_821AAD20;


void fn_82862648(int param_1,char param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x10) + *(int *)(param_3 + 8));
  puVar1 = puVar2 + 3;
  if (param_2 == '\0') {
    puVar1 = (undefined4 *)0x0;
  }
  *puVar2 = lbl_821AAD20;
  if (param_2 != '\0') {
    puVar2[1] = puVar1;
  }
  iVar3 = 0;
  if ((ulonglong)*(ushort *)(param_1 + 10) != 0xfffffffffffffffe) {
    lVar4 = 0;
    do {
      fn_8281D460((ulonglong)(uint)puVar2[1] + lVar4);
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 0x10;
    } while (iVar3 < (int)(*(ushort *)(param_1 + 10) + 2));
  }
  iVar3 = 0;
  *(undefined2 *)(puVar2 + 2) = 0;
  if (*(ushort *)(param_1 + 8) != 0) {
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*(ushort *)(param_1 + 8));
  }
  return;
}

