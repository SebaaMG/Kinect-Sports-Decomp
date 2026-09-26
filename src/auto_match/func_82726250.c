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
extern unsigned int *auStack_20;
extern int fn_8267BED0();


void fn_82726250(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 auStack_20 [2];
  
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
    auStack_20[0] = 0x146;
    iVar1 = fn_8267BED0(param_1,0x54,auStack_20);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      puVar2 = (undefined1 *)(param_2 + -4);
      puVar3 = (undefined4 *)(iVar1 + 8);
      lVar4 = 5;
      do {
        puVar3[-2] = *(undefined4 *)(puVar2 + 4);
        puVar3[-1] = *(undefined4 *)(puVar2 + 8);
        *puVar3 = *(undefined4 *)((param_2 - iVar1) + (int)puVar3);
        puVar2 = puVar2 + 0x10;
        *(undefined1 *)(puVar3 + 1) = *puVar2;
        puVar3 = puVar3 + 4;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      *(undefined1 *)(iVar1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
    }
    *(int *)(param_1 + 0x34) = iVar1;
  }
  else {
    puVar2 = (undefined1 *)(param_2 + -4);
    puVar3 = (undefined4 *)(iVar1 + 4);
    lVar4 = 5;
    do {
      puVar3[-1] = *(undefined4 *)(puVar2 + 4);
      *puVar3 = *(undefined4 *)((param_2 - iVar1) + (int)puVar3);
      puVar3[1] = *(undefined4 *)(puVar2 + 0xc);
      puVar2 = puVar2 + 0x10;
      *(undefined1 *)(puVar3 + 2) = *puVar2;
      puVar3 = puVar3 + 4;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    *(undefined1 *)(iVar1 + 0x50) = *(undefined1 *)(param_2 + 0x50);
  }
  return;
}

