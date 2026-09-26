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
extern int fn_82A3FF60();
extern int fn_82F68CC0();
extern int fn_82F691F0();


undefined8 fn_82A49BE0(short *param_1)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  sVar1 = *param_1;
  if (sVar1 == 0x165) {
    lVar3 = 0x20;
  }
  else if (sVar1 == 1) {
    lVar3 = 0x10;
  }
  else {
    lVar3 = (ulonglong)(ushort)param_1[8] + 0x12;
  }
  if (sVar1 == 0x165) {
    lVar4 = 0x20;
  }
  else if (sVar1 == 1) {
    lVar4 = 0x12;
  }
  else {
    lVar4 = (ulonglong)(ushort)param_1[8] + 0x12;
  }
  lVar2 = fn_82A3FF60(0xffffffff83219d50,lVar4,0x20970006,0);
  if (lVar2 != 0) {
    fn_82F68CC0(lVar2,param_1,lVar3);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar2 + lVar3,0,lVar4 - lVar3);
  }
  return 0;
}

