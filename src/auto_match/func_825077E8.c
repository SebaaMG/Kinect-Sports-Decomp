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
extern unsigned int fStack_5c;
extern unsigned int fStack_68;
extern int fn_82554260();
extern int fn_82554860();
extern int fn_827F04B0();
extern int fn_827F2DD0();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


undefined8 fn_825077E8(undefined4 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar2;
  ulonglong uVar1;
  int iVar3;
  double dVar4;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar3 = param_1[0x51];
  dVar4 = (double)lbl_821CC160;
  if (iVar3 == 0) {
    uVar2 = (**(code **)(*(int *)*param_1 + 0x4c))();
    param_1[0x50] = uVar2;
    uVar1 = fn_827F04B0(0x1a0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_82554260(uVar1,param_1[0x50],1);
    }
    param_1[0x51] = uVar2;
    fn_827F2DD0(dVar4,param_1[0x50]);
    iVar3 = param_1[0x51];
    if (iVar3 == 0) {
      return 0;
    }
  }
  fStack_68 = (float)dVar4;
  fStack_5c = (float)dVar4;
  uStack_4c = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_48 = 0;
  uStack_70 = 0x4d697850;
  uStack_6c = lbl_821CA460;
  uStack_64 = 0x20;
  uStack_60 = lbl_821917C0;
  uStack_54 = 0x40;
  uStack_50 = lbl_821917C0;
  uStack_44 = 0;
  uStack_58 = param_3;
  fn_82554860(iVar3,0,param_2,&uStack_70);
  return 1;
}

