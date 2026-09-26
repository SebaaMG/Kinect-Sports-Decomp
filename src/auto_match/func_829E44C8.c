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
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern int fn_829E3D18();
extern int fn_829E40C8();
extern int fn_829E4250();
extern int fn_829E5718();
extern int fn_829E5A78();
extern int fn_829E60D0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_82057B24;
extern unsigned int uStack_70;
extern unsigned int uStack_74;


void fn_829E44C8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar5;
  undefined8 uVar4;
  undefined4 uVar6;
  double extraout_f1;
  double dVar7;
  double dVar8;
  double dVar9;
  float *in_stack_0000005c;
  undefined4 *in_stack_00000064;
  undefined4 *in_stack_0000006c;
  undefined4 *in_stack_00000074;
  float *in_stack_0000007c;
  float *in_stack_00000084;
  int aiStack_80 [3];
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  
  iVar5 = fn_82F6A548();
  dVar7 = extraout_f1;
  uVar4 = fn_829E5718(iVar5 + 8);
  if (-1 < (int)uVar4) {
    uVar4 = fn_829E60D0((double)*(float *)(iVar5 + 0x88),(double)*(float *)(iVar5 + 0xe4),
                              iVar5 + 0x24,iVar5 + 8,param_6,
                              (longlong)*(int *)(iVar5 + 0x78) * (longlong)*(int *)(iVar5 + 0x7c),
                              param_7,&fStack_64,*(int *)(iVar5 + 0x7c),&uStack_74);
    if (((-1 < (int)uVar4) &&
        (uVar4 = fn_829E5A78(iVar5 + 0x24,aiStack_80 + 2,aiStack_80), -1 < (int)uVar4)) &&
       (uVar4 = fn_829E3D18(iVar5,&fStack_68,&fStack_6c), -1 < (int)uVar4)) {
      dVar8 = (double)fStack_6c;
      aiStack_80[1] = 0;
      fStack_6c = 0.0;
      if ((aiStack_80[0] == 1) ||
         (uVar4 = fn_829E40C8(dVar8,dVar7,param_2,param_3,iVar5,param_9,aiStack_80[0],
                                aiStack_80[2]), -1 < (int)uVar4)) {
        dVar9 = (double)fStack_68;
        uVar4 = fn_829E4250(dVar7,dVar8,dVar9,(double)fStack_64,iVar5,param_9);
        fVar3 = lbl_82005CCC;
        if (-1 < (int)uVar4) {
          if (aiStack_80[0] == 1) {
            uVar6 = 0;
            fVar1 = (float)((double)(*(float *)(iVar5 + 0x88) / fStack_60) * dVar9);
            *(float *)(iVar5 + 0x80) = fVar1;
            if (((fVar3 < fVar1) || (fVar2 = lbl_82057B24, lbl_82057B24 <= fVar1)) &&
               (fVar2 = fVar1, fVar3 < fVar1)) {
              fVar2 = fVar3;
            }
            *(float *)(iVar5 + 0x84) = fVar2;
            *(undefined4 *)(iVar5 + 0x94) = 0;
            *(float *)(iVar5 + 0x98) = (float)dVar8;
            *(float *)(iVar5 + 0x9c) = (float)dVar7;
          }
          else {
            uVar6 = 1;
          }
          uVar4 = 0;
          *in_stack_0000005c = fStack_60;
          *in_stack_00000064 = uStack_74;
          *in_stack_0000006c = uStack_70;
          *in_stack_00000074 = uVar6;
          *in_stack_0000007c = (float)dVar8;
          *in_stack_00000084 = fStack_6c;
        }
      }
    }
  }
  fn_82F6A594(uVar4);
  return;
}

