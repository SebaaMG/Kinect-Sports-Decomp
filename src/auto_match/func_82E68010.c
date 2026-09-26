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
extern int fn_82E674C0();


undefined8
fn_82E68010(undefined8 param_1,uint *param_2,ulonglong param_3,longlong param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar5;
  ulonglong uVar4;
  
  iVar3 = (int)param_4;
  if (0 < iVar3) {
    uVar1 = param_2[9];
    uVar5 = (uVar1 & 3) * 8 + param_2[0x12];
    param_2[0x12] = uVar5;
    uVar5 = uVar5 + iVar3;
    param_2[9] = uVar1 - (uVar1 & 3);
    uVar4 = ((ulonglong)param_2[10] - (ulonglong)param_2[9]) + (ulonglong)*param_2;
    param_2[0x11] = param_2[0x11] - (uVar1 & 3);
    iVar2 = ((int)uVar5 >> 3) + (uint)((int)uVar5 < 0 && (uVar5 & 7) != 0);
    if ((int)((uVar4 & 0xffffffff) << 3) < (int)(param_2[0x12] + iVar3)) {
      return 0xffffffff80040003;
    }
    if ((param_5 != 0) && ((param_3 & 0xffffffff) != 0)) {
      fn_82E674C0(param_3,param_4,(ulonglong)param_2[9],param_2[0x12],uVar4);
    }
    iVar3 = (int)((ulonglong)param_2[0x12] + param_4);
    param_2[9] = param_2[9] + iVar2;
    param_2[0x11] = param_2[0x11] + iVar2;
    param_2[0x12] =
         iVar3 + ((iVar3 >> 3) + (uint)(iVar3 < 0 && ((ulonglong)param_2[0x12] + param_4 & 7) != 0))
                 * -8;
  }
  return 0;
}

