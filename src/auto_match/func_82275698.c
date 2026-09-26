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
extern int fn_822755F8();
extern int fn_82275B20();
extern int fn_82275D00();
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82275698(int param_1,undefined8 param_2,ulonglong param_3,int param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar6;
  longlong lVar5;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  
  iVar6 = (int)param_3;
  iVar4 = param_1;
  if (0x1f < iVar6) {
    uVar12 = (param_3 & 0xffffffff) >> 5;
    iVar14 = param_1;
    do {
      iVar4 = iVar14 + 0x100;
      fn_822755F8(iVar14,iVar4);
      uVar12 = uVar12 - 1;
      iVar14 = iVar4;
    } while (uVar12 != 0);
  }
  fn_822755F8(iVar4,param_2);
  uVar12 = 0x20;
  if (0x20 < iVar6) {
    do {
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      uStack_74 = 0;
      (*(undefined4 **)(param_4 + 0x10))[1] = **(undefined4 **)(param_4 + 0x10);
      uStack_70 = *(undefined4 *)(param_4 + 0x10);
      fn_82275B20(param_1,param_2,&uStack_80,uVar12,param_3);
      uVar1 = uVar12 & 0x7fffffff;
      uVar11 = uVar1 * 2;
      uVar12 = uVar1 << 2;
      uVar2 = (ulonglong)**(uint **)(param_4 + 0x10);
      iVar10 = (int)uVar12;
      uVar8 = (ulonglong)(*(uint **)(param_4 + 0x10))[1];
      iVar14 = iVar6;
      iVar4 = param_1;
      if (iVar10 <= iVar6) {
        lVar9 = (uVar11 & 0x1fffffff) * 8;
        uVar3 = uVar2;
        uVar13 = param_3;
        do {
          lVar5 = lVar9 + uVar3;
          uVar2 = lVar9 + lVar5;
          iVar4 = fn_82275D00(uVar3,lVar5,lVar5,uVar2);
          uVar13 = uVar13 + uVar1 * -4;
          iVar14 = (int)uVar13;
          uVar3 = uVar2;
        } while (iVar10 <= iVar14);
      }
      if ((int)uVar11 < iVar14) {
        lVar9 = (uVar11 & 0x1fffffff) * 8 + uVar2;
        fn_82275D00(uVar2,lVar9,lVar9,uVar8);
      }
      else if ((uVar2 & 0xffffffff) != uVar8) {
        iVar4 = iVar4 - (int)uVar2;
        do {
          puVar7 = (undefined4 *)uVar2;
          *(undefined4 *)(iVar4 + (int)puVar7) = *puVar7;
          uVar2 = uVar2 + 8;
          *(undefined4 *)((int)puVar7 + iVar4 + 4) = puVar7[1];
        } while ((uVar2 & 0xffffffff) != uVar8);
      }
    } while (iVar10 < iVar6);
  }
  return;
}

