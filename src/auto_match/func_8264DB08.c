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


void fn_8264DB08(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  short *psVar5;
  longlong lVar6;
  
  iVar2 = fn_8264D808(param_3);
  puVar4 = (ushort *)(param_2 + 2);
  psVar5 = (short *)(param_1 + 0x202);
  lVar6 = 0x80;
  do {
    uVar3 = (uint)(*puVar4 >> 6) + (uint)(puVar4[-1] >> 6);
    if (0x3ff < uVar3) {
      uVar3 = 0x3ff;
    }
    iVar1 = (uint)(puVar4[-1] >> 6) * 2;
    psVar5[-0x101] = *(short *)(iVar1 + iVar2) << 6;
    psVar5[-0x100] = (*(short *)(uVar3 * 2 + iVar2) - *(short *)(iVar1 + iVar2)) * 0x40;
    uVar3 = (uint)(*(ushort *)((param_2 - param_1) + (int)psVar5) >> 6) + (uint)(puVar4[0xff] >> 6);
    if (0x3ff < uVar3) {
      uVar3 = 0x3ff;
    }
    iVar1 = (uint)(puVar4[0xff] >> 6) * 2;
    psVar5[-1] = *(short *)(iVar1 + iVar2) << 6;
    *psVar5 = (*(short *)(uVar3 * 2 + iVar2) - *(short *)(iVar1 + iVar2)) * 0x40;
    uVar3 = (uint)(puVar4[0x200] >> 6) + (uint)(puVar4[0x1ff] >> 6);
    if (0x3ff < uVar3) {
      uVar3 = 0x3ff;
    }
    iVar1 = (uint)(puVar4[0x1ff] >> 6) * 2;
    puVar4 = puVar4 + 2;
    psVar5[0xff] = *(short *)(iVar1 + iVar2) << 6;
    psVar5[0x100] = (*(short *)(uVar3 * 2 + iVar2) - *(short *)(iVar1 + iVar2)) * 0x40;
    psVar5 = psVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}

