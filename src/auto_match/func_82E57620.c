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
extern int fn_82EE5E28();
extern int fn_82EE5F60();
extern unsigned int uStack_28;
extern unsigned int uStack_2a;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82E57620(uint *param_1,undefined8 param_2)

{
  int iVar1;
  uint uStack_30;
  ushort uStack_2c;
  ushort uStack_2a;
  undefined8 uStack_28;
  
  iVar1 = fn_82EE5F60(param_2,&uStack_30,0x10);
  if (-1 < iVar1) {
    *(ushort *)(param_1 + 1) = uStack_2c << 8 | uStack_2c >> 8;
    *param_1 = uStack_30 << 0x18 | (uStack_30 & 0xff00) << 8 | uStack_30 >> 8 & 0xff00 |
               uStack_30 >> 0x18;
    *(ushort *)((int)param_1 + 6) = uStack_2a << 8 | uStack_2a >> 8;
    *(undefined8 *)(param_1 + 2) = uStack_28;
    fn_82EE5E28(param_2,0x10);
  }
  return;
}

