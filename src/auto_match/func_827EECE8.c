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
extern unsigned int *auStack_60;
extern int fn_827EE128();
extern int fn_8280A5D8();
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810328();
extern int fn_82810470();
extern int fn_82810B78();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_821AAD20;


void fn_827EECE8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 extraout_f1;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined1 auStack_60 [96];
  
  uVar1 = fn_82F6A548();
  uVar10 = extraout_f1;
  uVar5 = fn_82810280();
  uVar6 = fn_82810308(uVar1);
  lVar2 = fn_827EE128(param_2,uVar6,uVar5,uVar10,param_3,uVar1,param_5);
  if (lVar2 != 0) {
    lVar4 = 2;
    dVar9 = (double)lbl_821AAD20;
    do {
      dVar7 = (double)fn_82810280(param_8,param_11);
      if (dVar7 < dVar9) {
        fn_82810308(param_8);
        dVar8 = (double)fn_8280A5D8();
        fn_828102A8((double)(float)(dVar8 * dVar7),param_8,auStack_60);
        fn_82810328(param_11,auStack_60,param_11);
        iVar3 = fn_82810470(param_11);
        if (iVar3 == 0) {
          fn_82810B78(param_11,param_11);
        }
      }
      lVar4 = lVar4 + -1;
      param_8 = param_8 + 0xc;
    } while (lVar4 != 0);
  }
  fn_82F6A594(lVar2);
  return;
}

