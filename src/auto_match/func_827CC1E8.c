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
extern unsigned int *auStack_130;
extern int fn_827CBF00();
extern int fn_827CC0D0();


void fn_827CC1E8(int param_1,int param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  short *psVar5;
  int *piVar6;
  longlong lVar7;
  byte abStack_1b1 [129];
  undefined1 auStack_130 [304];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1a8) + 0x18);
  fn_827CBF00(param_1,(param_2 >> 2) * 0x20 + 4,(param_3 >> 3) * 0x20 + 2,
                (param_4 >> 2) * 0x20 + 4,auStack_130);
  fn_827CC0D0(param_1);
  pbVar4 = abStack_1b1;
  piVar6 = (int *)((param_2 >> 2) * 0x10 + iVar3);
  lVar2 = 4;
  do {
    lVar1 = 8;
    iVar3 = ((param_3 >> 3) * 0x100 + (param_4 >> 2) * 4) * 2;
    do {
      psVar5 = (short *)(*piVar6 + iVar3 + -2);
      lVar7 = 4;
      do {
        pbVar4 = pbVar4 + 1;
        psVar5 = psVar5 + 1;
        *psVar5 = *pbVar4 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      lVar1 = lVar1 + -1;
      iVar3 = iVar3 + 0x40;
    } while (lVar1 != 0);
    lVar2 = lVar2 + -1;
    piVar6 = piVar6 + 1;
  } while (lVar2 != 0);
  return;
}

