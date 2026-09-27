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
extern int fn_82535298();
extern unsigned int lbl_821916FC;
extern unsigned int lbl_82192480;
extern unsigned int lbl_821CC160;
extern float lbl_8327F894;


void fn_825F8620(int param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int aiStack_20 [2];
  
  iVar7 = param_2[param_3 * 0xb + 3];
  if (*(float *)(iVar7 + 8) <= lbl_821CC160) {
    iVar6 = 0;
    iVar4 = 0;
    if (*(int *)(iVar7 + 0x18) == 3) {
      iVar4 = param_2[0xa3];
    }
    if ((iVar4 != *(int *)(iVar7 + 0x10)) && (lbl_821CC160 < *(float *)(iVar7 + 0xc))) {
      fVar2 = lbl_821CC160;
      if (*(float *)(param_1 + 0x838) <= lbl_821CC160) {
        fVar2 = *(float *)(param_1 + 0x820) * lbl_8327F894;
      }
      *(float *)(iVar7 + 0xc) = *(float *)(iVar7 + 0xc) - fVar2;
      return;
    }
    *(undefined4 *)(iVar7 + 0xc) = lbl_821916FC;
    *(int *)(param_2[param_3 * 0xb + 3] + 0x10) = iVar4;
    piVar1 = (int *)param_2[param_3 * 0xb + 3];
    iVar7 = iVar6;
    if ((piVar1[4] != 0) && (iVar4 = 0, 0 < piVar1[1])) {
      iVar5 = 0;
      do {
        iVar7 = iVar4;
        if (piVar1[4] == *(int *)((int)piVar1 + iVar5 + 0x1c)) break;
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 8;
        iVar7 = iVar6;
      } while (iVar4 < *(int *)(param_2[param_3 * 0xb + 3] + 4));
    }
    if (iVar7 == *piVar1) {
      return;
    }
    aiStack_20[0] = piVar1[(iVar7 + 4) * 2];
    param_2[param_3 * 0xb + 1] = aiStack_20[0];
    uVar3 = fn_82535298(aiStack_20,*param_2,0xffffffff83296bc0,0xffffffff83296bd0);
    param_2[param_3 * 0xb + 2] = uVar3;
    *(int *)param_2[param_3 * 0xb + 3] = iVar7;
    iVar7 = param_2[param_3 * 0xb + 3];
    fVar2 = lbl_82192480;
  }
  else {
    fVar2 = lbl_821CC160;
    if (*(float *)(param_1 + 0x838) <= lbl_821CC160) {
      fVar2 = *(float *)(param_1 + 0x820) * lbl_8327F894;
    }
    fVar2 = *(float *)(iVar7 + 8) - fVar2;
  }
  *(float *)(iVar7 + 8) = fVar2;
  return;
}

