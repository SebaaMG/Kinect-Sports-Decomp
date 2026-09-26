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
extern unsigned int *auStack_130;
extern unsigned int *auStack_240;
extern int fn_829D3930();
extern int fn_829D5110();
extern int fn_829D99D0();
extern int fn_829DA310();
extern int fn_82A2B0F8();
extern int fn_82F664B0();
extern int fn_82F69A80();


undefined8 fn_829DA3D8(ulonglong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 auStack_240 [272];
  undefined1 auStack_130 [304];
  
  iVar2 = fn_82F664B0(0xffffffff832178f8,0x104);
  if ((((iVar2 == 0) && (iVar2 = fn_82F664B0(auStack_130,0x104,param_3), iVar2 == 0)) &&
      (iVar2 = fn_82F69A80(auStack_130,0x104,0xffffffff8205770c), iVar2 == 0)) &&
     ((iVar2 = fn_82F664B0(auStack_240,0x104,param_3), iVar2 == 0 &&
      (iVar2 = fn_82F69A80(auStack_240,0x104,0xffffffff820576f0), iVar2 == 0)))) {
    uVar1 = fn_829D3930(auStack_240);
    if ((-1 < (int)uVar1) && (uVar1 = fn_829D99D0(param_1), -1 < (int)uVar1)) {
      fn_829D5110();
      uVar1 = fn_829DA310(param_2);
      if ((-1 < (int)uVar1) && ((param_1 & 0x80000000) == 0)) {
        uVar1 = fn_82A2B0F8(0xffffffff829d6a90);
      }
    }
  }
  else {
    uVar1 = 0xffffffff80070057;
  }
  return uVar1;
}

