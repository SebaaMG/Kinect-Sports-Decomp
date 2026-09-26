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
extern int fn_82F65AC0();
extern int fn_82F6ADA8();


undefined8
fn_82E7EE40(ushort *param_1,ushort param_2,double *param_3,double *param_4,int *param_5)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  char *pcVar5;
  double *pdVar6;
  char *pcVar8;
  float fVar9;
  ulonglong uVar7;
  char *pcVar11;
  float fVar12;
  ulonglong uVar10;
  undefined8 uVar13;
  bool bVar14;
  byte bVar15;
  
  uVar13 = 0;
  if (((param_3 == (double *)0x0) || (param_4 == (double *)0x0)) || (param_5 == (int *)0x0)) {
    return 0xffffffff80004003;
  }
  *param_5 = 0;
  if (param_2 != (*param_1 & 0xfff)) {
    return 0xffffffffc00d36eb;
  }
  switch(param_2) {
  case 0:
  case 1:
    *param_5 = 0;
    break;
  case 2:
    uVar10 = (ulonglong)*(short *)param_3;
    uVar7 = (ulonglong)*(short *)param_4;
    goto code_r0x82e7ef64;
  case 3:
  case 10:
  case 0x16:
    uVar10 = (ulonglong)(uint)*(float *)param_3;
    uVar7 = (ulonglong)(uint)*(float *)param_4;
    goto code_r0x82e7ef64;
  case 4:
    if (*(float *)param_3 < *(float *)param_4) goto code_r0x82e7ef6c;
    bVar15 = (*(float *)param_4 < *(float *)param_3) << 2;
    goto code_r0x82e7efe0;
  case 5:
  case 7:
    if (*param_4 <= *param_3) {
      bVar15 = (*param_4 < *param_3) << 2;
      goto code_r0x82e7efe0;
    }
    goto code_r0x82e7ef6c;
  case 6:
  case 0x14:
    bVar15 = ((longlong)*param_3 < (longlong)*param_4) << 3 |
             ((longlong)*param_4 < (longlong)*param_3) << 2;
    goto code_r0x82e7efdc;
  case 8:
  case 0x1f:
    iVar4 = fn_82F6ADA8(*(float *)param_3,*(float *)param_4);
    goto code_r0x82e7eeec;
  case 9:
  case 0xd:
    iVar4 = (int)param_4 - (int)param_3;
    goto code_r0x82e7ef4c;
  case 0xb:
    iVar4 = (uint)*(ushort *)param_4 - (uint)*(ushort *)param_3;
code_r0x82e7ef4c:
    bVar14 = iVar4 == 0;
    goto code_r0x82e7ef34;
  default:
    uVar13 = 0xffffffffc00d36e8;
    break;
  case 0x10:
    uVar10 = (ulonglong)(char)*(byte *)param_3;
    uVar7 = (ulonglong)(char)*(byte *)param_4;
code_r0x82e7ef64:
    if ((int)uVar10 < (int)uVar7) {
code_r0x82e7ef6c:
      iVar4 = -1;
    }
    else {
      iVar4 = -((int)uVar10 >> 0x1f) - ((uint)(uVar7 < uVar10) - ((int)uVar7 >> 0x1f));
    }
code_r0x82e7ef38:
    *param_5 = iVar4;
    break;
  case 0x11:
    fVar12 = (float)(uint)*(byte *)param_3;
    fVar9 = (float)(uint)*(byte *)param_4;
    goto code_r0x82e7ef90;
  case 0x12:
    fVar12 = (float)(uint)*(ushort *)param_3;
    fVar9 = (float)(uint)*(ushort *)param_4;
    goto code_r0x82e7ef90;
  case 0x13:
  case 0x17:
    fVar12 = *(float *)param_3;
    fVar9 = *(float *)param_4;
code_r0x82e7ef90:
    if ((uint)fVar12 < (uint)fVar9) goto code_r0x82e7ef6c;
    bVar14 = (uint)fVar12 <= (uint)fVar9;
code_r0x82e7ef34:
    iVar4 = -(uint)!bVar14;
    goto code_r0x82e7ef38;
  case 0x15:
    bVar15 = ((ulonglong)*param_3 < (ulonglong)*param_4) << 3 |
             ((ulonglong)*param_4 < (ulonglong)*param_3) << 2;
code_r0x82e7efdc:
    if ((bool)(bVar15 >> 3)) goto code_r0x82e7ef6c;
code_r0x82e7efe0:
    iVar4 = -1;
    if (!(bool)(bVar15 >> 2 & 1)) {
      iVar4 = 0;
    }
    goto code_r0x82e7ef38;
  case 0x1e:
    iVar4 = fn_82F65AC0(*(float *)param_3,*(float *)param_4);
code_r0x82e7eeec:
    *param_5 = iVar4;
    break;
  case 0x40:
    pdVar6 = param_3 + 1;
    do {
      bVar15 = *(byte *)param_3;
      bVar3 = *(byte *)param_4;
      if ((ulonglong)bVar15 - (ulonglong)bVar3 != 0) break;
      param_3 = (double *)((int)param_3 + 1);
      param_4 = (double *)((int)param_4 + 1);
    } while (param_3 != pdVar6);
    *param_5 = (int)((ulonglong)bVar15 - (ulonglong)bVar3);
    break;
  case 0x48:
    pcVar11 = *(char **)param_3;
    pcVar8 = *(char **)param_4;
    pcVar5 = pcVar11 + 0x10;
    do {
      cVar1 = *pcVar11;
      cVar2 = *pcVar8;
      if (cVar1 != cVar2) break;
      pcVar11 = pcVar11 + 1;
      pcVar8 = pcVar8 + 1;
    } while (pcVar11 != pcVar5);
    bVar14 = cVar1 == cVar2;
    goto code_r0x82e7ef34;
  }
  return uVar13;
}

