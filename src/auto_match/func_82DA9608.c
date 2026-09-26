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
extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_82CE5410();
extern int fn_82CE8B30();
extern int fn_82CE9108();
extern int fn_82D89718();
extern int fn_82D9C6F8();
extern int fn_82DA5410();
extern int fn_82DAA348();
extern int fn_82DB58C0();
extern int fn_82DC3748();
extern unsigned int iStack_16c;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int lbl_8323C860;
extern unsigned int uStack_160;
extern unsigned int uStack_164;
extern unsigned int uStack_168;
extern unsigned int uStack_170;
extern unsigned int uStack_17a;
extern unsigned int uStack_17c;
extern unsigned int uStack_17e;
extern unsigned int uStack_17f;
extern unsigned int uStack_180;
extern unsigned int uStack_190;
extern unsigned int uStack_198;
extern unsigned int uStack_1a0;
extern unsigned int uStack_1a4;
extern unsigned int uStack_1a6;
extern unsigned int uStack_1a8;
extern unsigned int uStack_1ac;
extern unsigned int uStack_1b0;
extern unsigned int uStack_1b4;
extern unsigned int uStack_1b8;
extern unsigned int uStack_1bc;
extern unsigned int uStack_1c0;
extern unsigned int uStack_1ca;
extern unsigned int uStack_1cc;
extern unsigned int uStack_1ce;
extern unsigned int uStack_1cf;
extern unsigned int uStack_1d0;
extern unsigned int uStack_58;
extern unsigned int uStack_7c;


/* WARNING: Removing unreachable block (ram,0x82da97d4) */

void fn_82DA9608(int param_1,undefined8 param_2,longlong param_3,int param_4,int param_5,
                  undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined1 uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined2 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined2 uStack_1ac;
  undefined2 uStack_1a8;
  undefined2 uStack_1a6;
  undefined4 uStack_1a4;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 uStack_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined2 uStack_17c;
  undefined2 uStack_17a;
  undefined2 uStack_170;
  int iStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  int aiStack_150 [4];
  undefined1 auStack_140 [96];
  undefined1 auStack_e0 [100];
  undefined4 uStack_7c;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 *puStack_54;
  
  if (*(int *)(param_1 + 200) != 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    iVar4 = (int)param_3;
    if (*(int *)(iVar1 + 0xec) < iVar4) {
      uStack_198 = *(undefined8 *)(param_4 + 0x58);
      uStack_1a0 = *(undefined8 *)(param_4 + 0x50);
      uVar2 = *(uint *)(iVar1 + 0xe8);
      uVar3 = (ulonglong)uVar2;
      uStack_1bc = 0;
      uStack_1ce = 1;
      uStack_1cc = 0x50;
      uStack_1ca = 0xffff;
      uStack_1d0 = 0xf;
      uStack_1b8 = 0;
      uStack_1c0 = 0;
      uStack_1ac = 0;
      uStack_1a4 = (undefined4)param_2;
      uStack_1a8 = (undefined2)param_3;
      uStack_1a6 = (undefined2)uVar2;
      uStack_1b0 = 0;
      uStack_1cf = 1;
      uStack_1b4 = *(undefined4 *)(iVar1 + 0x74);
      uStack_190 = param_6;
      if (0 < iVar4) {
        uVar6 = param_3 - 1;
        trapWord(6,uVar3,0);
        uVar5 = uVar3 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1);
        trapWord(5,uVar5,0xffff);
        uStack_1b0 = fn_82DAA348((longlong)((int)uVar6 / (int)uVar2) + 1,uVar3,uStack_1b4,
                                       param_4 + 0x50,&uStack_1a0,uVar5);
        uStack_1c0 = *(undefined2 *)(param_5 + 0x20);
        uStack_1ce = 2;
        fn_82CE8B30(*(undefined4 *)(param_1 + 200),&uStack_1d0,1);
      }
      fn_82CE9108(*(undefined4 *)(param_1 + 200));
      if (0 < iVar4) {
        iStack_5c = *(int *)(param_1 + 0xc) + 0x1d0;
        uStack_180 = 0xe;
        uStack_17f = 0;
        uStack_17e = 2;
        uStack_17c = 0x30;
        uStack_17a = 0xffff;
        uStack_168 = uStack_1b8;
        uStack_164 = uStack_1b4;
        uStack_170 = uStack_1c0;
        uStack_160 = uStack_1b0;
        uStack_7c = 0;
        iStack_16c = param_5;
        fn_82D9C6F8(auStack_e0,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x78));
        fn_82DA5410(auStack_140,(ulonglong)*(uint *)(param_1 + 0xc) + 0x1e0,
                     (ulonglong)*(uint *)(param_1 + 0xc) + 0x1d0);
        aiStack_150[0] = *(int *)(param_1 + 0xc);
        uStack_58 = *(undefined4 *)(*(int *)(aiStack_150[0] + 0x78) + 8);
        puStack_54 = &lbl_8323C860;
        iStack_60 = param_1;
        fn_82DC3748(aiStack_150,0,&uStack_180);
        fn_82D89718(aiStack_150);
      }
      fn_82CE5410();
      return;
    }
  }
  fn_82DB58C0(param_1,param_2,param_3,param_4,param_5);
  return;
}

