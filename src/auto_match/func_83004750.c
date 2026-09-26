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
extern unsigned int fStack_58;
extern int fn_82FF5400();
extern int fn_82FF59A8();
extern unsigned int iStack_50;
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642F4;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


void fn_83004750(double param_1,int *param_2,int param_3,undefined8 param_4,ulonglong param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  double dVar2;
  double dVar3;
  int aiStack_60 [2];
  float fStack_58;
  float fStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  
  if (param_3 != 0) {
    if (*(int *)(param_3 + 0x14) != 0) {
      fStack_54 = (float)param_1;
      fn_82FF5400(lbl_832642F4,*(int *)(param_3 + 0x14),0x80000,param_5,param_7,param_6,
                        param_5);
    }
    if (*(int *)(param_3 + 0x14) == 0) {
      fStack_58 = *(float *)(param_3 + 0x2c);
      dVar3 = (double)fStack_58;
      if ((param_5 & 0xffffffff) == 0) {
        dVar2 = (double)lbl_821AAD20;
        fStack_54 = lbl_821AAD20;
      }
      else if ((param_5 & 0xffffffff) == 1) {
        dVar2 = -(double)(float)((double)(longlong)*(short *)((int)param_2 + 0x2e) *
                                 (double)lbl_82186E6C - param_1);
        fStack_54 = (float)dVar2;
      }
      else if ((param_5 & 0xffffffff) < 3) {
        fStack_54 = (float)(dVar3 + param_1);
        dVar2 = (double)fStack_54;
      }
      else {
        dVar2 = (double)fStack_54;
      }
      if ((dVar3 == dVar2) || (iStack_50 = (int)param_7, iStack_50 == 0)) {
        *(float *)(param_3 + 0x2c) = (float)dVar2;
        (**(code **)(*param_2 + 0x3c))((double)(float)(dVar2 - dVar3),param_2,1);
      }
      else {
        uStack_4c = (undefined4)param_6;
        aiStack_60[0] = param_3 + 4;
        aiStack_60[1] = 0x80000;
        uStack_48 = 1;
        uVar1 = fn_82FF59A8(lbl_832642F4,aiStack_60,1,0);
        *(undefined4 *)(param_3 + 0x14) = uVar1;
      }
    }
  }
  return;
}

