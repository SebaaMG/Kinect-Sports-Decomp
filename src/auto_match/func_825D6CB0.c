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
extern unsigned int fStack_54;
extern unsigned int fStack_64;
extern int fn_828F10B0();
extern int fn_82F6A544();
extern int fn_82F6A590();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_825D6CB0(undefined8 param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,
                  undefined4 *param_10,undefined4 *param_11,undefined4 *param_12)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double extraout_f1;
  double dVar7;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  float fStack_54;
  
  iVar4 = fn_82F6A544();
  if (((param_8 != (double)lbl_82192734) &&
      ((float)(param_7 - param_8) <=
       *(float *)(*(int *)(iVar4 + 0x2c) * 0x28 + *(int *)(iVar4 + 0x138) + 0x24))) ||
     (*(char *)(iVar4 + 0x1c0) != '\0')) {
    iVar5 = -1;
  }
  else {
    uStack_70 = *param_11;
    iVar5 = *(int *)(iVar4 + 0x2c);
    uStack_6c = param_11[1];
    uStack_68 = param_11[2];
    iVar6 = iVar5 * 0x28;
    uStack_60 = *param_12;
    uStack_5c = param_12[1];
    uStack_58 = param_12[2];
    fStack_64 = (float)param_5;
    fStack_54 = (float)param_6;
    dVar7 = extraout_f1;
    fn_828F10B0(*(int *)(iVar4 + 0x138) + iVar6 + 0x10,&uStack_70,8);
    fVar3 = lbl_821CA460;
    uVar1 = param_10[1];
    uVar2 = param_10[2];
    *(undefined4 *)(*(int *)(iVar4 + 0x138) + iVar6) = *param_10;
    *(undefined4 *)(*(int *)(iVar4 + 0x138) + iVar6 + 4) = uVar1;
    *(undefined4 *)(*(int *)(iVar4 + 0x138) + iVar6 + 8) = uVar2;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(float *)(*(int *)(iVar4 + 0x138) + iVar6 + 0xc) =
         (float)((double)(float)(param_2 - dVar7) *
                 (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar3) + dVar7);
    *(float *)(*(int *)(iVar4 + 0x138) + iVar6 + 0x20) = (float)param_7;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    *(float *)(*(int *)(iVar4 + 0x138) + iVar6 + 0x24) =
         (float)((double)(float)((double)(float)(param_4 - param_3) *
                                 (double)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar3) +
                                param_3) + param_7);
    fVar3 = *(float *)(*(int *)(iVar4 + 0x138) + iVar6 + 0x24);
    if (*(float *)(iVar4 + 0x4c) < fVar3) {
      *(float *)(iVar4 + 0x4c) = fVar3;
    }
    iVar6 = *(int *)(iVar4 + 0x2c) + 1;
    *(int *)(iVar4 + 0x2c) = iVar6;
    if (iVar6 == *(int *)(iVar4 + 0x28)) {
      *(undefined4 *)(iVar4 + 0x2c) = 0;
    }
  }
  fn_82F6A590(iVar5);
  return;
}

