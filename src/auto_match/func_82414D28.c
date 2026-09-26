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
#define NAN(x) ((x) != (x))
extern int fn_8254EDB0();
extern int fn_8254EEB8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;


void fn_82414D28(int *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  bool bVar8;
  
  fVar2 = lbl_821CC160;
  fVar6 = lbl_82005748;
  if (param_1[0x31] == 0) {
    fn_8254EDB0(*param_1);
  }
  else {
    if (param_5 == 0) {
      uVar7 = param_2 + 0x3d;
      if (param_6 == 0) {
        uVar7 = param_2 + 0x33;
      }
      fVar2 = *(float *)((int)((uVar7 & 0xffffffff) << 2) + (int)param_1);
      param_1[0x43] = (int)fVar2;
      fVar3 = lbl_821CC160;
      fVar6 = lbl_82005748;
      bVar1 = NAN(lbl_821CC160);
      bVar8 = fVar2 < lbl_821CC160;
      param_1[0x45] = (int)lbl_821CC160;
      if (*(float *)(&lbl_821954D8 + ((uint)(byte)(bVar8 << 2) | (uint)(NAN(fVar2) || bVar1) << 2))
          < 0.0) {
        fVar2 = fVar3;
      }
      fVar5 = fVar2 - fVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar5 < fVar3) << 2) | (uint)(NAN(fVar5) || NAN(fVar3)) << 2)) <
          0.0) {
        fVar6 = fVar2;
      }
      param_1[0x44] = (int)fVar6;
    }
    else {
      iVar4 = (int)((param_2 + 0x38U & 0xffffffff) << 2);
      fVar3 = *(float *)(iVar4 + (int)param_1) + (float)param_1[0x44];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar3 = lbl_821CC160;
      }
      fVar5 = lbl_82005748;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 - lbl_82005748 < lbl_821CC160) << 2) |
                    (uint)(NAN(fVar3 - lbl_82005748) || NAN(lbl_821CC160)) << 2)) < 0.0) {
        fVar5 = fVar3;
      }
      param_1[0x44] = (int)fVar5;
      fVar3 = *(float *)(iVar4 + (int)param_1) + (float)param_1[0x43];
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar3 < fVar2) << 2) | (uint)(NAN(fVar3) || NAN(fVar2)) << 2)) <
          0.0) {
        fVar3 = fVar2;
      }
      fVar5 = fVar3 - fVar6;
      if (*(float *)(&lbl_821954D8 +
                    ((uint)(byte)((fVar5 < fVar2) << 2) | (uint)(NAN(fVar5) || NAN(fVar2)) << 2)) <
          0.0) {
        fVar6 = fVar3;
      }
    }
    param_1[0x43] = (int)fVar6;
    if (*(int *)(*param_1 + 4) != 0) {
      fn_8254EEB8(*param_1,(int)fVar6);
    }
  }
  return;
}

