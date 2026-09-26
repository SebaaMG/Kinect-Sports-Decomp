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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_822315A0();
extern int fn_82266D28();
extern int fn_822707B0();
extern int fn_823F2E20();
extern int fn_8251F720();
extern int fn_82549960();
extern int fn_8255F880();
extern int fn_8255F8D0();
extern int fn_8265C9E0();
extern int fn_8266EC60();
extern int fn_8266EE08();
extern int fn_8266EF20();
extern int fn_8266F678();
extern int fn_8266F6A8();
extern int fn_82671E20();
extern unsigned int iStack_6c;
extern unsigned int iStack_74;
extern unsigned int iStack_7c;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831D3944;
extern unsigned int lbl_831D3948;
extern unsigned int lbl_831D394C;
extern unsigned int lbl_831D3950;
extern unsigned int lbl_831D3954;
extern unsigned int lbl_831D3958;
extern unsigned int lbl_831D395C;
extern unsigned int lbl_831D3960;
extern unsigned int lbl_831D3964;
extern unsigned int lbl_831D3968;
extern unsigned int lbl_831D3974;
extern unsigned int lbl_831D3978;
extern unsigned int lbl_831D397C;
extern unsigned int lbl_831D3980;
extern unsigned int lbl_831D3984;
extern unsigned int lbl_831D3988;
extern unsigned int lbl_831D398C;
extern unsigned int lbl_831D3990;
extern unsigned int lbl_831D3994;
extern unsigned int lbl_831D3998;
extern unsigned int lbl_831D399C;
extern unsigned int lbl_831D39A0;
extern unsigned int lbl_831D39A4;
extern unsigned int lbl_831D39A8;
extern unsigned int lbl_831D39AC;
extern unsigned int lbl_831D39B0;
extern unsigned int lbl_831D39B4;
extern unsigned int lbl_831D39B8;
extern unsigned int lbl_831D39BC;
extern unsigned int lbl_831D39C0;
extern unsigned int lbl_831D39C4;
extern unsigned int lbl_831D39C8;
extern unsigned int lbl_831D39CC;
extern unsigned int lbl_831D39D0;
extern unsigned int lbl_832766D8;
extern unsigned int uStack_80;


undefined4 * fn_82471AC0(undefined4 *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined4 uVar6;
  ulonglong uVar4;
  int *piVar7;
  undefined8 uVar5;
  int iVar8;
  undefined4 *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined4 uStack_80;
  int iStack_7c;
  undefined1 auStack_78 [4];
  int iStack_74;
  undefined1 auStack_70 [4];
  int iStack_6c;
  
  uVar6 = *(undefined4 *)(param_3 + 0x3c);
  param_1[0x3d0] = (int)param_2;
  param_1[3] = uVar6;
  fVar3 = lbl_821CC160;
  dVar16 = (double)lbl_821CC160;
  param_1[0x3cd] = lbl_821CC160;
  param_1[0x3cf] = fVar3;
  param_1[0x3d1] = 0;
  param_1[0x3d2] = 0;
  param_1[0x3d3] = 0;
  param_1[0x3d4] = 0;
  param_1[0x3d9] = 0;
  puVar12 = param_1 + 0x3d1;
  param_1[0x3dd] = 0;
  puVar11 = param_1 + 0x3d3;
  param_1[0x3de] = 0;
  lbl_831D3944 = *(undefined4 *)(param_3 + 0x14);
  puVar9 = param_1 + -0x19;
  lbl_831D3948 = *(undefined4 *)(param_3 + 0x18);
  lVar14 = 6;
  lbl_831D394C = *(undefined4 *)(param_3 + 0x1c);
  lbl_831D3950 = *(float *)(param_3 + 0x20);
  lbl_831D3954 = *(undefined4 *)(param_3 + 0x24);
  lbl_831D3958 = *(undefined4 *)(param_3 + 0x28);
  lbl_831D395C = *(undefined4 *)(param_3 + 0x2c);
  lbl_831D3960 = *(undefined4 *)(param_3 + 0x30);
  lbl_831D3964 = *(undefined4 *)(param_3 + 0x34);
  lbl_831D3968 = *(undefined4 *)(param_3 + 0x38);
  lbl_831D3974 = *(undefined4 *)(param_3 + 0x88c);
  lbl_831D3978 = *(undefined4 *)(param_3 + 0x890);
  lbl_831D397C = *(undefined4 *)(param_3 + 0x894);
  lbl_831D3980 = *(undefined4 *)(param_3 + 0x898);
  lbl_831D3984 = *(undefined4 *)(param_3 + 0x89c);
  lbl_831D3988 = *(undefined4 *)(param_3 + 0x8a0);
  lbl_831D398C = *(undefined4 *)(param_3 + 0x8a4);
  lbl_831D3990 = *(undefined4 *)(param_3 + 0x8a8);
  lbl_831D3994 = *(undefined4 *)(param_3 + 0x8ac);
  lbl_831D3998 = *(undefined4 *)(param_3 + 0x8b0);
  lbl_831D399C = *(undefined4 *)(param_3 + 0x8b4);
  lbl_831D39A0 = *(undefined4 *)(param_3 + 0x8b8);
  lbl_831D39A4 = *(undefined4 *)(param_3 + 0x8bc);
  lbl_831D39A8 = *(undefined4 *)(param_3 + 0x8c0);
  lbl_831D39AC = *(undefined4 *)(param_3 + 0x8c4);
  lbl_831D39B0 = *(undefined4 *)(param_3 + 0x8c8);
  lbl_831D39B4 = *(undefined4 *)(param_3 + 0x8cc);
  lbl_831D39B8 = *(undefined4 *)(param_3 + 0x8d0);
  lbl_831D39BC = *(undefined4 *)(param_3 + 0x8d4);
  lbl_831D39C0 = *(undefined4 *)(param_3 + 0x8d8);
  lbl_831D39C4 = *(undefined4 *)(param_3 + 0x8dc);
  lbl_831D39C8 = *(undefined4 *)(param_3 + 0x8e0);
  lbl_831D39CC = *(undefined4 *)(param_3 + 0x8e4);
  lbl_831D39D0 = *(undefined4 *)(param_3 + 0x8e8);
  lbl_832766D8 = param_1;
  do {
    puVar9[0x20] = 0;
    *(undefined1 *)(puVar9 + 0x21) = 0;
    puVar9 = puVar9 + 0x41;
    *(undefined1 *)puVar9 = 0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  piVar7 = (int *)(param_3 + 0x50);
  for (iVar13 = 0; iVar13 < 6; iVar13 = iVar13 + 1) {
    iVar2 = piVar7[-1];
    if ((((iVar2 < 6) && (piVar7 != (int *)0x0)) && (*piVar7 != 0)) &&
       (param_1[iVar2 * 0x41 + 7] == 0)) {
      uVar6 = fn_8251F720(piVar7,0);
      pcVar10 = (char *)(param_1 + iVar2 * 0x41 + 8);
      param_1[iVar2 * 0x41 + 7] = uVar6;
      iVar8 = 4 - (int)pcVar10;
      do {
        if (param_1 + iVar2 * 0x41 + 0x28 <= pcVar10) break;
        cVar1 = pcVar10[(int)piVar7 + iVar8];
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (pcVar10 == (char *)(param_1 + iVar2 * 0x41 + 0x28)) {
        pcVar10[-1] = '\0';
      }
      pcVar10 = (char *)(param_1 + iVar2 * 0x41 + 0x28);
      iVar8 = 0x84 - (int)pcVar10;
      do {
        if (param_1 + iVar2 * 0x41 + 0x48 <= pcVar10) break;
        cVar1 = pcVar10[(int)piVar7 + iVar8];
        *pcVar10 = cVar1;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      if (pcVar10 == (char *)(param_1 + iVar2 * 0x41 + 0x48)) {
        pcVar10[-1] = '\0';
      }
    }
    piVar7 = piVar7 + 0x42;
  }
  puVar9 = param_1 + 0x16d;
  lVar14 = 0x12;
  do {
    puVar9 = puVar9 + 0x20;
    *(undefined1 *)puVar9 = 0;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  iVar13 = param_3 + 0x8f0;
  lVar14 = 0x18;
  do {
    iVar2 = *(int *)(iVar13 + -4);
    if (iVar2 < 0x12) {
      pcVar10 = (char *)(param_1 + iVar2 * 0x20 + 0x18d);
      if ((pcVar10 == (char *)0x0) || (*pcVar10 == '\0')) {
        iVar8 = iVar13 - (int)pcVar10;
        do {
          if (param_1 + iVar2 * 0x20 + 0x1ad <= pcVar10) break;
          cVar1 = pcVar10[iVar8];
          *pcVar10 = cVar1;
          pcVar10 = pcVar10 + 1;
        } while (cVar1 != '\0');
        if (pcVar10 == (char *)(param_1 + iVar2 * 0x20 + 0x1ad)) {
          pcVar10[-1] = '\0';
        }
      }
    }
    iVar13 = iVar13 + 0x84;
    lVar14 = lVar14 + -1;
    if (lVar14 == 0) {
      fn_8255F880(&uStack_80,param_3 + 8);
      dVar15 = (double)lbl_821CA460;
      uVar6 = fn_8255F8D0(dVar16,dVar15,&uStack_80);
      param_1[0x3d8] = uVar6;
      fn_8255F880(&uStack_80,param_3 + 4);
      uVar6 = fn_8255F8D0(dVar16,dVar15,&uStack_80);
      param_1[0x3d7] = uVar6;
      param_1[0x3da] = *(undefined4 *)(param_3 + 0x40);
      param_1[0x3db] = *(undefined4 *)(param_3 + 0x44);
      uStack_80 = 0;
      iStack_7c = 0;
      param_1[0x3dc] = *(undefined4 *)(param_3 + 0x48);
      fn_82266D28(&uStack_80,0);
      fn_823F2E20(puVar12,&uStack_80);
      if (iStack_7c != 0) {
        fn_822315A0();
      }
      uStack_80 = 0;
      iStack_7c = 0;
      fn_82266D28(&uStack_80,0);
      fn_823F2E20(puVar11,&uStack_80);
      if (iStack_7c != 0) {
        fn_822315A0();
      }
      uVar4 = fn_8265C9E0(0x200);
      if ((uVar4 & 0xffffffff) == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)fn_82549960(uVar4,param_3,0,0,0,0);
      }
      param_1[0x3d5] = piVar7;
      uVar6 = (**(code **)(*piVar7 + 0x4c))();
      param_1[0x3d6] = uVar6;
      if (param_1[0x3d5] != 0) {
        uVar5 = fn_8266EC60();
        uVar5 = fn_8266EF20(auStack_78,uVar5,param_3 + 0xc,param_2,0,0x18280143);
        fn_823F2E20(puVar12,uVar5);
        if (iStack_74 != 0) {
          fn_822315A0();
        }
        fn_8266F678(*puVar12,1);
        fn_8266F6A8(*puVar12,0x40);
        fn_82671E20(*puVar12,(ulonglong)(uint)param_1[0x3d5] + 0x198);
      }
      uVar5 = fn_8266EC60();
      uVar5 = fn_8266EE08(auStack_70,uVar5,param_3 + 0x10,0,3,0);
      fn_823F2E20(puVar11,uVar5);
      if (iStack_6c != 0) {
        fn_822315A0();
      }
      fn_8266F678(*puVar11,1);
      fn_8266F6A8(*puVar11,0x40);
      *param_1 = 5;
      fn_822707B0((double)lbl_831D3950,param_1[0x3d5]);
      return param_1;
    }
  } while( true );
}

