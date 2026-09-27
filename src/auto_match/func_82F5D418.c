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
extern unsigned int fStack_58;
extern unsigned int fStack_60;
extern unsigned int fStack_64;
extern unsigned int fStack_68;
extern unsigned int fStack_6c;
extern int fn_82F593C8();
extern int fn_82F593D8();
extern int memcpy();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern float lbl_82002C5C;
extern unsigned int lbl_82005748;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_820570E8;
extern unsigned int lbl_82167C54;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_5c;
extern unsigned int uStack_70;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82F5D418(undefined8 param_1,double param_2,double param_3)

{
  bool bVar1;
  undefined8 uVar2;
  float *in_r7;
  undefined4 uVar3;
  double extraout_f1;
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  struct { undefined4 first; float second; } stack_pair_70;

  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  float fStack_58;
  
  uVar2 = fn_82F6A548();
  dVar9 = (double)lbl_821AAD20;
  dVar6 = extraout_f1;
  if ((param_2 == dVar9) || (param_3 == dVar9)) {
    dVar4 = (double)fn_82F593D8(param_2,param_3);
  }
  else {
    dVar4 = (double)fn_82F593C8();
  }
  if (dVar4 != dVar9) {
    dVar6 = (double)((float)(dVar4 + dVar6) * lbl_82002C5C);
  }
  uVar3 = 0;
  dVar9 = (double)lbl_82005748;
  if (dVar6 <= (double)*in_r7) {
    if ((double)in_r7[3] < dVar6) {
      bVar1 = false;
      dVar4 = dVar9;
      goto LAB_82f5d500;
    }
    if (dVar6 <= (double)in_r7[6]) {
      if (dVar6 <= (double)in_r7[9]) {
        dVar4 = (double)in_r7[0x3f];
        uVar3 = 3;
        dVar9 = (double)in_r7[0x42];
      }
      else {
        dVar4 = (double)in_r7[0x39];
        uVar3 = 2;
        dVar9 = (double)in_r7[0x3c];
      }
    }
    else {
      dVar4 = (double)in_r7[0x33];
      uVar3 = 1;
      dVar9 = (double)in_r7[0x36];
    }
  }
  else {
    dVar4 = (double)in_r7[0xc];
    dVar9 = (double)in_r7[0xf];
    uVar3 = 0;
  }
  bVar1 = true;
LAB_82f5d500:
  if (bVar1) {
    memcpy(&stack_pair_70.first,0xffffffff82167c28,0x2c);
    uStack_5c = uVar3;
    uVar5 = fn_82F593C8((double)lbl_82167C54,
                         (double)(float)((double)(float)(dVar4 - dVar6) / dVar9));
    dVar6 = (double)fn_82F593D8((double)lbl_820570E8,uVar5);
    fStack_58 = (float)dVar6;
  }
  else {
    memcpy(&stack_pair_70.first,0xffffffff82167c28,0x2c);
    dVar9 = (double)in_r7[0x30];
    stack_pair_70.first = 0;
    dVar10 = (double)lbl_820570E0;
    stack_pair_70.second = in_r7[0x2d];
    dVar8 = (double)in_r7[0x24];
    dVar7 = (double)((float)(dVar9 - dVar6) * in_r7[0x1e] + in_r7[0x15]);
    dVar4 = (double)((float)(dVar9 - dVar6) * in_r7[0x21] + in_r7[0x18]);
    uVar5 = fn_82F593D8(dVar10,(double)((float)(dVar9 - dVar6) * in_r7[0x1b] + in_r7[0x12]));
    dVar6 = (double)fn_82F593C8(dVar8,uVar5);
    fStack_68 = (float)dVar6;
    dVar6 = (double)in_r7[0x27];
    uVar5 = fn_82F593D8(dVar10,dVar7);
    dVar6 = (double)fn_82F593C8(dVar6,uVar5);
    fStack_64 = (float)dVar6;
    dVar6 = (double)in_r7[0x2a];
    uVar5 = fn_82F593D8(dVar10,dVar4);
    dVar6 = (double)fn_82F593C8(dVar6,uVar5);
    fStack_60 = (float)dVar6;
  }
  memcpy(uVar2,&stack_pair_70.first,0x2c);
  fn_82F6A594(uVar2);
  return;
}

