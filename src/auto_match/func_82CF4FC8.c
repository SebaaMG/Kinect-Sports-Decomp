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
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CEDE90();
extern int fn_82CF01E0();
extern int fn_82CF49B8();
extern int fn_82CF6280();
extern int fn_82CFFFC8();
extern int fn_82D002F0();
extern int fn_82D00388();
extern int fn_82D003F0();
extern int fn_82D8E318();
extern unsigned int iStack_7c;
extern unsigned int iStack_98;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_90;
extern unsigned int uStack_94;


/* WARNING: Removing unreachable block (ram,0x82cf5084) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82CF4FC8(double param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a0 [8];
  int iStack_98;
  uint uStack_94;
  uint uStack_90;
  undefined1 auStack_80 [4];
  int iStack_7c;
  
  iStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0x80000000;
  fn_82D00388(auStack_80,0);
  fn_82CF49B8(param_3,auStack_80);
  iVar2 = fn_82CE5410();
  if ((int)(uStack_90 & 0x3fffffff) < iStack_7c) {
    iVar3 = (uStack_90 & 0x3fffffff) << 1;
    if (iVar3 <= iStack_7c) {
      iVar3 = iStack_7c;
    }
    fn_82CE6310(*(undefined4 *)(iVar2 + 0xc),&iStack_98,iVar3,4);
  }
  uVar1 = fn_82CFFFC8(auStack_80);
  fn_82D002F0(auStack_a0,auStack_80,uVar1);
  if (1 < (int)uStack_94) {
    fn_82D8E318(iStack_98,0,(ulonglong)uStack_94 - 1,0xffffffff82cf5f38);
  }
  fn_82D003F0(auStack_80);
  dVar7 = (double)*(float *)(*(int *)(uStack_94 * 4 + iStack_98 + -4) + 4);
  fn_82CEDE90(param_2,0xffffffff8202e4d0);
  fn_82CEDE90(param_2,0xffffffff82133434);
  fn_82CEDE90(param_2,0xffffffff8213340c);
  fn_82CEDE90(param_2,0xffffffff82133434);
  uVar5 = (ulonglong)uStack_94 - 1;
  if (-1 < (longlong)uVar5) {
    dVar6 = (double)(float)(dVar7 * param_1);
    lVar4 = (uVar5 & 0x3fffffff) << 2;
    dVar8 = (double)lbl_821AAD20;
    do {
      iVar2 = *(int *)((int)lVar4 + iStack_98);
      if (dVar6 < (double)*(float *)(iVar2 + 4)) {
        fn_82CEDE90(param_2,0xffffffff821cc86c);
        fn_82CEDE90(param_2,0xffffffff821333e0);
        iVar3 = 0;
        if (0 < *(int *)(iVar2 + 0x5c)) {
          do {
            fn_82CEDE90(param_2,0xffffffff82133408);
            fn_82CF01E0(dVar8,param_2);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar2 + 0x5c));
        }
        fn_82CF01E0(dVar7,param_2);
        iVar3 = 0;
        if (0 < *(int *)(iVar2 + 0x68)) {
          do {
            fn_82CEDE90(param_2,0xffffffff82133408);
            fn_82CF01E0(dVar8,param_2);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(iVar2 + 0x68));
        }
      }
      fn_82CF6280(iVar2);
      iVar3 = fn_82CE5410();
      (**(code **)(**(int **)(iVar3 + 0x14) + 8))(*(int **)(iVar3 + 0x14),iVar2,0x70);
      uVar5 = uVar5 - 1;
      lVar4 = lVar4 + -4;
    } while (-1 < (longlong)uVar5);
  }
  iVar2 = fn_82CE5410();
  uStack_94 = 0;
  if ((uStack_90 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar2 + 0xc) + 0x10))
              (*(int **)(iVar2 + 0xc),iStack_98,uStack_90 & 0x3fffffff,4);
  }
  return;
}

