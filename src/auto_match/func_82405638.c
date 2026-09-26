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
extern unsigned int *auStack_bc;
extern unsigned int *auStack_c0;
extern int fn_8227D9B0();
extern int fn_822943F0();
extern int fn_82294590();
extern int fn_82294750();
extern int fn_822950D8();
extern int fn_822967A0();
extern int fn_82297DB0();
extern int fn_82299BF0();
extern int fn_8229A000();
extern int fn_82406030();
extern int fn_82672C20();
extern int fn_82F62F60();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_cc;


void fn_82405638(int param_1,ulonglong param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 ***apppuStack_e0 [5];
  uint uStack_cc;
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [76];
  undefined **appuStack_70 [28];
  
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 1) {
LAB_8240566c:
    fn_8229A000(param_1 + 0x110);
  }
  else if (iVar2 == 2) {
    if ((*(int *)(param_1 + 0xf4) != 0) && (*(int *)(param_1 + 0xf8) == 0)) {
      *(undefined4 *)(param_1 + 0xf8) = 1;
      fn_82672C20(*(undefined4 *)(param_1 + 0xfc),0xffffffff821a8498,0,0);
    }
  }
  else if ((2 < iVar2) && (iVar2 < 8)) goto LAB_8240566c;
  if ((param_2 & 0xffffffff) < 8) {
    if ((int)param_2 == 0) {
      fn_82406030(param_1);
    }
    else if (param_2 == 1) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x5c);
      fn_82294590(auStack_c0);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar5 = *(int *)(param_1 + 0x20);
      uVar6 = fn_822967A0(auStack_c0,0xffffffff821b7ce8);
      fn_822943F0(uVar6,iVar5 - iVar2 >> 3);
      fn_822950D8(apppuStack_e0,auStack_bc);
      if (uStack_cc < 8) {
        apppuStack_e0[0] = apppuStack_e0;
      }
      fn_82299BF0(param_1 + 0x110,0xffffffff820e975c,apppuStack_e0[0]);
      fn_82297DB0(apppuStack_e0,1,0);
      fn_82294750(appuStack_70);
      appuStack_70[0] = &lbl_82020F30;
      fn_82F62F60(appuStack_70);
    }
    else if (param_2 == 2) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x34) = lbl_821CA460;
      fn_8227D9B0(param_1 + 0xc0);
    }
    else {
      if (param_2 == 3) {
        uVar1 = *(undefined4 *)(param_1 + 0x5c);
        uVar6 = 0xffffffff821b7cf8;
      }
      else {
        if (param_2 == 4) {
          piVar3 = *(int **)(param_1 + 0x20);
          for (piVar7 = *(int **)(param_1 + 0x1c); piVar7 != piVar3; piVar7 = piVar7 + 2) {
            piVar4 = (int *)*piVar7;
            piVar4[3] = 2;
            (**(code **)(*piVar4 + 0x18))();
          }
          *(undefined4 *)(param_1 + 0x30) = 0;
          *(float *)(param_1 + 0x38) =
               (float)((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3) - 1) *
               *(float *)(param_1 + 0x50) + *(float *)(param_1 + 0x4c);
          fn_82299BF0(param_1 + 0x110,0xffffffff820e975c,0xffffffff821b7cdc);
          *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 100);
          goto LAB_8240588c;
        }
        if (param_2 == 5) {
          uVar6 = 0xffffffff821b7d14;
        }
        else if (param_2 == 6) {
          uVar6 = 0xffffffff821b7d34;
        }
        else {
          uVar6 = 0xffffffff821b7d54;
        }
        uVar1 = *(undefined4 *)(param_1 + 0x60);
      }
      *(undefined4 *)(param_1 + 0x34) = uVar1;
      fn_82299BF0(param_1 + 0x110,0xffffffff820e975c,uVar6);
    }
  }
LAB_8240588c:
  *(int *)(param_1 + 0x18) = (int)param_2;
  return;
}

