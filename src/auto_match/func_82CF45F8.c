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
extern unsigned int *auStack_74;
extern unsigned int *auStack_88;
extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF0388();
extern int fn_82CF1790();
extern int fn_82CF2CF0();
extern int fn_82CF3C90();
extern unsigned int iStack_8c;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_90;


void fn_82CF45F8(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 uStack_90;
  int iStack_8c;
  undefined4 auStack_88 [2];
  undefined1 *puStack_80;
  uint uStack_7c;
  uint uStack_78;
  undefined1 auStack_74 [116];
  
  uVar1 = *(uint *)(param_1 + 4);
  uVar8 = (ulonglong)uVar1;
  puStack_80 = auStack_74;
  uStack_78 = 0x80000006;
  uStack_7c = 0;
  iVar3 = fn_82CE5410();
  if ((int)(uStack_78 & 0x3fffffff) < (int)uVar1) {
    uVar7 = ((ulonglong)uStack_78 & 0x3fffffff) << 1;
    if ((int)uVar7 <= (int)uVar1) {
      uVar7 = uVar8;
    }
    fn_82CE6310(*(undefined4 *)(iVar3 + 0x10),&puStack_80,uVar7,4);
  }
  lVar9 = 0;
  uStack_7c = uVar1;
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      puVar2 = puStack_80;
      uVar4 = fn_82CF3C90(param_1,lVar9,uStack_90);
      lVar9 = lVar9 + 1;
      *(undefined4 *)(puVar2 + iVar3) = uVar4;
      iVar3 = iVar3 + 4;
    } while ((int)lVar9 < (int)uVar1);
  }
  iStack_8c = 0;
  auStack_88[0] = 0;
  fn_82CF2CF0(&puStack_80,param_2,param_1,&iStack_8c,auStack_88,0);
  iVar3 = iStack_8c;
  if (iStack_8c != 0) {
    fn_82CF0388(iStack_8c,param_3,*(undefined4 *)(param_2 + 0x14),auStack_88[0]);
    iVar5 = fn_82CE5410();
    fn_82CE5338(*(undefined4 *)(iVar5 + 0x10),iVar3);
  }
  if (0 < (int)uVar1) {
    iVar3 = 0;
    do {
      iVar5 = *(int *)(puStack_80 + iVar3);
      if (iVar5 != 0) {
        fn_82CF1790(iVar5);
        iVar6 = fn_82CE5410();
        (**(code **)(**(int **)(iVar6 + 0x10) + 8))(*(int **)(iVar6 + 0x10),iVar5,0x58);
      }
      uVar8 = uVar8 - 1;
      iVar3 = iVar3 + 4;
    } while (uVar8 != 0);
  }
  iVar3 = fn_82CE5410();
  uStack_7c = 0;
  if ((uStack_78 & 0x80000000) == 0) {
    (**(code **)(**(int **)(iVar3 + 0x10) + 0x10))
              (*(int **)(iVar3 + 0x10),puStack_80,uStack_78 & 0x3fffffff,4);
  }
  return;
}

