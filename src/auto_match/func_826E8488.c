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
extern int fn_826E7800();


uint fn_826E8488(int param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar4 = 0;
joined_r0x826e84a8:
  do {
    if ((int)param_2 < 1) {
      return uVar4;
    }
    uVar2 = (uint)*(byte *)(param_1 + 0x15);
    if (uVar2 == 0) {
      *(undefined1 *)(param_1 + 0x15) = 0;
      if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) < 1) {
        fn_826E7800(param_1,1);
      }
      bVar3 = *(byte *)(*(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x2c));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      *(undefined1 *)(param_1 + 0x15) = 8;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x14);
      if ((int)(uint)*(byte *)(param_1 + 0x15) <= (int)param_2) {
        param_2 = param_2 - uVar2;
        *(undefined1 *)(param_1 + 0x15) = 0;
        uVar4 = (uint)bVar1 << (param_2 & 0x3f) | uVar4;
        goto joined_r0x826e84a8;
      }
      uVar2 = uVar2 - param_2;
      *(char *)(param_1 + 0x15) = (char)uVar2;
      bVar3 = (char)(1 << (uVar2 & 0x3f)) - 1U & bVar1;
      uVar4 = bVar1 >> (uVar2 & 0x3f) | uVar4;
      param_2 = 0;
    }
    *(byte *)(param_1 + 0x14) = bVar3;
  } while( true );
}

