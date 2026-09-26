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
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern int fn_82ABDD90();
extern int fn_82AC9F80();
extern int fn_82AC9FE8();
extern int fn_82AD1978();
extern int fn_82AD20C0();
extern int fn_82B196F0();
extern int fn_82B23B90();
extern int fn_82B44B88();
extern int fn_82B476D0();
extern int fn_82B841E8();
extern int fn_82B8F328();
extern unsigned int uStack_48;


void fn_82ACA270(int param_1)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  ulonglong uVar4;
  bool bVar5;
  int iVar7;
  int iVar8;
  undefined8 uVar6;
  undefined4 uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 auStack_50 [2];
  uint uStack_48;
  uint auStack_44 [17];
  
  fn_82AC9FE8();
  auStack_44[0] = (uint)&uStack_48 | 1;
  uStack_48 = (uint)auStack_44 | 1;
  uVar11 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
  uVar1 = *(uint *)((uVar11 & 0xfffffffe) + 4);
  fn_82B23B90(param_1,-(uint)((uVar1 & 1) == 0) & uVar1,0,1,&uStack_48,auStack_50,0);
  uVar12 = -(uint)((auStack_44[0] & 1) == 0) & auStack_44[0];
  *(uint *)(uVar12 + 0x4c) = *(uint *)(uVar12 + 0x4c) | 0x200000;
  fn_82B476D0(param_1,&uStack_48);
  fn_82B8F328(uVar11,uVar12,param_1);
  iVar7 = fn_82B841E8(param_1,uVar11,uVar11 + 0x18,0x78,0,0);
  *(uint *)(iVar7 + 8) = *(uint *)(iVar7 + 8) | 0x1000040;
  iVar8 = fn_82B841E8(param_1,uVar11,uVar11 + 0x18,0x5a,1,0);
  uVar6 = fn_82AC9F80(param_1,iVar7,7);
  uVar9 = fn_82AD1978(iVar8,uVar6);
  uVar1 = *(uint *)(iVar8 + 8);
  *(undefined4 *)(iVar8 + 0x2c) = uVar9;
  *(uint *)(iVar8 + 8) = uVar1 & 0xfff9ffff | 0x20000;
  iVar7 = fn_82ABDD90(param_1,((ulonglong)uVar1 & 0x3f80) >> 7,uVar1 >> 0x13 & 7,
                       ((ulonglong)uVar1 & 0x1c000) >> 0xe);
  *(uint *)(iVar7 + iVar8 + -0x10) = uVar12;
  *(uint *)(iVar8 + 8) = *(uint *)(iVar8 + 8) | 0x1000000;
  *(uint *)(uVar11 + 0x30) = *(uint *)(uVar11 + 0x30) | 0xc000000;
  fn_82B44B88(param_1);
  fn_82B196F0(param_1,auStack_50[0],uVar12);
  do {
    for (puVar2 = *(uint **)(uVar12 + 0x1c); (((uint)puVar2 & 1) == 0 && (puVar2 != (uint *)0x0));
        puVar2 = *(uint **)(((uint)puVar2 & 0xfffffffe) + 0x28)) {
      puVar10 = puVar2;
      if ((puVar2[2] & 0x3f80) != 0x3800) {
        while (puVar3 = (uint *)*puVar10, puVar3 != (uint *)0x0) {
          uVar4 = (ulonglong)*(uint *)(*(uint *)(puVar3[3] + 0x1c) + 0x30) & 0x7ffff;
          if ((*(uint *)(((int)(uVar4 >> 5) + 1) * 4 + *(int *)(uVar12 + 0x28)) &
              1 << ((uint)uVar4 & 0x1f)) == 0) {
LAB_82aca488:
            fn_82AD20C0(puVar2,puVar3,param_1);
          }
          else {
            if (((*puVar3 & 0x40000000) != 0) || (bVar5 = true, (*puVar3 & 0xe000000) != 0)) {
              bVar5 = false;
            }
            if ((bVar5) && (*(uint *)(puVar3[3] + 0x1c) != uVar12)) goto LAB_82aca488;
          }
          if ((uint *)*puVar10 == puVar3) {
            puVar10 = puVar3 + 1;
          }
        }
      }
    }
    uVar12 = *(uint *)((uVar12 & 0xfffffffe) + 4);
    if (((uVar12 & 1) != 0) || (uVar12 == 0)) {
      return;
    }
  } while( true );
}

