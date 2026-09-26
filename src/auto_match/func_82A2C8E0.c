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
extern unsigned int stack0x00000010;
extern unsigned int uStack00000010;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1a;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_82A2C8E0(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  undefined8 uStack00000010;
  ushort uStack_20;
  short sStack_1e;
  ushort uStack_1c;
  ushort uStack_1a;
  ushort uStack_18;
  ushort uStack_16;
  
  uStack00000010 = param_1;
  RtlTimeToTimeFields(&stack0x00000010,&uStack_20);
  *param_2 = (((((int)sStack_1e & 0xfU) << 5 | uStack_1c & 0x1f) << 5 | uStack_1a & 0x1f) << 6 |
             uStack_18 & 0x3f) << 5 |
             (int)(uStack_16 & 0x3e) >> 1 | (uStack_20 + 0xf844) * 0x2000000;
  if (((short)uStack_20 < 0x7bc) || (uVar1 = 1, 0x83b < (short)uStack_20)) {
    uVar1 = 0;
  }
  return uVar1;
}

