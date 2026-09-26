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
extern int fn_82637B30();
extern int fn_8263CBB0();
extern int fn_82640058();
extern int fn_82677570();
extern int fn_826776A0();
extern int fn_826777B8();
extern int fn_82677E98();
extern int fn_82678428();
extern int fn_8267A5F0();


void fn_826788C0(int param_1,int param_2,undefined8 param_3,int param_4,int param_5,int *param_6,
                  undefined8 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  char cVar8;
  int iVar6;
  int iVar7;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if ((((*(char *)(param_1 + 0x10) == '\0') || (param_2 == 0)) || (param_6 == (int *)0x0)) ||
     ((cVar8 = (**(code **)(*param_6 + 0x20))(param_6), cVar8 == '\0' &&
      (cVar8 = fn_8267A5F0(param_6), cVar8 == '\0')))) {
    return;
  }
  fn_82677570(param_1,param_1 + 0x134,2);
  fn_826776A0(param_1,*(undefined4 *)(param_1 + 0x1d0));
  fn_826777B8(param_1,1);
  if (*(int *)(param_1 + 0x1c) != 1) {
    fn_82637B30(*(undefined4 *)(param_1 + 0xd8),1);
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  iVar6 = (**(code **)(*param_6 + 0x3c))(param_6);
  if (iVar6 == 2) {
    if ((*(int *)(param_1 + 0x1d0) == 3) || (*(int *)(param_1 + 0x1d0) == 6)) {
      uVar9 = 10;
    }
    else {
      uVar9 = 9;
    }
  }
  else {
    iVar6 = (**(code **)(*param_6 + 0x3c))(param_6);
    if (iVar6 == 1) {
      if ((*(int *)(param_1 + 0x1d0) == 3) || (*(int *)(param_1 + 0x1d0) == 6)) {
        uVar9 = 8;
      }
      else {
        uVar9 = 7;
      }
    }
    else {
      if ((param_6[0xd] == 0x4900102) || (bVar5 = false, param_6[0xd] == 0x4900002)) {
        bVar5 = true;
      }
      if (bVar5) {
        uVar9 = 4;
      }
      else if ((*(int *)(param_1 + 0x1d0) == 3) || (uVar9 = 5, *(int *)(param_1 + 0x1d0) == 6)) {
        uVar9 = 6;
      }
    }
  }
  fn_82677E98(param_1,uVar9);
  iVar6 = *param_6;
  iVar7 = (**(code **)(iVar6 + 0x3c))(param_6);
  (**(code **)(iVar6 + 0x40))(param_6,0,1,1,iVar7 == 0);
  fn_82678428(param_1,param_7);
  iVar6 = 0;
  if (0 < param_5) {
    do {
      iVar7 = 0;
      puVar10 = (undefined4 *)(param_1 + 0x25c);
      puVar11 = (undefined4 *)((iVar6 + param_4) * 0x24 + param_2 + -0x1c);
      do {
        if (param_5 <= iVar6) break;
        uVar4 = puVar11[0xf];
        uVar1 = puVar11[0xc];
        uVar2 = puVar11[0xb];
        iVar7 = iVar7 + 6;
        uVar3 = puVar11[8];
        iVar6 = iVar6 + 1;
        puVar10[1] = puVar11[7];
        puVar10[2] = uVar3;
        puVar10[5] = uVar2;
        puVar10[6] = uVar1;
        puVar10[7] = uVar4;
        uVar4 = puVar11[0xf];
        uVar1 = puVar11[0xc];
        uVar2 = puVar11[0xd];
        uVar3 = puVar11[8];
        puVar10[8] = puVar11[9];
        puVar10[9] = uVar3;
        puVar10[0xc] = uVar2;
        puVar10[0xd] = uVar1;
        puVar10[0xe] = uVar4;
        uVar4 = puVar11[0xf];
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xb];
        uVar3 = puVar11[10];
        puVar10[0xf] = puVar11[7];
        puVar10[0x10] = uVar3;
        puVar10[0x13] = uVar2;
        puVar10[0x14] = uVar1;
        puVar10[0x15] = uVar4;
        uVar4 = puVar11[0xf];
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xb];
        uVar3 = puVar11[10];
        puVar10[0x16] = puVar11[7];
        puVar10[0x17] = uVar3;
        puVar10[0x1a] = uVar2;
        puVar10[0x1b] = uVar1;
        puVar10[0x1c] = uVar4;
        uVar4 = puVar11[0xf];
        uVar1 = puVar11[0xd];
        uVar2 = puVar11[8];
        uVar3 = puVar11[0xc];
        puVar10[0x1d] = puVar11[9];
        puVar10[0x1e] = uVar2;
        puVar10[0x21] = uVar1;
        puVar10[0x22] = uVar3;
        puVar10[0x23] = uVar4;
        uVar4 = puVar11[0xf];
        uVar1 = puVar11[0xe];
        uVar2 = puVar11[0xd];
        uVar3 = puVar11[10];
        puVar11 = puVar11 + 9;
        puVar10[0x24] = *puVar11;
        puVar10[0x25] = uVar3;
        puVar10[0x28] = uVar2;
        puVar10[0x29] = uVar1;
        puVar10 = puVar10 + 0x2a;
        *puVar10 = uVar4;
      } while (iVar7 < 0x120);
      if (iVar7 != 0) {
        fn_82640058(*(undefined4 *)(param_1 + 0xd8),4,(longlong)(iVar7 / 3) * 3,
                          param_1 + 0x260,0x1c);
        *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
        *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
      }
    } while (iVar6 < param_5);
  }
  *(int *)(param_1 + 0x178) = param_5 * 2 + *(int *)(param_1 + 0x178);
  *(int *)(param_1 + 0x1b4) = param_5 * 2 + *(int *)(param_1 + 0x1b4);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*(undefined4 *)(param_1 + 0xd8),0,0,0x80000000);
}

