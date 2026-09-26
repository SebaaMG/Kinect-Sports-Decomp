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


ulonglong fn_82C75A60(int param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)(param_4 >> 0x10);
  uVar2 = (ulonglong)(short)param_4;
  lVar5 = 0;
  if (param_2 == 4) {
    uVar2 = (uVar2 & 0x7fffffff) << 1;
    uVar7 = ((ulonglong)(uint)(param_4 >> 0x10) & 0x7fffffff) << 1;
LAB_82c75a98:
    lVar5 = 1;
  }
  else if (param_2 == 2) goto LAB_82c75a98;
  uVar4 = -lVar5 - 0xf;
  if (param_2 != 1) {
    uVar4 = -lVar5 - 7;
  }
  uVar1 = (int)((uVar4 & 0xffffffff) << 2) << (int)lVar5;
  uVar4 = ~((longlong)(param_2 * 2 + -1) * (longlong)(int)lVar5);
  uVar6 = uVar4 & ((ulonglong)*(ushort *)(param_5 + 0x12) + ((ulonglong)param_3 & 1)) * 0x20 + uVar2
  ;
  lVar3 = ((ulonglong)*(ushort *)(param_1 + 0x34) * 8 + lVar5) * 4 + -4;
  lVar5 = ((ulonglong)*(ushort *)(param_1 + 0x32) * 8 + lVar5) * 4 + -4;
  uVar4 = uVar4 & (((ulonglong)(uint)((int)param_3 >> 1) & 1) +
                  (ulonglong)*(ushort *)(param_5 + 0x10)) * 0x20 + uVar7;
  if ((int)uVar6 < (int)uVar1) {
    lVar5 = uVar1 - uVar6;
LAB_82c75b34:
    uVar2 = lVar5 + uVar2;
  }
  else if ((int)lVar5 < (int)uVar6) {
    lVar5 = lVar5 - uVar6;
    goto LAB_82c75b34;
  }
  if ((int)uVar4 < (int)uVar1) {
    lVar3 = uVar1 - uVar4;
  }
  else {
    if ((int)uVar4 <= (int)lVar3) goto LAB_82c75b58;
    lVar3 = lVar3 - uVar4;
  }
  uVar7 = lVar3 + uVar7;
LAB_82c75b58:
  if (param_2 == 4) {
    uVar2 = (ulonglong)((int)uVar2 >> 1);
    uVar7 = (ulonglong)((int)uVar7 >> 1);
  }
  return (uVar7 & 0xffff) << 0x10 | uVar2 & 0xffffffff0000ffff;
}

