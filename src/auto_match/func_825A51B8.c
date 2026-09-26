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
extern unsigned int *auStack_110;
extern unsigned int *auStack_e0;
extern int fn_825A2410();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CEBB58();
extern int fn_82CEBB90();
extern int fn_82CEBC18();
extern int fn_82D3E3F0();
extern int fn_82E0B980();
extern int fn_82E0C7A0();
extern int fn_82E0C868();
extern int fn_82E0D7E8();
extern int fn_82E12AC8();


void fn_825A51B8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char *pcVar6;
  int iVar7;
  undefined8 uVar4;
  undefined4 *puVar8;
  longlong lVar5;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [224];
  
  uVar13 = 0;
  if (param_1[1] != 0) {
    iVar7 = 0;
    do {
      if (*(int *)(iVar7 + *param_1) == 3) {
        puVar15 = *(uint **)(uVar13 * 8 + *param_1 + 4);
        goto LAB_825a5204;
      }
      uVar13 = uVar13 + 1;
      iVar7 = iVar7 + 8;
    } while (uVar13 < (uint)param_1[1]);
  }
  puVar15 = (uint *)0x0;
LAB_825a5204:
  if (puVar15 != (uint *)0x0) {
    if (puVar15[3] == 1) {
      fn_82E0B980(auStack_e0);
      param_1[3] = 1;
      fn_82CEBB90(auStack_100,*puVar15,puVar15[1],2);
      pcVar6 = (char *)fn_82CEBB58(auStack_110,auStack_100);
      if ((*pcVar6 != '\0') && (iVar7 = fn_82E0D7E8(auStack_e0,auStack_100), iVar7 == 0)) {
        iVar7 = fn_82E12AC8(auStack_e0,0xffffffff821c800c);
        param_1[2] = iVar7;
        uVar4 = fn_82E0C868(auStack_e0);
        fn_82CE4040();
        fn_82CE4040(uVar4);
        puVar8 = (undefined4 *)fn_825A2410(param_1 + 5);
        *puVar8 = (int)uVar4;
      }
      fn_82CEBC18(auStack_100);
      fn_82E0C7A0(auStack_e0);
    }
    else {
      param_1[3] = 2;
      uVar13 = puVar15[3];
      uVar16 = (ulonglong)uVar13;
      puVar8 = (undefined4 *)puVar15[5];
      lVar5 = ((ulonglong)uVar13 & 0x3fffffff) << 2;
      uVar1 = puVar15[4];
      if (0x3fffffff < uVar16) {
        lVar5 = -1;
      }
      iVar7 = fn_8265CA60(lVar5);
      if (0 < (int)uVar13) {
        iVar12 = uVar1 - (int)puVar8;
        iVar3 = iVar7 - (int)puVar8;
        uVar14 = uVar16;
        do {
          uVar2 = *(uint *)(iVar12 + (int)puVar8);
          uVar1 = *puVar15;
          fn_82E0B980(auStack_e0);
          fn_82CEBB90(auStack_100,(ulonglong)uVar2 + (ulonglong)uVar1,*puVar8,2);
          pcVar6 = (char *)fn_82CEBB58(auStack_110,auStack_100);
          if (*pcVar6 != '\0') {
            iVar9 = fn_82E0D7E8(auStack_e0,auStack_100);
            if (iVar9 == 0) {
              uVar10 = fn_82E12AC8(auStack_e0,0xffffffff821c800c);
              *(undefined4 *)(iVar3 + (int)puVar8) = uVar10;
              uVar4 = fn_82E0C868(auStack_e0);
              fn_82CE4040();
              fn_82CE4040(uVar4);
              puVar11 = (undefined4 *)fn_825A2410(param_1 + 5);
              *puVar11 = (int)uVar4;
            }
          }
          fn_82CEBC18(auStack_100);
          fn_82E0C7A0(auStack_e0);
          uVar14 = uVar14 - 1;
          puVar8 = puVar8 + 1;
        } while (uVar14 != 0);
      }
      iVar12 = fn_82CE5410();
      iVar12 = (**(code **)(**(int **)(iVar12 + 0x10) + 4))(*(int **)(iVar12 + 0x10),0x70);
      *(undefined2 *)(iVar12 + 4) = 0x70;
      iVar12 = fn_82D3E3F0(iVar12,iVar7,uVar16,1);
      param_1[2] = iVar12;
      if (0 < (int)uVar13) {
        puVar8 = (undefined4 *)(iVar7 + -4);
        do {
          puVar8 = puVar8 + 1;
          fn_82CE4118(*puVar8);
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      fn_8265CAA0(iVar7);
    }
  }
  return;
}

