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
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B400();
extern int fn_8268BEA8();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_826A2F80();
extern int fn_826B32D0();
extern int fn_826BD078();
extern int fn_82710118();
extern unsigned int iStack_7c;
extern unsigned int iStack_8c;
extern unsigned int iStack_9c;
extern unsigned int iStack_d0;
extern unsigned int iStack_d4;
extern unsigned int iStack_e0;
extern unsigned int uStack_dc;
extern U64 storeWordConditionalIndexed();


undefined4 * fn_82711100(undefined4 *param_1,int param_2,int *param_3,char *param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  ulonglong uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  char in_RESERVE;
  int iStack_e0;
  uint uStack_dc;
  char *pcStack_d8;
  int iStack_d4;
  int iStack_d0;
  int aiStack_cc [3];
  undefined1 auStack_c0 [4];
  int *piStack_bc;
  undefined1 auStack_b0 [4];
  char *pcStack_ac;
  undefined1 auStack_a0 [4];
  int iStack_9c;
  undefined1 auStack_90 [4];
  int iStack_8c;
  undefined1 auStack_80 [4];
  int iStack_7c;
  
  puVar13 = (uint *)(param_2 + 0x78);
  uVar7 = fn_826B32D0(param_2,*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x2a0),
                            *(int *)(param_2 + 0x78) + 0x10,0,0xffffffffffffffff);
  piStack_bc = (int *)*param_3;
  *param_1 = (int)uVar7;
  iVar16 = *piStack_bc;
  param_5 = 0xffffffffU - ((int)param_5 >> 0x1f) & param_5;
  iStack_e0 = iVar16;
  if (param_4 == (char *)0x0) {
    auStack_c0[0] = 5;
    piStack_bc[2] = piStack_bc[2] + 1;
    fn_826A2F80(uVar7,auStack_c0);
    fn_82696330(auStack_c0);
  }
  else if (*param_4 == '\0') {
    fn_8268B330(&uStack_dc);
    lVar8 = fn_826BD078(&iStack_e0);
    while (lVar8 != 0) {
      fn_8268BEA8(&uStack_dc);
      fn_8268B400(&uStack_dc,lVar8);
      fn_8269A190(&pcStack_d8,(ulonglong)*puVar13 + 0x254,&uStack_dc);
      pcVar5 = pcStack_d8;
      auStack_b0[0] = 5;
      uVar1 = *param_1;
      pcStack_ac = pcStack_d8;
      *(int *)(pcStack_d8 + 8) = *(int *)(pcStack_d8 + 8) + 1;
      fn_826A2F80(uVar1,auStack_b0);
      fn_82696330(auStack_b0);
      uVar2 = *(uint *)(pcVar5 + 8);
      *(int *)(pcVar5 + 8) = (int)((ulonglong)uVar2 - 1);
      if ((ulonglong)uVar2 - 1 == 0) {
        fn_826944C8(pcVar5);
      }
      lVar8 = fn_826BD078(&iStack_e0);
    }
    lVar8 = ((ulonglong)uStack_dc & 0xfffffffc) + 4;
    puVar13 = (uint *)lVar8;
    uVar12 = (ulonglong)*puVar13;
    if (in_RESERVE != '\0') {
      uVar2 = storeWordConditionalIndexed(uVar12 - 1,0,lVar8);
      *puVar13 = uVar2;
    }
    if (uVar12 == 1) {
      fn_8267BE38();
    }
  }
  else {
    iVar14 = 0;
    do {
      iVar3 = iStack_e0;
      iVar15 = 0;
      pcStack_d8 = param_4;
      do {
        iVar4 = iStack_e0;
        iVar9 = fn_826BD078(&iStack_e0);
        iVar10 = fn_826BD078(&pcStack_d8);
        if (iVar15 == 0) {
          iVar15 = iStack_e0;
        }
        iVar6 = iStack_e0;
        if (iVar9 == 0) break;
        if (iVar10 == 0) goto LAB_827112e0;
        iVar6 = iVar15;
      } while (iVar9 == iVar10);
      iStack_e0 = iVar6;
      if (iVar10 == 0) {
LAB_827112e0:
        if ((int)param_5 <= iVar14) {
          return param_1;
        }
        piVar11 = (int *)fn_82710118(&iStack_d4,puVar13,iVar16,iVar3);
        auStack_a0[0] = 5;
        uVar1 = *param_1;
        iStack_9c = *piVar11;
        *(int *)(iStack_9c + 8) = *(int *)(iStack_9c + 8) + 1;
        fn_826A2F80(uVar1,auStack_a0);
        fn_82696330(auStack_a0);
        lVar8 = (ulonglong)*(uint *)(iStack_d4 + 8) - 1;
        *(int *)(iStack_d4 + 8) = (int)lVar8;
        if (lVar8 == 0) {
          fn_826944C8(iStack_d4);
        }
        iVar14 = iVar14 + 1;
        iVar16 = iVar4;
        iStack_e0 = iVar4;
      }
    } while (iVar9 != 0);
    if (iVar14 < (int)param_5) {
      if (iVar10 == 0) {
        piVar11 = (int *)fn_82710118(&iStack_d0,puVar13,iVar16,iVar3);
        auStack_90[0] = 5;
        uVar1 = *param_1;
        iStack_8c = *piVar11;
        *(int *)(iStack_8c + 8) = *(int *)(iStack_8c + 8) + 1;
        fn_826A2F80(uVar1,auStack_90);
        fn_82696330(auStack_90);
      }
      else {
        piVar11 = (int *)fn_82710118(aiStack_cc,puVar13,iVar16,0);
        auStack_80[0] = 5;
        uVar1 = *param_1;
        iStack_7c = *piVar11;
        *(int *)(iStack_7c + 8) = *(int *)(iStack_7c + 8) + 1;
        fn_826A2F80(uVar1,auStack_80);
        fn_82696330(auStack_80);
        iStack_d0 = aiStack_cc[0];
      }
      lVar8 = (ulonglong)*(uint *)(iStack_d0 + 8) - 1;
      *(int *)(iStack_d0 + 8) = (int)lVar8;
      if (lVar8 == 0) {
        fn_826944C8(iStack_d0);
      }
    }
  }
  return param_1;
}

