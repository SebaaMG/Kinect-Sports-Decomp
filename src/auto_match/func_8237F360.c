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
extern unsigned int *auStack_80;
extern int fn_8237F4A8();
extern int fn_8237F8E0();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_831CB358;
extern unsigned int lbl_831CB35C;
extern unsigned int uStack_88;
extern unsigned int uStack_90;


void fn_8237F360(undefined8 param_1,int param_2,int param_3,int param_4)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 auStack_80 [16];
  
  uVar1 = fn_82F6A548();
  fn_8237F8E0(&uStack_90,uVar1);
  fn_8237F8E0(&uStack_88,uVar1);
  fn_8237F8E0(auStack_80,uVar1);
  dVar4 = (double)lbl_831CB35C;
  dVar7 = (double)lbl_831CB358;
  dVar2 = (double)fn_8237F4A8(dVar7,dVar4,uStack_90);
  dVar3 = (double)fn_8237F4A8(dVar7,dVar4,uStack_88);
  dVar5 = (double)lbl_821CC160;
  dVar6 = dVar5;
  if (param_3 != 0) {
    dVar5 = (double)fn_8237F4A8(dVar7,dVar4,auStack_80[0]);
  }
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)(((double)(float)(dVar2 - dVar5) < dVar6) << 2) |
                (uint)(NAN((double)(float)(dVar2 - dVar5)) || NAN(dVar6)) << 2)) < 0.0) {
    dVar2 = dVar5;
  }
  if (param_4 != 0) {
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)(((double)(float)(dVar2 - dVar3) < dVar6) << 2) |
                  (uint)(NAN((double)(float)(dVar2 - dVar3)) || NAN(dVar6)) << 2)) < 0.0) {
      dVar2 = dVar3;
    }
  }
  fn_82F6A594((double)(float)((double)*(float *)(param_2 + 0x1c) * dVar2));
  return;
}

