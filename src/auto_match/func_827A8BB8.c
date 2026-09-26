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
#define CONCAT14(h,l) ((U64)((((U8)(h)) << 32) | ((U32)(l))))
#define CONCAT17(h,l) ((U64)((((U8)(h)) << 56) | ((U64)(l))))
#define CONCAT25(h,l) ((U64)((((U16)(h)) << 40) | ((U64)(l))))
#define _auStack_6d ((*(U64*)&auStack_6d))
#define _uStack_70 ((*(U64*)&uStack_70))
extern unsigned int *auStack_6d;
extern unsigned int *auStack_6f;
extern unsigned int fStack_54;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_827A8A28();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_46;
extern unsigned int uStack_48;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;
extern unsigned int uStack_68;
extern unsigned int uStack_6a;
extern unsigned int uStack_70;


undefined8 fn_827A8BB8(int *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 uStack_70;
  undefined1 auStack_6f [2];
  undefined1 auStack_6d [3];
  undefined2 uStack_6a;
  undefined8 uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  piVar1 = *(int **)(*param_1 + 0xc);
  (**(code **)(*piVar1 + 0x6c))(piVar1,param_4);
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  uStack_34 = param_2[3];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  fStack_60 = lbl_821AAD20;
  fStack_5c = lbl_821AAD20;
  fStack_58 = lbl_821AAD20;
  fStack_54 = lbl_821AAD20;
  uStack_40 = *param_2;
  fn_827A8A28(&uStack_40,param_3,&fStack_60);
  (**(code **)(*piVar1 + 0x20))(piVar1,&uStack_40);
  uStack_6a = (undefined2)(int)fStack_5c;
  uStack_4e = uStack_6a;
  uStack_68 = ((((U64)(uStack_68)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)fStack_58)) & ((U64)0xFFFF)) << 48));
  uStack_4c = (((U64)(uStack_68) >> 48) & 0xFFFF);
  uStack_6a = (undefined2)(int)fStack_54;
  uStack_68 = ((((U64)(uStack_68)) & (~(((U64)0xFFFF) << 48))) | ((((U64)((undefined2)(int)fStack_60)) & ((U64)0xFFFF)) << 48));
  uStack_50 = (((U64)(uStack_68) >> 48) & 0xFFFF);
  uStack_4a = uStack_4e;
  uStack_48 = (((U64)(uStack_68) >> 48) & 0xFFFF);
  uStack_46 = uStack_6a;
  uStack_44 = uStack_4c;
  uStack_42 = uStack_6a;
  _auStack_6d = CONCAT14(0xff,(int)fStack_54);
  _uStack_70 = CONCAT17(0xff,CONCAT25(0xffff,_auStack_6d));
  uStack_68 = (longlong)(int)fStack_60;
  (**(code **)(*piVar1 + 0x5c))(piVar1,&uStack_70);
  (**(code **)(*piVar1 + 0x3c))(piVar1,&uStack_50,4,1,0);
  (**(code **)(*piVar1 + 0x40))(piVar1,0xffffffff820116cc,6,1,0);
  (**(code **)(*piVar1 + 0x48))(piVar1,0,0,4,0,2);
  (**(code **)(*piVar1 + 0x3c))(piVar1,0,0,0,0);
  (**(code **)(*piVar1 + 0x40))(piVar1,0,0,0,0);
  (**(code **)(*piVar1 + 0x70))(piVar1);
  return 1;
}

