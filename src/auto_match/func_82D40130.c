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
extern int fn_82CE6310();
extern int fn_82CF6B28();


void fn_82D40130(uint *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_r0;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar1 = param_1[1];
  lVar6 = ((ulonglong)uVar1 - param_4) + param_6;
  uVar7 = (uint)lVar6;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar7) {
    lVar5 = ((ulonglong)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar5 <= (int)uVar7) {
      lVar5 = lVar6;
    }
    fn_82CE6310(param_2,param_1,lVar5,0x10);
  }
  fn_82CF6B28((param_3 + param_6 & 0xfffffff) * 0x10 + (ulonglong)*param_1,
               (param_3 + param_4 & 0xfffffff) * 0x10 + (ulonglong)*param_1,
               ((uVar1 - param_3) - param_4 & 0xfffffff) << 4);
  lVar6 = (param_3 & 0xfffffff) * 0x10 + (ulonglong)*param_1;
  if (0 < (int)param_6) {
    iVar3 = (int)lVar6;
    do {
      puVar2 = (undefined4 *)((param_5 - iVar3) + (int)lVar6 & 0xfffffff0);
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar4 = (undefined4 *)(in_r0 + (int)lVar6 & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar8;
      puVar4[2] = uVar9;
      puVar4[3] = uVar10;
      lVar6 = lVar6 + 0x10;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = uVar7;
  return;
}

