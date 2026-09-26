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
extern unsigned int lbl_8318A700;


undefined8 fn_82EEABD0(undefined4 param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar3 = 0;
  if (param_3 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff80004003;
  }
  else {
    pbVar4 = param_2 + 0x10;
    pbVar5 = &lbl_8318A700;
    do {
      bVar1 = *param_2;
      bVar2 = *pbVar5;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      param_2 = param_2 + 1;
      pbVar5 = pbVar5 + 1;
    } while (param_2 != pbVar4);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      *param_3 = param_1;
    }
    else {
      uVar3 = 0xffffffff80004002;
      *param_3 = 0;
    }
  }
  return uVar3;
}

