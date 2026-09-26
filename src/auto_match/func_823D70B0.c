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
extern int fn_823D7488();


undefined4 *
fn_823D70B0(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3,code *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar6;
  undefined8 uVar5;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  puVar11 = param_3 + -1;
  uVar6 = (int)param_3 - (int)param_2 >> 3;
  iVar1 = (int)puVar11 - (int)param_2 >> 3;
  puVar8 = param_2 + ((int)param_3 - (int)param_2 >> 4) + (uint)((int)uVar6 < 0 && (uVar6 & 1) != 0)
  ;
  puVar3 = param_2;
  if (0x28 < iVar1) {
    uVar6 = iVar1 + 1;
    uVar6 = ((int)uVar6 >> 3) + (uint)((int)uVar6 < 0 && (uVar6 & 7) != 0);
    fn_823D7488(param_2,param_2 + uVar6,param_2 + uVar6 * 2);
    fn_823D7488(puVar8 + -(uVar6 & 0x1fffffff),puVar8,puVar8 + uVar6,param_4);
    fn_823D7488(puVar11 + (uVar6 & 0xfffffff) * -2,puVar11 + -(uVar6 & 0x1fffffff),puVar11,
                    param_4);
    puVar11 = puVar11 + -(uVar6 & 0x1fffffff);
    puVar3 = param_2 + uVar6;
  }
  fn_823D7488(puVar3,puVar8,puVar11,param_4);
  puVar11 = puVar8 + 1;
  while (puVar3 = puVar8, param_2 < puVar3) {
    puVar8 = puVar3 + -1;
    cVar4 = (*param_4)(puVar8,puVar3);
    if ((cVar4 != '\0') || (cVar4 = (*param_4)(puVar3,puVar8), cVar4 != '\0')) break;
  }
  while ((puVar8 = puVar3, puVar9 = puVar11, puVar11 < param_3 &&
         ((cVar4 = (*param_4)(puVar11,puVar3), cVar4 == '\0' &&
          (cVar4 = (*param_4)(puVar3,puVar11), cVar4 == '\0'))))) {
    puVar11 = puVar11 + 1;
  }
  do {
    for (; puVar2 = puVar3, puVar7 = puVar8, puVar11 < param_3; puVar11 = puVar11 + 1) {
      cVar4 = (*param_4)(puVar3,puVar11);
      if (cVar4 == '\0') {
        cVar4 = (*param_4)(puVar11,puVar3);
        if (cVar4 != '\0') break;
        uVar5 = *puVar9;
        *(undefined4 *)puVar9 = *(undefined4 *)puVar11;
        *(undefined4 *)((int)puVar9 + 4) = *(undefined4 *)((int)puVar11 + 4);
        *puVar11 = uVar5;
        goto LAB_823d724c;
      }
LAB_823d7250:;}
    for (; param_2 < puVar8; puVar8 = puVar8 + -1) {
      puVar10 = puVar7 + -1;
      cVar4 = (*param_4)(puVar10,puVar2);
      puVar3 = puVar2;
      if (cVar4 == '\0') {
        cVar4 = (*param_4)(puVar2,puVar10);
        if (cVar4 != '\0') break;
        puVar3 = puVar2 + -1;
        uVar5 = *puVar3;
        *(undefined4 *)puVar3 = *(undefined4 *)puVar10;
        *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)((int)puVar7 + -4);
        *puVar10 = uVar5;
      }
      puVar2 = puVar3;
      puVar7 = puVar10;
    }
    if (puVar8 == param_2) {
      if (puVar11 == param_3) {
        *param_1 = puVar2;
        param_1[1] = puVar9;
        return param_1;
      }
      if (puVar9 != puVar11) {
        uVar5 = *puVar2;
        *(undefined4 *)puVar2 = *(undefined4 *)puVar9;
        *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)puVar9 + 4);
        *puVar9 = uVar5;
      }
      puVar3 = puVar2 + 1;
      uVar5 = *puVar2;
      *(undefined4 *)puVar2 = *(undefined4 *)puVar11;
      *(undefined4 *)((int)puVar2 + 4) = *(undefined4 *)((int)puVar11 + 4);
      *puVar11 = uVar5;
LAB_823d724c:
      puVar9 = puVar9 + 1;
      goto LAB_823d7250;
    }
    puVar7 = puVar8 + -1;
    if (puVar11 != param_3) {
      uVar5 = *puVar11;
      *(undefined4 *)puVar11 = *(undefined4 *)puVar7;
      *(undefined4 *)((int)puVar11 + 4) = *(undefined4 *)((int)puVar8 + -4);
      *puVar7 = uVar5;
      puVar8 = puVar7;
      puVar3 = puVar2;
      goto LAB_823d7250;
    }
    puVar3 = puVar2 + -1;
    if (puVar7 != puVar3) {
      uVar5 = *puVar7;
      *(undefined4 *)puVar7 = *(undefined4 *)puVar3;
      *(undefined4 *)((int)puVar8 + -4) = *(undefined4 *)((int)puVar2 + -4);
      *puVar3 = uVar5;
    }
    puVar10 = puVar9 + -1;
    uVar5 = *puVar3;
    *(undefined4 *)puVar3 = *(undefined4 *)puVar10;
    *(undefined4 *)((int)puVar2 + -4) = *(undefined4 *)((int)puVar9 + -4);
    *puVar10 = uVar5;
    puVar8 = puVar7;
    puVar9 = puVar10;
  } while( true );
}

