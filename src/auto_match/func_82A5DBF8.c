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
extern unsigned int lbl_8208E060;
extern unsigned int lbl_8208E070;


byte fn_82A5DBF8(int param_1)

{
  short sVar1;
  short *psVar2;
  short *psVar3;
  short *psVar4;
  int iVar5;
  byte bVar7;
  short *psVar6;
  longlong lVar8;
  
  bVar7 = 1;
  if (*(short *)(param_1 + 2) != 1) {
    bVar7 = -(*(short *)(param_1 + 2) == 2) & 1;
  }
  bVar7 = -(*(short *)(param_1 + 0x10) == 0x20) & -(*(short *)(param_1 + 0xe) == 4) & bVar7;
  if (bVar7 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x14) == 7) {
    psVar6 = (short *)(param_1 + 0x18);
    iVar5 = 0;
    lVar8 = 7;
    do {
      psVar2 = psVar6 + -1;
      psVar3 = (short *)(&lbl_8208E060 + iVar5);
      sVar1 = *psVar6;
      psVar6 = psVar6 + 2;
      psVar4 = (short *)(&lbl_8208E070 + iVar5);
      iVar5 = iVar5 + 2;
      bVar7 = -(*psVar4 == sVar1) & -(*psVar3 == *psVar2) & bVar7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  else {
    bVar7 = 0;
  }
  return -((ulonglong)*(ushort *)(param_1 + 0x12) != 0) &
         -((longlong)
           ((int)(((uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 2) * -7) * 8) /
           (int)((uint)*(ushort *)(param_1 + 2) << 2)) + 2U ==
          (ulonglong)*(ushort *)(param_1 + 0x12)) & bVar7;
}

