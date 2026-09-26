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


undefined4 fn_82D201C0(int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int in_r0;
  int iVar7;
  longlong lVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  iVar7 = fn_82CE5410();
  uVar2 = param_2[1];
  lVar8 = (ulonglong)uVar2 + (ulonglong)uVar1;
  iVar9 = (int)lVar8;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar9) {
    lVar6 = ((ulonglong)(uint)param_2[2] & 0x3fffffff) << 1;
    if (iVar9 < (int)lVar6) {
      lVar8 = lVar6;
    }
    fn_82CE6310(*(undefined4 *)(iVar7 + 0x10),param_2,lVar8,0x10);
  }
  param_2[1] = param_2[1] + uVar1;
  iVar7 = uVar2 * 0x10 + *param_2;
  for (puVar3 = *(undefined4 **)(param_1 + 0x14); puVar3 != (undefined4 *)0x0;
      puVar3 = (undefined4 *)*puVar3) {
    puVar4 = (undefined4 *)((uint)(puVar3 + 4) & 0xfffffff0);
    uVar10 = puVar4[1];
    uVar11 = puVar4[2];
    uVar12 = puVar4[3];
    puVar5 = (undefined4 *)(in_r0 + iVar7 & 0xfffffff0);
    *puVar5 = *puVar4;
    puVar5[1] = uVar10;
    puVar5[2] = uVar11;
    puVar5[3] = uVar12;
    iVar7 = iVar7 + 0x10;
  }
  return *(undefined4 *)(param_1 + 0x18);
}

