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
extern unsigned int *auStack_78;
extern unsigned int *auStack_88;
extern unsigned int fStack_94;
extern int fn_8285DA18();
extern int fn_82862A00();
extern int fn_82862A08();
extern int fn_82862A18();
extern int fn_82862A20();
extern int fn_82862ED8();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DCB8;
extern unsigned int lbl_8201F840;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_98;
extern unsigned int uStack_9c;


undefined8 fn_8285DB68(double param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  int iVar2;
  float *in_r7;
  undefined8 uVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [24];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  uStack_9c = 0;
  uStack_98 = 0;
  uVar3 = 0;
  fStack_94 = lbl_8200133C;
  dVar4 = (double)fn_82862A18();
  if (param_1 <= dVar4) {
    fn_82862A00(param_3,&uStack_9c);
    fn_82862A08(param_3,&uStack_98);
    uVar5 = fn_82862A20(param_3);
    uVar6 = fn_82862A18(param_3);
    iVar2 = fn_82862ED8(uVar6,uVar5,param_2,uStack_9c);
    fVar1 = lbl_8201F840;
    if ((iVar2 == -1) || (iVar2 == 1)) {
      uVar3 = 3;
      if (iVar2 == -1) {
        uVar3 = 2;
      }
      dVar4 = (double)fn_82862A18(param_3);
      in_r7[1] = -fStack_94;
      *in_r7 = fStack_94;
      uStack_5c = lbl_821AAD20;
      uStack_58 = lbl_82002AE0;
      dVar7 = (double)lbl_8201DCB8;
      uStack_60 = lbl_821AAD20;
      in_r7[4] = fVar1;
      in_r7[2] = -fStack_94;
      in_r7[3] = fStack_94;
      uStack_54 = uStack_58;
      uStack_50 = uStack_5c;
      uStack_4c = uStack_58;
      in_r7[5] = (float)(dVar4 + dVar7);
      fn_8285DA18(uStack_9c,auStack_78,auStack_88,in_r7,&uStack_60);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

