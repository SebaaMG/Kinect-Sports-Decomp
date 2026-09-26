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


char fn_827EB1A8(double param_1,longlong param_2,ulonglong param_3,byte *param_4,
                  undefined8 param_5,undefined8 param_6,byte *param_7)

{
  bool bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  
  param_3 = param_3 & 0xff;
  uVar5 = -(ulonglong)(*param_7 < param_3) & (ulonglong)*param_7;
  bVar1 = true;
  cVar2 = '\x01';
  uVar3 = 0;
  uVar4 = (ulonglong)(uint)(0x80 >> ((uint)uVar5 & 0x3f)) & 0xff;
  if (param_3 != 0) {
    do {
      if ((uVar4 & *param_4) != 0) {
        dVar6 = (double)fn_8281D480(uVar5 * 0x10 + param_2,param_5);
        if (param_1 < dVar6) {
          *param_7 = (byte)uVar5;
          return '\0';
        }
        if (-param_1 < dVar6) {
          bVar1 = false;
          cVar2 = '\0';
        }
        else {
          *param_4 = *param_4 & ~(byte)uVar4;
        }
      }
      uVar5 = uVar5 + 1 & 0xff;
      if (uVar5 == param_3) {
        uVar5 = 0;
        uVar4 = 0x80;
      }
      else {
        uVar4 = uVar4 >> 1;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < param_3);
  }
  return !bVar1 + cVar2 * '\x02';
}

