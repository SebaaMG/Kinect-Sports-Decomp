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
extern int fn_82230040();
extern int fn_822B54F8();
extern int fn_822C3E68();
extern int fn_82507908();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_821ACF5C;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;


undefined4 * fn_822C2468(undefined4 *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_r0;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  double dVar13;
  undefined4 in_register_000104d0;
  undefined4 in_register_000104d4;
  undefined4 in_register_000104d8;
  undefined4 in_vr77;
  undefined **ppuStack_60;
  undefined4 uStack_5c;
  undefined **ppuStack_58;
  undefined4 uStack_54;
  
  fn_822B54F8();
  *param_1 = &lbl_821ACF5C;
  param_1[0x6a] = 0;
  iVar5 = fn_8265C9E0(0x60);
  if (iVar5 == 0) {
    uStack_54 = 0;
    ppuStack_58 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_58);
  }
  param_1[0x69] = iVar5;
  *(int *)iVar5 = iVar5;
  *(undefined4 *)(param_1[0x69] + 4) = param_1[0x69];
  *(undefined4 *)(param_1[0x69] + 8) = param_1[0x69];
  *(undefined1 *)(param_1[0x69] + 0x50) = 1;
  *(undefined1 *)(param_1[0x69] + 0x51) = 1;
  param_1[0x6e] = 0;
  iVar5 = fn_8265C9E0(0x20);
  if (iVar5 == 0) {
    uStack_5c = 0;
    ppuStack_60 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_60);
  }
  param_1[0x6d] = iVar5;
  *(int *)iVar5 = iVar5;
  uVar4 = lbl_821CC160;
  uVar3 = lbl_821CA460;
  *(undefined4 *)(param_1[0x6d] + 4) = param_1[0x6d];
  *(undefined4 *)(param_1[0x6d] + 8) = param_1[0x6d];
  *(undefined1 *)(param_1[0x6d] + 0x1c) = 1;
  *(undefined1 *)(param_1[0x6d] + 0x1d) = 1;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x7a] = 0;
  uVar2 = *(undefined4 *)(param_2 + 0x4c);
  param_1[0x7d] = uVar3;
  param_1[0x7b] = uVar2;
  param_1[0x7c] = 0;
  param_1[0x7e] = *(undefined4 *)(param_2 + 0x50);
  uVar2 = *(undefined4 *)(param_2 + 0x54);
  param_1[0x80] = 1;
  param_1[0x7f] = uVar2;
  param_1[0x83] = 0;
  param_1[0x81] = uVar4;
  param_1[0x88] = 4;
  puVar6 = (undefined4 *)((int)param_1 + in_r0 + 0x210 & 0xfffffff0);
  *puVar6 = in_register_000104d0;
  puVar6[1] = in_register_000104d4;
  puVar6[2] = in_register_000104d8;
  puVar6[3] = in_vr77;
  param_1[0x89] = 4;
  param_1[0x8a] = uVar4;
  param_1[0x8d] = 0;
  param_1[0x8b] = uVar3;
  param_1[0x8c] = uVar3;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x95] = uVar4;
  param_1[0x96] = 0;
  pcVar12 = "cleanongoal_talk";
  param_1[0x97] = 0;
  param_1[0x98] = *(undefined4 *)(param_2 + 0x58);
  param_1[0x99] = *(undefined4 *)(param_2 + 0x5c);
  param_1[0x9a] = *(undefined4 *)(param_2 + 0x60);
  param_1[0x9b] = *(undefined4 *)(param_2 + 100);
  do {
    iVar5 = param_1[6];
    dVar13 = (double)*(float *)(pcVar12 + -4);
    if (*(uint *)(iVar5 + 0x58) < 8) {
      puVar6 = (undefined4 *)fn_82507908(*(undefined4 *)(iVar5 + 0x1c),pcVar12);
      puVar7 = (undefined4 *)fn_82507908(*(undefined4 *)(iVar5 + 0x1c),pcVar12 + 0x40);
      if ((puVar6 != (undefined4 *)0x0) && (puVar7 != (undefined4 *)0x0)) {
        pcVar9 = pcVar12 + -0x45;
        iVar10 = *(int *)(iVar5 + 0x58) * 0x8c + iVar5;
        pcVar11 = (char *)(iVar10 + 0x5c);
        pcVar8 = (char *)(iVar10 + 0xdc);
        do {
          if (pcVar8 <= pcVar11) break;
          pcVar9 = pcVar9 + 1;
          cVar1 = *pcVar9;
          *pcVar11 = cVar1;
          pcVar11 = pcVar11 + 1;
        } while (cVar1 != '\0');
        if (pcVar11 == pcVar8) {
          pcVar11[-1] = '\0';
        }
        *(undefined4 *)(*(int *)(iVar5 + 0x58) * 0x8c + iVar5 + 0xdc) = *puVar6;
        *(undefined4 *)(*(int *)(iVar5 + 0x58) * 0x8c + iVar5 + 0xe0) = *puVar7;
        *(float *)(*(int *)(iVar5 + 0x58) * 0x8c + iVar5 + 0xe4) = (float)dVar13;
        *(int *)(iVar5 + 0x58) = *(int *)(iVar5 + 0x58) + 1;
      }
    }
    pcVar12 = pcVar12 + 0xc4;
    if (-0x7de6c995 < (int)pcVar12) {
      fn_822C3E68(param_1);
      *(undefined4 *)(param_1[0x46] + 0x2f4) = 1;
      param_1[0x9c] = *(undefined4 *)(param_2 + 0x68);
      param_1[0x9d] = 0;
      return param_1;
    }
  } while( true );
}

