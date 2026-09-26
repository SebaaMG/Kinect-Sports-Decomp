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
extern int fn_8264D808();


void fn_8264DA70(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  ushort *puVar2;
  short *psVar3;
  longlong lVar4;
  
  iVar1 = fn_8264D808(param_3);
  puVar2 = (ushort *)(param_2 + 0x3fe);
  psVar3 = (short *)(param_1 + 0x200);
  lVar4 = 0x100;
  do {
    psVar3[-0x100] = *(short *)((puVar2[-0x1ff] >> 5 & 0x7fffffe) + iVar1) << 6;
    *psVar3 = *(short *)((*(ushort *)((param_2 - param_1) + (int)psVar3) >> 5 & 0x7fffffe) + iVar1)
              << 6;
    puVar2 = puVar2 + 1;
    psVar3[0x100] = *(short *)((*puVar2 >> 5 & 0x7fffffe) + iVar1) << 6;
    psVar3 = psVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

