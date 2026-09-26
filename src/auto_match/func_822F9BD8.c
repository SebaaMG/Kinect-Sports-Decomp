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
extern int fn_822F9E08();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CCAC0;
extern unsigned int lbl_831CCAC8;
extern unsigned int lbl_831CCACC;
extern unsigned int lbl_831CCAD0;
extern unsigned int lbl_831CCAD4;
extern unsigned int lbl_831CCAD8;
extern unsigned int lbl_831CCAE0;
extern unsigned int lbl_831CCAE4;
extern unsigned int lbl_83265A28;


ulonglong fn_822F9BD8(double param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  ulonglong uVar7;
  undefined *puVar8;
  
  piVar4 = (int *)param_2;
  fVar2 = (float)piVar4[9];
  fVar1 = (float)(param_1 + (double)(float)piVar4[8]);
  piVar4[8] = (int)fVar1;
  piVar4[9] = (int)(float)(param_1 + (double)fVar2);
  fVar6 = lbl_821CC160;
  if (piVar4[0xb] == 0) {
    if (fVar1 <= (float)piVar4[10]) goto LAB_822f9df0;
    piVar4[0xb] = 1;
    piVar4[8] = (int)lbl_821CC160;
    uVar7 = fn_822F9E08(param_2);
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    iVar5 = (*(int *)(*(int *)param_2 + 0x844) * 6 + (int)uVar7) * 0xc;
    fVar1 = (*(float *)(&lbl_831CCAE4 + iVar5) - *(float *)(&lbl_831CCAE0 + iVar5)) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
            *(float *)(&lbl_831CCAE0 + iVar5);
  }
  else {
    puVar8 = &lbl_831CCAC0;
    if (lbl_831CCAD0 < fVar1) {
      fVar3 = lbl_821CC160;
      if (*(int *)(*piVar4 + 0x1e4) != 0) {
        fVar3 = *(float *)(*(int *)(*piVar4 + 0x1e4) + 0x178);
      }
      if ((lbl_831CCAD4 < fVar3) && (lbl_831CCAD8 < (float)(param_1 + (double)fVar2))) {
        piVar4[8] = (int)lbl_821CC160;
        piVar4[9] = (int)fVar6;
        piVar4[0xb] = 0;
        uVar7 = 1;
        lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
        fVar1 = (lbl_831CCACC - lbl_831CCAC8) *
                ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) + lbl_831CCAC8;
        goto LAB_822f9cc0;
      }
    }
    if (fVar1 <= (float)piVar4[10]) {
LAB_822f9df0:
      return (ulonglong)(uint)piVar4[5];
    }
    piVar4[8] = (int)lbl_821CC160;
    uVar7 = fn_822F9E08(param_2);
    iVar5 = (*(int *)(*(int *)param_2 + 0x844) * 6 + (int)uVar7) * 0xc;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    fVar1 = (*(float *)(puVar8 + iVar5 + 0x24) - *(float *)(puVar8 + iVar5 + 0x20)) *
            ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) +
            *(float *)(puVar8 + iVar5 + 0x20);
  }
LAB_822f9cc0:
  *(float *)((int)param_2 + 0x28) = fVar1;
  return uVar7;
}

