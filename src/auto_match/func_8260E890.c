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
extern int fn_8251DC90();
extern unsigned int uStack_1c;
extern unsigned int uStack_24;


void fn_8260E890(int param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uStack_24;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  
  puVar2 = &uStack_24;
  iVar1 = **(int **)(param_1 + 0x60);
  lVar4 = 5;
  puVar3 = (undefined4 *)(*(int *)(iVar1 + 0x8ac) + 0xc);
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  if ((int)uStack_1c >> 0x1f != *(int *)(param_3 + 0x10)) {
    uStack_1c = *(int *)(param_3 + 0x10) << 0x1f | uStack_1c & 0x7fffffff;
    fn_8251DC90(iVar1,auStack_20);
  }
  return;
}

