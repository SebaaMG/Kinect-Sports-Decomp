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
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_827D5078();
extern int fn_827DA478();
extern int fn_827E43D8();
extern int fn_827E4430();
extern int fn_827E4440();
extern int fn_827E4628();
extern int fn_827E46C8();
extern int fn_827E8288();
extern int fn_827E8298();
extern int fn_827E8448();
extern unsigned int iStack_64;
extern unsigned int lbl_821AAD20;


longlong fn_827E38C0(uint *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar6;
  undefined8 uVar4;
  code *pcVar7;
  undefined4 *puVar8;
  undefined8 uVar5;
  int iVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [96];
  
  puVar2 = (undefined4 *)param_1[1];
  lVar12 = 0;
  fVar1 = lbl_821AAD20;
  iVar11 = 0;
  for (puVar8 = (undefined4 *)*puVar2; dVar15 = (double)fVar1, puVar8 != puVar2;
      puVar8 = (undefined4 *)*puVar8) {
    iVar9 = puVar8[2];
    lVar12 = lVar12 + 1;
    piVar6 = *(int **)(iVar9 + 0x24);
    dVar14 = (double)(**(code **)(*piVar6 + 0x14))(piVar6,iVar11);
    fVar1 = (float)(dVar14 + dVar15);
    iVar11 = iVar9;
  }
  iVar11 = 0;
  if (*(char *)(param_1 + 0x17) != '\0') {
    lVar13 = 0;
LAB_827e3a44:
    do {
      cVar10 = fn_827E8288(lVar13 + (ulonglong)*param_1);
      if ((cVar10 == '\0') && (dVar15 < (double)(float)param_1[0x13])) {
        piVar6 = (int *)fn_827E8298(lVar13 + (ulonglong)*param_1);
        if (piVar6 == (int *)0x0) goto LAB_827e3a44;
        lVar12 = lVar12 + 1;
        uVar4 = (**(code **)(*piVar6 + 8))(piVar6,auStack_70);
        iVar9 = (int)uVar4;
        if (iVar9 == 0x3e4) {
          return lVar12;
        }
        if (iVar9 != 0) {
          if (iVar9 == 0x3e5) {
            dVar14 = (double)(**(code **)(*piVar6 + 0x14))(piVar6,puVar2);
            dVar15 = (double)(float)(dVar14 + dVar15);
            goto LAB_827e3a44;
          }
          pcVar7 = (code *)fn_827DA478(param_1[0x16]);
          if (pcVar7 != (code *)0x0) {
            puVar8 = (undefined4 *)fn_827E46C8(auStack_68,piVar6);
            uVar3 = *puVar8;
            uVar5 = fn_827E43D8(piVar6);
            fn_827D5078(uVar3,uVar5);
            if (iStack_64 != 0) {
              fn_822315A0();
            }
            fn_827E46C8(auStack_60,piVar6);
            (*pcVar7)();
          }
          fn_827E4628(piVar6,uVar4);
        }
        iVar9 = fn_827E4440(piVar6);
        if (iVar9 == 0) {
          fn_827E4430(piVar6);
          fn_827E8448(lVar13 + (ulonglong)*param_1);
        }
        goto LAB_827e3a44;
      }
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 0x40;
    } while (iVar11 < (int)(uint)*(byte *)(param_1 + 0x17));
  }
  return lVar12;
}

