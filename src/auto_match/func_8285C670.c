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


undefined8
fn_8285C670(double param_1,int param_2,uint param_3,float *param_4,undefined8 param_5,
             byte *param_6)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  float *pfVar4;
  double dVar5;
  
  param_3 = param_3 & 0xff;
  uVar3 = 0;
  if (*param_6 < param_3) {
    uVar3 = (uint)*param_6;
  }
  uVar1 = 2;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      pfVar4 = (float *)(uVar3 * 0x10 + param_2);
      dVar5 = (double)((*pfVar4 * *param_4 + pfVar4[1] * param_4[1] + pfVar4[2] * param_4[2]) -
                      pfVar4[3]);
      if ((-param_1 < dVar5) && (uVar1 = 1, param_1 < dVar5)) {
        *param_6 = (byte)uVar3;
        return 0;
      }
      uVar3 = uVar3 + 1 & 0xff;
      uVar2 = uVar2 + 1 & 0xff;
      uVar3 = -(uint)(param_3 != uVar3) & uVar3;
    } while (uVar2 < param_3);
  }
  return uVar1;
}

