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
extern int fn_827FF0D0();
extern int fn_82809E58();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827FF7C8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  uint uVar6;
  int *piVar7;
  double dVar8;
  double dVar9;
  
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x30);
  if (iVar2 == 0) {
    sVar5 = 0;
  }
  else {
    sVar5 = *(short *)(iVar1 + 0x22);
  }
  if (sVar5 != 0) {
    iVar3 = *(int *)(iVar2 + 0x24);
    if (iVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar1 + 0x22);
    }
    dVar9 = (double)lbl_82002AE0;
    dVar8 = (double)fn_82809E58((double)(float)((double)(longlong)(int)(uVar6 - 1) *
                                                 (double)*(float *)(iVar2 + 0x28) + dVar9));
    uVar6 = (uint)(longlong)dVar8 & 0xffff;
    iVar4 = fn_827FF0D0(param_1);
    iVar1 = lbl_821AAD20;
    piVar7 = (int *)(iVar4 * (uVar6 - 1) * 4 + iVar3);
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      param_1[0x32] = lbl_821AAD20;
    }
    else {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      param_1[0x32] = iVar3;
    }
    if (*(char *)(iVar2 + 0x1d) == '\0') {
      param_1[0x33] = iVar1;
    }
    else {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      param_1[0x33] = iVar3;
    }
    if (*(char *)(iVar2 + 0x1e) == '\0') {
      param_1[0x34] = iVar1;
    }
    else {
      iVar3 = *piVar7;
      piVar7 = piVar7 + 1;
      param_1[0x34] = iVar3;
    }
    if (((*(char *)(iVar2 + 0x1f) == '\0') && (*(char *)(iVar2 + 0x20) == '\0')) &&
       (*(char *)(iVar2 + 0x21) == '\0')) {
      param_1[0x35] = iVar1;
      param_1[0x36] = iVar1;
      param_1[0x37] = iVar1;
      param_1[0x38] = (int)(float)dVar9;
    }
    else {
      param_1[0x35] = *piVar7;
      param_1[0x36] = piVar7[1];
      param_1[0x37] = piVar7[2];
      param_1[0x38] = piVar7[3];
    }
  }
  return;
}

