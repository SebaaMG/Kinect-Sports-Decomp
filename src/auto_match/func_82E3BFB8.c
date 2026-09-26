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


bool fn_82E3BFB8(undefined8 param_1,byte *param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *in_r11;
  byte in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
LAB_82e3bfcc:
      return in_r11 != (byte *)0x0;
    }
    pbVar3 = param_2;
    pbVar4 = in_r11;
    do {
      bVar1 = *pbVar4;
      bVar2 = *pbVar3;
      if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
      pbVar4 = pbVar4 + 1;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != in_r11 + 0x12);
    if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) == 0) {
      *param_4 = in_r11;
      *param_3 = *(undefined4 *)(in_r11 + 0x14);
      goto LAB_82e3bfcc;
    }
    param_4[1] = in_r11;
    in_r11 = *(byte **)(in_r11 + 0x18);
    in_cr6 = (in_r11 == (byte *)0x0) << 1;
  } while( true );
}

