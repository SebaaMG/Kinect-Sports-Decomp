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


void fn_82633BE8(char param_1,char param_2,undefined8 param_3,undefined8 param_4,uint *param_5,
                  int param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 != '\0') {
    return;
  }
  uVar3 = *param_5;
  if (param_2 != '\0') {
    uVar4 = (*(uint *)((uVar3 >> 10 & 0xfc) + param_6) & 0x3f) << 0xc;
    *param_5 = uVar4 | uVar3 & 0xfffc0fff;
    *param_5 = (*(uint *)(((uVar3 & 0x7e0) >> 3) + param_6) & 0x3f) << 5 |
               uVar4 | uVar3 & 0xfffc081f;
    return;
  }
  if ((uVar3 & 0x8000) == 0) {
    uVar4 = (*(uint *)((uVar3 >> 6 & 0xfc) + param_6) & 0x3f) << 8;
    *param_5 = uVar4 | uVar3 & 0xffffc0ff;
    *param_5 = uVar4 | uVar3 & 0xffffc0c0 | *(uint *)((uVar3 & 0x3f) * 4 + param_6) & 0x3f;
  }
  uVar3 = *param_5;
  cVar1 = (&lbl_831BEB3C)[uVar3 >> 0x1a];
  bVar2 = (&lbl_831BF120)[param_5[2] >> 0x18 & 0x1f];
  if ((bVar2 != 0) && ((param_5[2] & 0x80000000) != 0)) {
    *(byte *)((int)param_5 + 9) =
         (byte)*(undefined4 *)((*(byte *)((int)param_5 + 9) & 0x3f) * 4 + param_6) |
         *(byte *)((int)param_5 + 9) & 0xc0;
  }
  if ((1 < bVar2) && ((param_5[2] & 0x40000000) != 0)) {
    *(byte *)((int)param_5 + 10) =
         (byte)*(undefined4 *)((*(byte *)((int)param_5 + 10) & 0x3f) * 4 + param_6) |
         *(byte *)((int)param_5 + 10) & 0xc0;
  }
  if (((2 < bVar2) || (cVar1 == '\x01')) && (uVar4 = param_5[2], (uVar4 & 0x20000000) != 0)) {
    *(byte *)((int)param_5 + 0xb) =
         (byte)*(undefined4 *)((uVar4 & 0x3f) * 4 + param_6) | (byte)uVar4 & 0xc0;
  }
  if (cVar1 != '\x02') {
    return;
  }
  uVar4 = *(uint *)((int)((((ulonglong)(param_5[2] >> 2) & 0x8000000 | (ulonglong)uVar3 & 0x4000000)
                           >> 0x1a | (ulonglong)param_5[1] & 0x3c) << 2) + param_6);
  *(byte *)((int)param_5 + 7) = (byte)uVar4 & 0x3c | (byte)param_5[1] & 0xc3;
  param_5[2] = (uVar4 & 2) << 0x1c | param_5[2] & 0xdfffffff;
  *param_5 = (uVar4 & 1) << 0x1a | uVar3 & 0xfbffffff;
  return;
}

