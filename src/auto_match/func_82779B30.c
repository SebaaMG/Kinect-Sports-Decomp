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
extern unsigned int *auStack_34;
extern int fn_82779AA8();
extern unsigned int uStack_28;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


/* WARNING: Type propagation algorithm not settling */

void fn_82779B30(byte *param_1,undefined4 param_2)

{
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint auStack_34 [3];
  undefined4 uStack_28;
  
  uStack_40 = (uint)*param_1;
  auStack_34[1] = 2;
  uStack_3c = (uint)param_1[3];
  uStack_38 = (uint)param_1[2];
  uStack_28 = 0x200;
  auStack_34[0] = (uint)param_1[1];
  auStack_34[2] = param_2;
  fn_82779AA8(auStack_34 + 1,0xffffffff82015440,auStack_34,&uStack_38,&uStack_3c,&uStack_40);
  return;
}

