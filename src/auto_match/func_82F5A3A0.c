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
extern unsigned int *auStack_80;
extern float fRam831bafc4;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern int fn_82F59488();
extern int fn_82F59BB0();
extern int fn_82F59C30();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern float lbl_82002C5C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;


double fn_82F5A3A0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_stack_00000050;
  float in_stack_00000054;
  float in_stack_00000058;
  float in_stack_00000060;
  float in_stack_00000064;
  float in_stack_00000068;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined1 auStack_80 [128];
  
  fn_82F59488(auStack_80,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  fn_82F59BB0();
  fn_82F59C30(&fStack_90);
  fVar5 = lbl_82002AE0;
  if (lbl_821AAD20 <= in_stack_00000050) {
    fVar2 = in_stack_00000060 * in_stack_00000050 * lbl_8200133C - fRam831bafc4;
    fVar1 = (lbl_82002AE0 - in_stack_00000060) * in_stack_00000050 + fRam831bafc4;
    if ((fStack_90 < fVar2) || (fVar1 < fStack_90)) {
      fVar3 = (fVar1 + fVar2) * lbl_82002C5C + lbl_8201DD74;
      if (fVar2 <= fStack_90) {
        if (fVar1 < fStack_90) {
          fVar5 = (fStack_90 - fVar3) / (fVar1 - fVar3);
        }
      }
      else {
        fVar5 = (fStack_90 - (fVar3 - lbl_82015468)) / (fVar2 - (fVar3 - lbl_82015468));
      }
    }
  }
  fVar1 = lbl_82002AE0;
  if (lbl_821AAD20 <= in_stack_00000054) {
    fVar2 = in_stack_00000064 * in_stack_00000054 * lbl_8200133C - fRam831bafc4;
    fVar3 = (lbl_82002AE0 - in_stack_00000064) * in_stack_00000054 + fRam831bafc4;
    if ((fStack_8c < fVar2) || (fVar3 < fStack_8c)) {
      fVar4 = (fVar3 + fVar2) * lbl_82002C5C + lbl_8201DD74;
      if (fVar2 <= fStack_8c) {
        if (fVar3 < fStack_8c) {
          fVar1 = (fStack_8c - fVar4) / (fVar3 - fVar4);
        }
      }
      else {
        fVar1 = (fStack_8c - (fVar4 - lbl_82015468)) / (fVar2 - (fVar4 - lbl_82015468));
      }
    }
  }
  fVar2 = lbl_82002AE0;
  if (lbl_821AAD20 <= in_stack_00000058) {
    fVar3 = in_stack_00000068 * in_stack_00000058 * lbl_8200133C - fRam831bafc4;
    fVar4 = (lbl_82002AE0 - in_stack_00000068) * in_stack_00000058 + fRam831bafc4;
    if ((fStack_88 < fVar3) || (fVar4 < fStack_88)) {
      fVar6 = (fVar4 + fVar3) * lbl_82002C5C + lbl_8201DD74;
      if (fVar3 <= fStack_88) {
        if (fVar4 < fStack_88) {
          fVar2 = (fStack_88 - fVar6) / (fVar4 - fVar6);
        }
      }
      else {
        fVar2 = (fStack_88 - (fVar6 - lbl_82015468)) / (fVar3 - (fVar6 - lbl_82015468));
      }
    }
  }
  return (double)(fVar2 * fVar1 * fVar5);
}

