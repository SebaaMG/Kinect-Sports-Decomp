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
extern unsigned int *auStack_40;
extern int fn_82681728();
extern int fn_826826A8();
extern int fn_826827F8();
extern int fn_826944C8();
extern int fn_82695520();
extern int fn_82695DA0();
extern int fn_82696330();
extern int fn_82720748();


void fn_82729B90(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar4;
  undefined8 uVar3;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  int aiStack_50 [4];
  undefined1 auStack_40 [64];
  
  iVar4 = (**(code **)(*param_1 + 0x5c))();
  uVar3 = fn_82695520(auStack_40,param_1);
  puVar7 = (uint *)(iVar4 + 8);
  uVar6 = *(int *)(iVar4 + 8) + 0x10;
  *(uint *)(iVar4 + 8) = uVar6;
  if (*(uint *)(iVar4 + 0x10) <= uVar6) {
    fn_826826A8(puVar7);
  }
  if (*puVar7 != 0) {
    fn_82695DA0(*puVar7,uVar3);
  }
  fn_82696330(auStack_40);
  uVar6 = *(uint *)(iVar4 + 0x1c);
  uVar1 = *puVar7;
  iVar2 = *(int *)(iVar4 + 0xc);
  fn_82681728(aiStack_50,(ulonglong)*(uint *)(iVar4 + 0x78) + 0x254,0xffffffff820111d0);
  fn_82720748(iVar4,param_1 + 0x1a,aiStack_50,1,
                    (longlong)((int)(uVar1 - iVar2) >> 4) + ((ulonglong)uVar6 & 0x7ffffff) * 0x20 +
                    -0x20);
  lVar5 = (ulonglong)*(uint *)(aiStack_50[0] + 8) - 1;
  *(int *)(aiStack_50[0] + 8) = (int)lVar5;
  if (lVar5 == 0) {
    fn_826944C8(aiStack_50[0]);
  }
  fn_82696330(*puVar7);
  uVar6 = *puVar7;
  *puVar7 = uVar6 - 0x10;
  if (uVar6 - 0x10 < *(uint *)(iVar4 + 0xc)) {
    fn_826827F8(puVar7);
  }
  return;
}

