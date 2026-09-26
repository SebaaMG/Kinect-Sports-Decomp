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
extern unsigned int lbl_820F8978;
extern unsigned int lbl_820F897C;
extern unsigned int lbl_820F8D80;
extern unsigned int lbl_8329F180;


ulonglong fn_82C421D8(int param_1,int param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar3 = (longlong)param_2 * (longlong)param_2 + (longlong)param_1 * (longlong)param_1;
  iVar5 = 0;
  uVar4 = uVar3 >> 0x34;
  uVar1 = uVar4;
  if (uVar4 == 0) {
    uVar4 = uVar3 >> 0x14 & 0xffffffff;
    iVar5 = 0x20;
    uVar1 = uVar4;
    if (uVar4 == 0) {
      return 0xffffffffffffffff;
    }
  }
  while ((uVar1 & 0xff000000) == 0) {
    uVar1 = uVar4 << 8;
    uVar4 = uVar1 & 0xffffff00;
    iVar5 = iVar5 + 8;
  }
  iVar5 = ((byte)(&lbl_8329F180)[(uint)uVar4 >> 0x19] >> ((uint)uVar4 >> 0x16 & 4) & 0xf) + iVar5;
  if (iVar5 + -0x13 < 0x21) {
    uVar4 = uVar3 >> ((longlong)(0x20 - (iVar5 + -0x13)) & 0x7fU) & 0xffffffff;
  }
  else {
    uVar4 = (ulonglong)(uint)((int)uVar3 << (iVar5 - 0x33U & 0x3f));
  }
  uVar2 = (uint)(uVar4 >> 0x16) & 0x3fc;
  return ((ulonglong)*(uint *)(&lbl_820F8978 + uVar2) -
          (((ulonglong)*(uint *)(&lbl_820F8978 + uVar2) -
            (ulonglong)*(uint *)(&lbl_820F897C + uVar2) & 0xffffffff) * (uVar4 & 0xffffff) * 0x100
          >> 0x20) & 0xffffffff) * (ulonglong)*(uint *)(&lbl_820F8D80 + (iVar5 + 1) * 4) >> 0x20;
}

