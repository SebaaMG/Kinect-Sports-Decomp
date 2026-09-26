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
extern unsigned int lbl_831BEB3C;
extern unsigned int lbl_831BF120;


void fn_82633D70(char param_1,char param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                  uint *param_6)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if (param_1 != '\0') {
    return;
  }
  uVar5 = (ulonglong)*param_6;
  if (param_2 == '\0') {
    uVar2 = *param_5;
    if ((uVar2 & 0x8000) == 0) {
      uVar4 = (ulonglong)(uVar2 >> 8) & 0x3f;
      if (uVar5 <= uVar4) {
        uVar5 = uVar4;
      }
      if (uVar5 <= ((ulonglong)uVar2 & 0x3f)) {
        uVar5 = (ulonglong)uVar2 & 0x3f;
      }
    }
    uVar3 = param_5[2];
    bVar1 = (&lbl_831BF120)[uVar3 >> 0x18 & 0x1f];
    if (((bVar1 != 0) && ((uVar3 & 0x80000000) != 0)) &&
       (uVar4 = (ulonglong)(uVar3 >> 0x10) & 0x3f, uVar5 <= uVar4)) {
      uVar5 = uVar4;
    }
    if (((1 < bVar1) && ((uVar3 & 0x40000000) != 0)) &&
       (uVar4 = (ulonglong)(uVar3 >> 8) & 0x3f, uVar5 <= uVar4)) {
      uVar5 = uVar4;
    }
    if (((2 < bVar1) || ((&lbl_831BEB3C)[uVar2 >> 0x1a] == '\x01')) &&
       (((uVar3 & 0x20000000) != 0 && (uVar5 <= ((ulonglong)uVar3 & 0x3f))))) {
      uVar5 = (ulonglong)uVar3 & 0x3f;
    }
    uVar6 = (uint)uVar5;
    if ((&lbl_831BEB3C)[uVar2 >> 0x1a] != '\x02') goto LAB_82633e7c;
    uVar4 = ((ulonglong)(uVar3 >> 2) & 0x8000000 | (ulonglong)uVar2 & 0x4000000) >> 0x1a |
            (ulonglong)param_5[1] & 0xfffffffffffffffc;
  }
  else {
    uVar4 = (ulonglong)(*param_5 >> 0xc) & 0x3f;
    if (uVar5 <= uVar4) {
      uVar5 = uVar4;
    }
    uVar4 = (ulonglong)(*param_5 >> 5);
  }
  uVar6 = (uint)uVar5;
  if (uVar5 <= (uVar4 & 0x3f)) {
    uVar6 = (uint)(uVar4 & 0x3f);
  }
LAB_82633e7c:
  *param_6 = uVar6;
  return;
}

