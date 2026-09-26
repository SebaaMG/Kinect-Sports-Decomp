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
extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_82810328();
extern unsigned int lbl_82015468;
extern unsigned int lbl_821AAD20;


undefined8 fn_82862A60(int param_1,undefined8 param_2,undefined8 param_3,float *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_40 [64];
  
  fn_82810328(param_1,param_3,auStack_40);
  dVar3 = (double)fn_82810280(param_2,auStack_40);
  *param_4 = (float)dVar3;
  dVar4 = (double)lbl_821AAD20;
  if ((dVar3 < dVar4) || ((double)*(float *)(param_1 + 0x18) < dVar3)) {
    uVar2 = 0;
  }
  else {
    if (((double)*(float *)(param_1 + 0x1c) <= dVar4) ||
       (bVar1 = true, (double)lbl_82015468 <= (double)*(float *)(param_1 + 0x1c))) {
      bVar1 = false;
    }
    if ((!bVar1) || (dVar3 = (double)fn_82810280(param_2,param_1 + 0xc), dVar3 < dVar4)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

