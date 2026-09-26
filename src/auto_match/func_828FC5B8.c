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
extern int fn_828FA8D8();


ulonglong fn_828FC5B8(undefined4 *param_1,int param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte *pbVar4;
  byte bVar5;
  ulonglong uVar6;
  
  pbVar1 = *(byte **)(param_2 + 8);
  uVar2 = 0;
  uVar3 = 0;
  if ((pbVar1 == (byte *)0x0) || (bVar5 = *pbVar1, pbVar4 = pbVar1, bVar5 == 0)) {
    uVar2 = 0xf0000;
  }
  else {
    do {
      if (bVar5 < 0x78) {
        if ((bVar5 == 0x77) || (bVar5 == 0x61)) {
          uVar6 = 3;
          uVar2 = uVar2 | 0x80000;
        }
        else {
          if (bVar5 != 0x62) {
            if (bVar5 == 0x67) goto LAB_828fc67c;
            if (bVar5 != 0x72) goto LAB_828fc688;
            goto LAB_828fc620;
          }
LAB_828fc670:
          uVar6 = 2;
          uVar2 = uVar2 | 0x40000;
        }
      }
      else if (bVar5 == 0x78) {
LAB_828fc620:
        uVar6 = 0;
        uVar2 = uVar2 | 0x10000;
      }
      else {
        if (bVar5 != 0x79) {
          if (bVar5 != 0x7a) goto LAB_828fc688;
          goto LAB_828fc670;
        }
LAB_828fc67c:
        uVar6 = 1;
        uVar2 = uVar2 | 0x20000;
      }
      if ((pbVar4 != pbVar1) && (uVar6 <= uVar3)) {
LAB_828fc688:
        fn_828FA8D8(*param_1,param_2,0x7d3,0xffffffff8202c54c);
        param_1[0x13] = 1;
        return 0;
      }
      bVar5 = pbVar4[1];
      uVar3 = uVar6;
      pbVar4 = pbVar4 + 1;
    } while (bVar5 != 0);
  }
  return uVar2;
}

