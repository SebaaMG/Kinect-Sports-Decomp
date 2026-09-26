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
extern unsigned int *auStack_e;


byte fn_82A1D7A8(void)

{
  int iVar2;
  ulonglong uVar1;
  ulonglong uVar3;
  byte bVar4;
  byte abStack_10 [2];
  undefined2 auStack_e [7];
  
  auStack_e[0] = 0;
  iVar2 = ExGetXConfigSetting(3,0xe,abStack_10,1,auStack_e);
  if (iVar2 < 0) {
switchD_82a1d818_caseD_7:
    bVar4 = 0;
  }
  else {
    switch(abStack_10[0]) {
    case 5:
      bVar4 = 2;
      break;
    case 6:
      bVar4 = 1;
      break;
    default:
      goto switchD_82a1d818_caseD_7;
    case 8:
      bVar4 = 3;
      break;
    case 0xd:
      bVar4 = 4;
      break;
    case 0x10:
      bVar4 = 5;
      break;
    case 0x12:
      bVar4 = 0x21;
      break;
    case 0x13:
      bVar4 = 6;
      break;
    case 0x14:
      bVar4 = 7;
      break;
    case 0x15:
      bVar4 = 8;
      break;
    case 0x17:
      bVar4 = 9;
      break;
    case 0x18:
      bVar4 = 0xd;
      break;
    case 0x19:
      bVar4 = 10;
      break;
    case 0x1f:
      bVar4 = 0x1f;
      break;
    case 0x20:
      bVar4 = 0xb;
      break;
    case 0x22:
      bVar4 = 0xc;
      break;
    case 0x23:
      bVar4 = 0x23;
      break;
    case 0x25:
      bVar4 = 0xe;
      break;
    case 0x27:
      bVar4 = 0xf;
      break;
    case 0x2a:
      bVar4 = 0x10;
      break;
    case 0x2c:
      bVar4 = 0x12;
      break;
    case 0x2e:
      bVar4 = 0x11;
      break;
    case 0x32:
      bVar4 = 0x13;
      break;
    case 0x35:
      bVar4 = 0x14;
      break;
    case 0x38:
      bVar4 = 0x15;
      break;
    case 0x47:
      bVar4 = 0x16;
      break;
    case 0x4a:
      bVar4 = 0x17;
      break;
    case 0x4b:
      bVar4 = 0x19;
      break;
    case 0x4c:
      bVar4 = 0x18;
      break;
    case 0x52:
      bVar4 = 0x1a;
      break;
    case 0x54:
      bVar4 = 0x1b;
      break;
    case 0x58:
      bVar4 = 0x25;
      break;
    case 0x5a:
      bVar4 = 0x20;
      break;
    case 0x5b:
      bVar4 = 0x1c;
      break;
    case 0x5d:
      bVar4 = 0x1d;
      break;
    case 0x65:
      bVar4 = 0x22;
      break;
    case 0x67:
      bVar4 = 0x24;
      break;
    case 0x6d:
      bVar4 = 0x1e;
    }
  }
  if ((bVar4 == 0) || (0x25 < bVar4)) {
    uVar1 = XGetGameRegion();
    uVar3 = (uVar1 & 0xffffffff) >> 8 & 0xff;
    if (uVar3 == 1) {
      bVar4 = ((int)uVar1 != 0x101) + 0x14;
    }
    else {
      bVar4 = ((int)uVar3 != 2) + 0x23;
    }
  }
  return bVar4;
}

