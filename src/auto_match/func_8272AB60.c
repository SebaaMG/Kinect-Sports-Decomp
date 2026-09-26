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
extern unsigned int *auStack_2c;
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_8268C510();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_827274C0();
extern int fn_82727738();
extern int fn_8272AAE8();
extern int fn_82760448();
extern int fn_82761DE8();
extern int fn_82765CA0();
extern int fn_82765D90();
extern int fn_8279C8A8();
extern U64 storeWordConditionalIndexed();


void fn_8272AB60(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar6;
  undefined8 uVar5;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  int *piVar14;
  char in_RESERVE;
  byte in_cr0;
  undefined4 *puStack_30;
  uint auStack_2c [11];
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 2;
  puVar1[4] = 0;
  if (*(int **)(param_1 + 8) == (int *)0x0) {
    return;
  }
  iVar6 = (**(code **)(**(int **)(param_1 + 8) + 8))();
  if (iVar6 != 4) {
    return;
  }
  piVar14 = (int *)(*(int *)(param_1 + 8) + -0x68);
  if (*(int *)(param_1 + 8) == 0) {
    piVar14 = (int *)0x0;
  }
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_30,uVar5,uVar2,0xffffffffffffffff,0);
  if (piVar14[0x3b] != 0) {
    fn_8268C510(auStack_2c,*puStack_30);
    piVar7 = (int *)fn_827274C0(piVar14[0x3b],auStack_2c);
    lVar11 = ((ulonglong)auStack_2c[0] & 0xfffffffc) + 4;
    do {
      puVar12 = (uint *)lVar11;
      uVar13 = (ulonglong)*puVar12;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar13 - 1,0,lVar11);
        *puVar12 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar13 == 1) {
      fn_8267BE38();
    }
    if ((piVar7 != (int *)0x0) && (iVar6 = *piVar7, 1 < *(int *)(param_1 + 0x1c))) {
      pcVar8 = (char *)fn_826957D0(param_1,1);
      if (*pcVar8 != '\x01') {
        pcVar8 = (char *)fn_826957D0(param_1,1);
        if ((*pcVar8 == '\0') || (bVar4 = false, *pcVar8 == '\n')) {
          bVar4 = true;
        }
        if (!bVar4) {
          uVar2 = *(undefined4 *)(param_1 + 0x18);
          uVar5 = fn_826957D0(param_1,1);
          iVar9 = fn_82696958(uVar5,uVar2);
          if ((iVar9 != 0) &&
             (iVar10 = (**(code **)(*(int *)(iVar9 + 0x10) + 8))(iVar9 + 0x10), iVar10 == 0x1a)) {
            uVar2 = *(undefined4 *)(iVar9 + 0x30);
            uVar13 = fn_8267B890(*(undefined4 *)
                                        (*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 0x288),0x7c,0);
            if ((uVar13 & 0xffffffff) == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = fn_82765CA0(uVar13,0x1ff8);
            }
            fn_82765D90(uVar13,uVar2,1);
            if ((uVar13 & 0xffffffff) != 0) {
              fn_82760448(uVar13);
            }
            if (*(int *)(iVar6 + 8) != 0) {
              fn_82761DE8();
            }
            *(int *)(iVar6 + 8) = (int)uVar13;
            iVar6 = (**(code **)(*piVar14 + 0x40))(piVar14);
            if (iVar6 != 0) {
              *(uint *)(iVar6 + 0xb00) = *(uint *)(iVar6 + 0xb00) | 0x400;
            }
            if ((uVar13 & 0xffffffff) != 0) {
              fn_82761DE8(uVar13);
            }
          }
          goto LAB_8272ae08;
        }
      }
      uVar13 = fn_8272AAE8(piVar14[0x28]);
      if ((uVar13 & 0xffffffff) != 0) {
        fn_8279C8A8(uVar13,iVar6);
        *(byte *)(piVar14[0x28] + 0x13f) = *(byte *)(piVar14[0x28] + 0x13f) | 2;
        fn_82727738(piVar14,*puStack_30);
        iVar6 = (**(code **)(*piVar14 + 0x40))(piVar14);
        if (iVar6 != 0) {
          *(uint *)(iVar6 + 0xb00) = *(uint *)(iVar6 + 0xb00) | 0x400;
        }
      }
    }
  }
LAB_8272ae08:
  uVar3 = puStack_30[2];
  puStack_30[2] = (int)((ulonglong)uVar3 - 1);
  if ((ulonglong)uVar3 - 1 == 0) {
    fn_826944C8(puStack_30);
  }
  return;
}

