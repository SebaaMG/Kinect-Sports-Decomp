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
extern int fn_82CE5410();
extern int fn_82CE6310();


void fn_82D34E10(uint *param_1,ulonglong param_2,int *param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar1 = param_1[1];
  param_2 = param_2 & 0xffff;
  iVar3 = fn_82CE5410();
  uVar6 = (uint)param_2;
  if ((param_1[2] & 0x3fffffff) < uVar6) {
    uVar5 = ((ulonglong)param_1[2] & 0x3fffffff) << 1;
    if ((uint)uVar5 <= uVar6) {
      uVar5 = param_2;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1,uVar5,0x14);
  }
  uVar2 = param_1[1];
  lVar4 = param_2 - uVar2;
  uVar5 = ((ulonglong)uVar2 + ((ulonglong)uVar2 & 0x3fffffff) * 4 & 0x3fffffff) * 4 +
          (ulonglong)*param_1;
  if (0 < lVar4) {
    do {
      if ((uVar5 & 0xffffffff) != 0) {
        *(undefined2 *)((int)uVar5 + 0x10) = 0;
      }
      uVar5 = uVar5 + 0x14;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  param_1[1] = uVar6;
  iVar3 = fn_82CE5410();
  if ((param_1[5] & 0x3fffffff) < uVar6) {
    uVar5 = ((ulonglong)param_1[5] & 0x3fffffff) << 1;
    if ((uint)uVar5 <= uVar6) {
      uVar5 = param_2;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),param_1 + 3,uVar5,2);
  }
  iVar3 = (int)(param_2 - 1);
  lVar4 = param_2 - 1;
  while ((int)uVar1 <= iVar3) {
    *(short *)(param_1[4] * 2 + param_1[3]) = (short)lVar4;
    param_1[4] = param_1[4] + 1;
    iVar3 = (int)(lVar4 + -1);
    lVar4 = lVar4 + -1;
  }
  if (*param_4 != 0x7fff) {
    *param_3 = (uint)*param_4 * 0x14 + *param_1;
  }
  return;
}

