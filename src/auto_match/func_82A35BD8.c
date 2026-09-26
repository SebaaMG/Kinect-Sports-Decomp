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
extern unsigned int *auStack_70;
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


bool fn_82A35BD8(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 *puStack_64;
  undefined4 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  RtlInitAnsiString(auStack_70,param_1);
  puStack_64 = auStack_70;
  uStack_68 = 0xfffffffd;
  uStack_60 = 0x40;
  iVar1 = (**(code **)(lbl_8315D3D0 + 0x2c))(&uStack_68,&uStack_50);
  if (iVar1 < 0) {
    fn_82A2B760();
  }
  else {
    *param_3 = uStack_20;
    *(undefined8 *)(param_3 + 1) = uStack_50;
    *(undefined8 *)(param_3 + 3) = uStack_48;
    *(undefined8 *)(param_3 + 5) = uStack_40;
    param_3[7] = uStack_28;
    param_3[8] = uStack_24;
  }
  return iVar1 >= 0;
}

