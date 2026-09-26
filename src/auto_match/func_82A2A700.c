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
extern unsigned int *auStack_130;
extern unsigned int *auStack_140;
extern int fn_82A2B760();
extern int fn_82A36058();
extern int fn_82F68CC0();


/* WARNING: Removing unreachable block (ram,0x82a2a6e4) */
/* WARNING: Removing unreachable block (ram,0x82a2a6ec) */

undefined8 fn_82A2A700(ulonglong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [304];
  
  if ((param_1 & 0xffffffff) < 0x41) {
    fn_82F68CC0(auStack_130,param_2,(param_1 & 0x3fffffff) << 2);
    uVar1 = fn_82A36058(auStack_140,param_4);
    uVar1 = NtWaitForMultipleObjectsEx((char)param_1,auStack_130,param_3 == 0,1,0,uVar1);
    if ((int)uVar1 < 0) {
      fn_82A2B760();
      uVar1 = 0xffffffffffffffff;
    }
  }
  else {
    fn_82A2B760(0xffffffffc000000d);
    uVar1 = 0xffffffffffffffff;
  }
  return uVar1;
}

