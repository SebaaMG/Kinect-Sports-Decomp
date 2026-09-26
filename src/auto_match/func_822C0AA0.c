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
extern unsigned int *auStack_18c;
extern unsigned int *auStack_190;
extern unsigned int *auStack_22c;
extern unsigned int *auStack_230;
extern unsigned int *auStack_2cc;
extern unsigned int *auStack_2d0;
extern unsigned int *auStack_36c;
extern unsigned int *auStack_370;
extern unsigned int *auStack_40c;
extern unsigned int *auStack_410;
extern unsigned int *auStack_450;
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223DFF0();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_822C8C08();
extern int fn_82320BE0();
extern int fn_82321138();
extern int fn_82321A10();
extern int fn_8232B210();
extern int fn_8234B0C8();
extern int fn_8234EFA8();
extern int fn_827F5708();
extern int fn_82F63108();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821AFBA4;
extern unsigned int lbl_821AFBC0;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_45c;
extern unsigned int uStack_47c;
extern unsigned int uStack_49c;
extern unsigned int uStack_4bc;
extern unsigned int uStack_4dc;
extern unsigned int uStack_4fc;


void fn_822C0AA0(int param_1,undefined4 param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar7;
  undefined4 *******pppppppuVar10;
  char *pcVar12;
  longlong lVar11;
  double dVar13;
  undefined4 ******appppppuStack_510 [5];
  uint uStack_4fc;
  undefined4 ******appppppuStack_4f0 [5];
  uint uStack_4dc;
  undefined4 ******appppppuStack_4d0 [5];
  uint uStack_4bc;
  undefined4 ******appppppuStack_4b0 [5];
  uint uStack_49c;
  undefined4 ******appppppuStack_490 [5];
  uint uStack_47c;
  undefined4 ******appppppuStack_470 [5];
  uint uStack_45c;
  undefined1 auStack_450 [32];
  undefined4 *****apppppuStack_430 [8];
  undefined1 auStack_410 [4];
  undefined1 auStack_40c [156];
  undefined1 auStack_370 [4];
  undefined1 auStack_36c [156];
  undefined1 auStack_2d0 [4];
  undefined1 auStack_2cc [156];
  undefined1 auStack_230 [4];
  undefined1 auStack_22c [156];
  undefined1 auStack_190 [4];
  undefined1 auStack_18c [156];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [236];
  
  uVar2 = *param_3;
  puVar4 = (&lbl_821AFBA4)[uVar2];
  puVar5 = (&lbl_821AFBC0)[uVar2];
  dVar13 = (double)lbl_821CC160;
  if (*(int *)(*(int *)(param_1 + 0x118) + 0x2e4) != 0) {
    fn_827F5708(dVar13);
  }
  switch(param_2) {
  case 0:
  case 1:
  case 9:
    uVar3 = *(uint *)(param_1 + 0x118);
    puVar9 = (undefined4 *)fn_82321A10(auStack_450,(ulonglong)uVar2,param_2);
    if (0xf < (uint)puVar9[5]) {
      puVar9 = (undefined4 *)*puVar9;
    }
    fn_8234EFA8((ulonglong)uVar3 + 0x328,puVar9);
    fn_82230300(auStack_450,1,0);
    pcVar6 = (&lbl_821AFBA4)[uVar2];
    uVar7 = fn_82230110(apppppuStack_430,0xffffffff821acce4);
    pcVar12 = pcVar6;
    do {
      cVar1 = *pcVar12;
      pcVar12 = pcVar12 + 1;
    } while (cVar1 != '\0');
    puVar9 = (undefined4 *)fn_8223DFF0(uVar7,pcVar6,pcVar12 + (-1 - (int)pcVar6));
    if (0xf < (uint)puVar9[5]) {
      puVar9 = (undefined4 *)*puVar9;
    }
    fn_8234B0C8((double)lbl_8218E8E8,(ulonglong)*(uint *)(param_1 + 0x118) + 0x2c0,puVar9);
    pppppppuVar10 = (undefined4 *******)apppppuStack_430;
    goto code_r0x822c0fc0;
  case 2:
    fn_8223CFC0(auStack_370,2,1);
    uVar7 = fn_82240158(auStack_370,0xffffffff821acc30);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_4d0,auStack_36c);
    if (uStack_4bc < 0x10) {
      appppppuStack_4d0[0] = appppppuStack_4d0;
    }
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),appppppuStack_4d0[0]);
    fn_82230300(appppppuStack_4d0,1,0);
    puVar8 = auStack_370;
    break;
  case 3:
  case 4:
    if (*(int *)(param_1 + 0x7a0) == 0) {
LAB_822c0e40:
      *(float *)(param_1 + 0x7c8) = (float)dVar13;
    }
    else {
      if (*(float *)(param_1 + 0x20c) <= *(float *)(param_1 + 0x7c8)) {
        return;
      }
      if (*(float *)(param_1 + 0x210) <= *(float *)(param_1 + 0x7cc)) {
        return;
      }
      if (*(int *)(param_1 + 2000) == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x7a0) == 0) goto LAB_822c0e40;
    }
    lVar11 = (ulonglong)uVar2 - 6;
    *(float *)(param_1 + 0x7cc) = (float)dVar13;
    *(uint *)(param_1 + 2000) = (int)lVar11 - ((uVar2 - 7) + (uint)(lVar11 == 0));
    fn_8223CFC0(auStack_f0,2,1);
    uVar7 = fn_82240158(auStack_f0,0xffffffff821accf4);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_4b0,auStack_ec);
    if (uStack_49c < 0x10) {
      appppppuStack_4b0[0] = appppppuStack_4b0;
    }
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),appppppuStack_4b0[0]);
    fn_82230300(appppppuStack_4b0,1,0);
    *(float *)(param_1 + 0x794) = (float)dVar13;
    *(undefined4 *)(param_1 + 0x7a0) = 1;
    if (*(int *)(param_1 + 0x7d4) != 0) {
      fn_82320BE0(*(int *)(param_1 + 0x7d4),0);
    }
    fn_8232B210(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
    fn_82321138(param_1 + 0x538,param_1);
    puVar8 = auStack_f0;
    goto code_r0x822c0ba4;
  case 5:
    fn_8223CFC0(auStack_230,2,1);
    fn_82240158(auStack_230,0xffffffff821acbf0);
    fn_822403C8(appppppuStack_4f0,auStack_22c);
    if (uStack_4dc < 0x10) {
      appppppuStack_4f0[0] = appppppuStack_4f0;
    }
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),appppppuStack_4f0[0]);
    fn_82230300(appppppuStack_4f0,1,0);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x1fc);
    *(undefined4 *)(param_1 + 0x268) = 1;
    *(undefined4 *)(param_1 + 0x7a0) = 1;
    fn_8232B210(param_1 + 0x5c0);
    if (*(int *)(param_1 + 0x718) == 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F63108();
    }
    (**(code **)(**(int **)(param_1 + 0x718) + 4))(*(int **)(param_1 + 0x718),1);
    fn_82321138(param_1 + 0x538,param_1);
    puVar8 = auStack_230;
    goto code_r0x822c0ba4;
  case 6:
    fn_8223CFC0(auStack_2d0,2,1);
    uVar7 = fn_82240158(auStack_2d0,0xffffffff821acce8);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_510,auStack_2cc);
    if (uStack_4fc < 0x10) {
      appppppuStack_510[0] = appppppuStack_510;
    }
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),appppppuStack_510[0]);
    fn_82230300(appppppuStack_510,1,0);
    puVar8 = auStack_2d0;
    *(undefined4 *)(param_1 + 0x7a4) = 1;
    break;
  case 7:
    fn_8223CFC0(auStack_190,2,1);
    uVar7 = fn_82240158(auStack_190,0xffffffff821acc30);
    uVar7 = fn_82240158(uVar7,puVar4);
    fn_82240158(uVar7,puVar5);
    fn_822403C8(appppppuStack_490,auStack_18c);
    if (uStack_47c < 0x10) {
      appppppuStack_490[0] = appppppuStack_490;
    }
    fn_822C8C08(*(undefined4 *)(param_1 + 0x114),appppppuStack_490[0]);
    fn_82230300(appppppuStack_490,1,0);
    puVar8 = auStack_190;
    break;
  case 8:
    fn_8223CFC0(auStack_410,2,1);
    puVar4 = (&lbl_821AFBA4)[uVar2];
    pcVar6 = (&lbl_821AFBC0)[uVar2];
    uVar7 = fn_82240158(auStack_410,0xffffffff821afb68);
    fn_82240158(uVar7,puVar4);
    if ((pcVar6 != (char *)0x0) && (*pcVar6 != '\0')) {
      uVar7 = fn_82240158(auStack_410,0xffffffff821ac4b4);
      fn_82240158(uVar7,pcVar6);
    }
    fn_822403C8(appppppuStack_470,auStack_40c);
    fn_8223DCC8(auStack_410);
    if (uStack_45c < 0x10) {
      appppppuStack_470[0] = appppppuStack_470;
    }
    fn_8234EFA8((ulonglong)*(uint *)(param_1 + 0x118) + 0x328,appppppuStack_470[0]);
    pppppppuVar10 = appppppuStack_470;
code_r0x822c0fc0:
    fn_82230300(pppppppuVar10,1,0);
  default:
    goto switchD_822c0b24_default;
  }
  *(undefined4 *)(param_1 + 0x268) = 1;
  *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(param_1 + 0x1fc);
code_r0x822c0ba4:
  fn_8223DCC8(puVar8);
switchD_822c0b24_default:
  return;
}

