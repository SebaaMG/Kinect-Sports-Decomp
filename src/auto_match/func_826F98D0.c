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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _fStack_30 ((*(U64*)&fStack_30))
extern unsigned int fStack_2c;
extern unsigned int fStack_30;
extern int fn_8267C4F0();
extern int fn_826F6968();
extern int fn_826F69C8();
extern int fn_826F6A38();
extern int fn_826F79A8();
extern int fn_8270EC50();
extern int fn_8270EC80();
extern int fn_8270ECD8();
extern float lbl_8200571C;


undefined8 fn_826F98D0(longlong param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  char cVar6;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar3;
  uint uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined1 uVar11;
  int iVar10;
  undefined4 uVar12;
  undefined2 uVar13;
  struct { float first; float second; } stack_pair_30;

  
  piVar5 = (int *)param_1;
  cVar6 = (**(code **)(*piVar5 + 0xc4))();
  if ((cVar6 == '\0') && (*param_2 != 8)) {
    return 0;
  }
  if ((piVar5[0x278] != 0) && (*(byte *)(param_2 + 1) != 0)) {
    fn_8270EC50(piVar5[0x278],0x90,*(byte *)(param_2 + 1) >> 4 & 1);
    fn_8270EC50(piVar5[0x278],0x14,*(byte *)(param_2 + 1) >> 3 & 1);
    fn_8270EC50(piVar5[0x278],0x91,*(byte *)(param_2 + 1) >> 5 & 1);
  }
  if (*param_2 == 8) {
    fn_826F79A8(param_1,1);
    return 1;
  }
  switch(*param_2) {
  case 1:
    uVar7 = param_2[6];
    if ((uint)piVar5[0x275] <= uVar7) {
      return 0;
    }
    fVar1 = ((float)piVar5[0x2c] * (float)param_2[2] + (float)piVar5[0x2e]) * lbl_8200571C;
    fVar2 = ((float)piVar5[0x2d] * (float)param_2[3] + (float)piVar5[0x2f]) * lbl_8200571C;
    if (uVar7 < 4) {
      piVar5[0x24f] = 1 << (uVar7 & 0x3f) | piVar5[0x24f];
      piVar5[(uVar7 + 0xfb) * 2 + 0x51] = (int)fVar1;
      piVar5[uVar7 * 2 + 0x248] = (int)fVar2;
    }
    break;
  case 2:
    uVar7 = param_2[6];
    if ((uint)piVar5[0x275] <= uVar7) {
      return 0;
    }
    uVar3 = 0;
    goto code_r0x826f9a3c;
  case 3:
    uVar7 = param_2[6];
    if ((uint)piVar5[0x275] <= uVar7) {
      return 0;
    }
    uVar3 = 0x80;
code_r0x826f9a3c:
    _fStack_30 = CONCAT44(((float)piVar5[0x2c] * (float)param_2[2] + (float)piVar5[0x2e]) *
                          lbl_8200571C,
                          ((float)piVar5[0x2d] * (float)param_2[3] + (float)piVar5[0x2f]) *
                          lbl_8200571C);
    fn_826F69C8(param_1 + 0x144,uVar7,&stack_pair_30.first,1 << (param_2[5] & 0x3fU),uVar3);
    break;
  case 4:
    if ((uint)piVar5[0x275] <= (uint)param_2[6]) {
      return 0;
    }
    _fStack_30 = CONCAT44(((float)piVar5[0x2c] * (float)param_2[2] + (float)piVar5[0x2e]) *
                          lbl_8200571C,
                          ((float)piVar5[0x2d] * (float)param_2[3] + (float)piVar5[0x2f]) *
                          lbl_8200571C);
    fn_826F6A38(param_1 + 0x144,param_2[6],&stack_pair_30.first,(int)(float)param_2[4]);
    break;
  case 5:
    if (piVar5[0x278] != 0) {
      fn_8270EC80(piVar5[0x278],param_2[2],*(undefined1 *)(param_2 + 3),
                      *(undefined1 *)(param_2 + 1));
    }
    param_1 = param_1 + 0x144;
    uVar8 = (undefined2)param_2[2];
    uVar11 = *(undefined1 *)(param_2 + 1);
    uVar9 = *(undefined1 *)(param_2 + 3);
    puVar4 = (undefined4 *)fn_826F6968(param_1);
    uVar12 = 1;
    uVar13 = 0;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined2 *)(puVar4 + 2) = uVar8;
    *(undefined1 *)((int)puVar4 + 10) = uVar9;
    *(undefined1 *)((int)puVar4 + 0xb) = uVar11;
    *(undefined1 *)(puVar4 + 3) = 1;
    uVar7 = param_2[4];
    if ((0x1f < uVar7) && (uVar7 != 0x7f)) {
      puVar4 = (undefined4 *)fn_826F6968(param_1);
      *puVar4 = uVar12;
      *(undefined2 *)(puVar4 + 2) = uVar13;
      *(char *)((int)puVar4 + 10) = (char)uVar13;
      puVar4[1] = uVar7;
      *(undefined1 *)((int)puVar4 + 0xb) = 0x80;
      *(char *)(puVar4 + 3) = (char)uVar12;
    }
    break;
  case 6:
    if (piVar5[0x278] != 0) {
      fn_8270ECD8(piVar5[0x278],param_2[2],*(undefined1 *)(param_2 + 3),
                      *(undefined1 *)(param_2 + 1));
    }
    uVar8 = (undefined2)param_2[2];
    uVar11 = *(undefined1 *)(param_2 + 1);
    uVar9 = *(undefined1 *)(param_2 + 3);
    puVar4 = (undefined4 *)fn_826F6968(param_1 + 0x144);
    *puVar4 = 1;
    *(undefined2 *)(puVar4 + 2) = uVar8;
    *(undefined1 *)((int)puVar4 + 10) = uVar9;
    puVar4[1] = 0;
    *(undefined1 *)((int)puVar4 + 0xb) = uVar11;
    *(undefined1 *)(puVar4 + 3) = 0;
    return 3;
  default:
    return 0;
  case 9:
    fn_826F79A8(param_1,0);
    return 0;
  case 0xd:
    iVar10 = param_2[2];
    puVar4 = (undefined4 *)fn_826F6968(param_1 + 0x144);
    *puVar4 = 1;
    *(undefined2 *)(puVar4 + 2) = 0;
    *(undefined1 *)((int)puVar4 + 10) = 0;
    puVar4[1] = iVar10;
    *(undefined1 *)((int)puVar4 + 0xb) = 0x80;
    *(undefined1 *)(puVar4 + 3) = 1;
    return 3;
  case 0xe:
    piVar5 = (int *)(**(code **)(piVar5[2] + 0xc))(param_1 + 8,0x1b);
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    uVar3 = (**(code **)(*piVar5 + 0x60))(piVar5,param_1,param_2);
    fn_8267C4F0(piVar5);
    return uVar3;
  }
  return 3;
}

