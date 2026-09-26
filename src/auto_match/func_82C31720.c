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
extern int fn_82C31658();
extern int fn_82F655D8();
extern unsigned int lbl_82005718;
extern unsigned int lbl_82015618;
extern unsigned int lbl_83231D84;
extern unsigned int lbl_83231DC0;
extern unsigned int lbl_83231E10;


double fn_82C31720(longlong param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  double dVar6;
  
  if (lbl_83231E10 == 0) {
    fn_82C31658();
  }
  iVar5 = (int)param_1;
  if ((iVar5 < 0x14) || (0x13f < iVar5)) {
    dVar6 = (double)fn_82F655D8(lbl_82015618,(double)((float)(longlong)iVar5 * lbl_82005718));
    fVar1 = (float)dVar6;
  }
  else {
    iVar3 = iVar5 / 0x14;
    uVar2 = iVar5 / 0x14 + (iVar5 >> 0x1f);
    uVar4 = (longlong)(int)uVar2 + (ulonglong)(uVar2 >> 0x1f);
    uVar4 = param_1 + (uVar4 + (uVar4 & 0x3fffffff) * 4 & 0x3fffffff) * -4;
    if ((longlong)uVar4 < 0) {
      uVar4 = uVar4 + 0x14;
      iVar3 = iVar3 + -1;
    }
    fVar1 = *(float *)(&lbl_83231DC0 + (int)((uVar4 & 0xffffffff) << 2)) *
            *(float *)(&lbl_83231D84 + iVar3 * 4);
  }
  return (double)fVar1;
}

