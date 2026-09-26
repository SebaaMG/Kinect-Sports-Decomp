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


void fn_82DF6A68(uint *param_1,undefined8 param_2,ulonglong param_3,longlong param_4,int param_5,
                  longlong param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_r0;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  uVar1 = param_1[1];
  lVar7 = ((ulonglong)uVar1 - param_4) + param_6;
  uVar8 = (uint)lVar7;
  if ((int)(param_1[2] & 0x3fffffff) < (int)uVar8) {
    lVar5 = ((ulonglong)param_1[2] & 0x3fffffff) << 1;
    if ((int)lVar5 <= (int)uVar8) {
      lVar5 = lVar7;
    }
    fn_82CE6310(param_2,param_1,lVar5,0x20);
  }
  fn_82CF6B28((param_3 + param_6 & 0x7ffffff) * 0x20 + (ulonglong)*param_1,
               (param_3 + param_4 & 0x7ffffff) * 0x20 + (ulonglong)*param_1,
               ((uVar1 - param_3) - param_4 & 0x7ffffff) << 5);
  uVar6 = (param_3 & 0x7ffffff) * 0x20 + (ulonglong)*param_1;
  if (0 < (int)param_6) {
    param_5 = param_5 - (int)uVar6;
    do {
      if ((uVar6 & 0xffffffff) != 0) {
        iVar4 = (int)uVar6;
        puVar2 = (undefined4 *)(param_5 + iVar4 & 0xfffffff0);
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar3 = (undefined4 *)(in_r0 + iVar4 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
        puVar2 = (undefined4 *)(param_5 + iVar4 + 0x10 & 0xfffffff0);
        uVar9 = puVar2[1];
        uVar10 = puVar2[2];
        uVar11 = puVar2[3];
        puVar3 = (undefined4 *)(in_r0 + iVar4 + 0x10 & 0xfffffff0);
        *puVar3 = *puVar2;
        puVar3[1] = uVar9;
        puVar3[2] = uVar10;
        puVar3[3] = uVar11;
      }
      uVar6 = uVar6 + 0x20;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
  }
  param_1[1] = uVar8;
  return;
}

