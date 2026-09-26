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
extern unsigned int *auStack_90;
extern int fn_8267B890();
extern int fn_8267C4F0();
extern int fn_82683E70();
extern int fn_826844B8();
extern int fn_82684998();
extern int fn_82687270();
extern int fn_82687DA8();
extern int fn_82687E30();
extern int fn_82687F98();
extern int fn_82688058();
extern int fn_826D6D98();
extern int fn_826E4A58();
extern int fn_826F30F0();
extern int fn_826F5070();
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_8c;


undefined8
fn_82688300(int param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,int param_5,
             int *param_6,int param_7)

{
  int iVar1;
  char cVar5;
  ulonglong uVar2;
  int iVar4;
  ulonglong uVar3;
  int *piVar6;
  ulonglong uVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [2];
  int aiStack_a0 [4];
  undefined1 auStack_90 [4];
  undefined4 uStack_8c;
  
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != (int *)0x0) {
    uVar7 = 0;
    iVar4 = 0;
    bVar8 = false;
    uVar9 = 0;
    if (piVar6[1] != 0) {
      iVar10 = 0;
      do {
        if (bVar8) break;
        iVar4 = *(int *)(*piVar6 + iVar10);
        fn_826D6D98(*(undefined4 *)(iVar4 + 0x20));
        iVar1 = *(int *)(*(int *)(iVar4 + 0x20) + 0x98);
        sync(1);
        while (iVar1 != 0) {
          cVar5 = fn_82687DA8(*(undefined4 *)(iVar1 + 4),param_3,param_4 & 0x313);
          if (cVar5 != '\0') {
            uVar7 = (ulonglong)*(uint *)(iVar1 + 8);
            bVar8 = true;
            break;
          }
          iVar1 = *(int *)(iVar1 + 0xc);
          sync(1);
        }
        piVar6 = *(int **)(param_1 + 0xc);
        uVar9 = uVar9 + 1;
        iVar10 = iVar10 + 4;
      } while (uVar9 < (uint)piVar6[1]);
    }
    if (bVar8) {
      if (param_5 == 0) {
        if (param_7 == 0) {
          return 0;
        }
        aiStack_a8[0] = (**(code **)(*param_6 + 0xc))(param_6,0x1d);
        iStack_ac = (**(code **)(*param_6 + 0xc))(param_6,0x1e);
        iStack_b0 = (**(code **)(*param_6 + 0xc))(param_6,10);
        fn_82684998(auStack_90,&iStack_b0,&iStack_ac,aiStack_a8);
        if (iStack_b0 != 0) {
          fn_8267C4F0();
        }
        if (iStack_ac != 0) {
          fn_8267C4F0();
        }
        if (aiStack_a8[0] != 0) {
          fn_8267C4F0();
        }
        fn_826844B8(auStack_90,*(undefined4 *)(param_7 + 8));
        uVar2 = fn_8267B890(lbl_831E7E64,0x2c,0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_82688058(uVar2,param_6);
        }
        uVar3 = fn_8267B890(lbl_831E7E64,0x54,0);
        if ((uVar3 & 0xffffffff) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = fn_826F5070(uVar3,uStack_8c,param_6,uVar2);
        }
        iVar4 = fn_826E4A58(uVar3,iVar4,1,0);
        if ((uVar3 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar3);
        }
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar2);
        }
        fn_82683E70(auStack_90);
      }
      else {
        uVar2 = fn_8267B890(lbl_831E7E64,0x54,0);
        if ((uVar2 & 0xffffffff) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = fn_826F5070(uVar2,*(undefined4 *)(param_5 + 0x14),param_6,
                                    *(undefined4 *)(param_5 + 0x18));
        }
        iVar4 = fn_826E4A58(uVar2,iVar4,*(uint *)(*(int *)(param_5 + 0x1c) + 0x14) | 1,0);
        if ((uVar2 & 0xffffffff) != 0) {
          fn_8267C4F0(uVar2);
        }
      }
      if (iVar4 != 0) {
        aiStack_a0[0] = 0;
        aiStack_a0[1] = 0;
        iVar10 = *(int *)(iVar4 + 0x1c);
        if ((*(char *)(iVar10 + 0x40) == '\0') || (*(uint *)(iVar10 + 0x1c) <= uVar7)) {
          fn_826F30F0(iVar10 + 0x18,aiStack_a0,uVar7);
        }
        else {
          fn_82687F98(aiStack_a0,(ulonglong)*(uint *)(iVar10 + 0x20) + (uVar7 & 0x1fffffff) * 8);
        }
        if (aiStack_a0[0] == 0) {
          uVar11 = 0;
        }
        else {
          fn_82687E30(param_2,iVar4);
          if (aiStack_a0[0] != 0) {
            fn_82687270();
          }
          uVar11 = 1;
        }
        fn_82687270(iVar4);
        return uVar11;
      }
    }
  }
  return 0;
}

