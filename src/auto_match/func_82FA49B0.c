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
extern int fn_82F655D8();
extern unsigned int lbl_82005344;
extern unsigned int lbl_82015618;
extern unsigned int lbl_82021540;
extern unsigned int lbl_820380A0;
extern unsigned int lbl_8216CB30;
extern unsigned int lbl_821AAD20;


undefined8 fn_82FA49B0(int *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int iVar1;
  undefined8 uVar2;
  double dVar3;
  
  if ((param_4 & 0xffffffff) == 0) {
    param_1[3] = 8;
    iVar1 = lbl_82005344;
    param_1[1] = lbl_82021540;
    param_1[2] = iVar1;
    uVar2 = lbl_82015618;
    dVar3 = (double)fn_82F655D8(lbl_82015618,lbl_8216CB30);
    param_1[4] = (int)(float)dVar3;
    dVar3 = (double)fn_82F655D8(uVar2,lbl_820380A0);
    param_1[5] = (int)(float)dVar3;
    param_1[7] = 1;
    uVar2 = 1;
    param_1[8] = 0;
    param_1[6] = lbl_821AAD20;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x14))(param_1,param_3,param_4);
  }
  return uVar2;
}

