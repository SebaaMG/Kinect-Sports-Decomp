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
extern unsigned int *auStack_2c;
extern int fn_8267BED0();
extern int fn_82756540();
extern unsigned int uStack_30;


undefined8
fn_82757620(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined4 uStack_30;
  undefined4 auStack_2c [11];
  
  uStack_30 = 0x142;
  uVar1 = fn_8267BED0(param_2,0x15c,&uStack_30);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    auStack_2c[0] = *param_3;
    uVar2 = fn_82756540(uVar1,param_1,param_4,param_2,auStack_2c);
  }
  return uVar2;
}

