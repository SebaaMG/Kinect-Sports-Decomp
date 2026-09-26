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


void fn_82AF553C(uint param_1,undefined8 param_2,uint param_3,undefined8 param_4,int *param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  byte in_cr6;
  
  do {
    if ((bool)(in_cr6 >> 1 & 1)) {
      return;
    }
    uVar2 = 0;
    uVar1 = *(uint *)*param_5;
    if ((uVar1 & 0x1fff) != 0) {
      puVar3 = (uint *)*param_5 + 6;
      do {
        if (param_3 == *puVar3) {
          uVar1 = uVar1 >> 0xd & 0xffff;
          if (param_1 < uVar1) {
            param_1 = uVar1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 < (uVar1 & 0x1fff));
    }
    param_5 = (int *)param_5[1];
    in_cr6 = (param_5 == (int *)0x0) << 1;
  } while( true );
}

