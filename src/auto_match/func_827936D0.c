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
extern unsigned int *auStack_100;
extern unsigned int *auStack_138;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_d0;
extern int fn_8267BF50();
extern int fn_8267C488();
extern int fn_826FDED0();
extern int fn_826FDF58();
extern int fn_82726AB8();
extern int fn_8278B290();
extern int fn_8278BD68();
extern int fn_8278C6C0();
extern int fn_8278D688();
extern int fn_8278FD18();
extern int fn_82791070();
extern int fn_82793530();
extern unsigned int iStack_12c;
extern unsigned int lbl_82010C6C;
extern unsigned int uStack_13a;
extern unsigned int uStack_13c;
extern unsigned int uStack_13e;
extern unsigned int uStack_140;
extern unsigned int uStack_142;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;


void fn_827936D0(undefined8 param_1,ulonglong param_2,ulonglong param_3,longlong param_4,
                  longlong param_5)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar5;
  undefined1 *puVar4;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined **ppuStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined2 uStack_140;
  undefined2 uStack_13e;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  uint auStack_138 [2];
  int *piStack_130;
  int iStack_12c;
  undefined **appuStack_120 [8];
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [160];
  
  uVar12 = param_5 - param_4;
  fn_82791070(&piStack_130,param_1,param_4,auStack_138);
  uVar3 = fn_8267BF50(param_1);
  fn_826FDED0(auStack_100,uVar3);
  uStack_148 = 0;
  uStack_144 = 0;
  iVar7 = 0;
  uStack_142 = 0;
  uStack_140 = 0;
  iVar8 = 0;
  uStack_13e = 0;
  uStack_13c = 0;
  uStack_13a = 0;
  uStack_14c = 1;
  ppuStack_150 = &lbl_82010C6C;
  if ((uVar12 & 0xffffffff) != 0) {
    uVar10 = (ulonglong)auStack_138[0];
    iVar9 = iStack_12c << 2;
    iVar11 = iStack_12c;
    do {
      if (((piStack_130 == (int *)0x0) || (iVar11 < 0)) || (bVar1 = false, piStack_130[1] <= iVar11)
         ) {
        bVar1 = true;
      }
      if (bVar1) break;
      iVar2 = *(int *)(*piStack_130 + iVar9);
      uVar6 = (ulonglong)*(uint *)(iVar2 + 4);
      if (uVar6 != 0) {
        cVar5 = fn_8278FD18(iVar2);
        if (cVar5 != '\0') {
          uVar6 = uVar6 - 1;
        }
      }
      uVar13 = uVar12;
      if ((uVar6 & 0xffffffff) <= (uVar12 & 0xffffffff)) {
        uVar13 = uVar6;
      }
      if ((uVar13 & 0xffffffff) == 0) break;
      bVar1 = iVar7 == 0;
      iVar7 = iVar7 + 1;
      if (bVar1) {
        uVar3 = fn_82793530(auStack_d0,iVar2,uVar10,uVar13 + uVar10);
        fn_82726AB8(auStack_100,uVar3);
        puVar4 = auStack_d0;
      }
      else {
        uVar3 = fn_82793530(auStack_a0,iVar2,uVar10,uVar13 + uVar10);
        uVar3 = fn_8278D688(auStack_d0,uVar3,auStack_100);
        fn_82726AB8(auStack_100,uVar3);
        fn_826FDF58(auStack_d0);
        puVar4 = auStack_a0;
      }
      fn_826FDF58(puVar4);
      if ((uVar10 == 0) && (*(int *)(iVar2 + 0xc) != 0)) {
        bVar1 = iVar8 == 0;
        iVar8 = iVar8 + 1;
        if (bVar1) {
          fn_8278BD68(&ppuStack_150);
        }
        else {
          uVar3 = fn_8278C6C0(appuStack_120,*(int *)(iVar2 + 0xc),&ppuStack_150);
          fn_8278BD68(&ppuStack_150,uVar3);
          appuStack_120[0] = &lbl_82010C6C;
          fn_8278B290(appuStack_120);
          fn_8267C488(appuStack_120);
        }
      }
      uVar12 = uVar12 - uVar13;
      if (iVar11 < piStack_130[1]) {
        iVar11 = iVar11 + 1;
        iVar9 = iVar9 + 4;
      }
    } while ((uVar12 & 0xffffffff) != 0);
  }
  if ((param_2 & 0xffffffff) != 0) {
    fn_82726AB8(param_2,auStack_100);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_8278BD68(param_3,&ppuStack_150);
  }
  ppuStack_150 = &lbl_82010C6C;
  fn_8278B290(&ppuStack_150);
  fn_8267C488(&ppuStack_150);
  fn_826FDF58(auStack_100);
  return;
}

