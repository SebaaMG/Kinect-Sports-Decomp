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
extern int fn_8281D480();


undefined8
fn_827EAAF0(double param_1,int param_2,undefined8 param_3,undefined8 param_4,byte *param_5)

{
  byte bVar1;
  undefined8 uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  float afStack_70 [28];
  
  uVar3 = (uint)*param_5;
  dVar5 = -param_1;
  uVar2 = 2;
  bVar1 = 0;
  while( true ) {
    dVar4 = (double)fn_8281D480(uVar3 * 0x10 + param_2 + 0x48,param_3);
    afStack_70[uVar3] = (float)dVar4;
    if ((dVar5 < dVar4) && (uVar2 = 1, param_1 < dVar4)) break;
    bVar1 = bVar1 + 1;
    uVar3 = (uVar3 + 1 & 0xff) % 6;
    if (5 < bVar1) {
      return uVar2;
    }
  }
  *param_5 = (byte)uVar3;
  return 0;
}

