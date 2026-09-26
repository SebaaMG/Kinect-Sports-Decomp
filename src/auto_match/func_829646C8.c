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
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_829644B8();
extern int fn_82BA02A8();


undefined8
fn_829646C8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar3;
  ulonglong uVar1;
  undefined8 uVar2;
  
  iVar3 = fn_82963998(0x74);
  if (iVar3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_829632A0();
  }
  if ((uVar1 & 0xffffffff) != 0) {
    iVar3 = fn_82963A30(uVar1,param_2,param_3,param_4,0);
    if (-1 < iVar3) {
      uVar2 = fn_829644B8(param_1,uVar1);
      return uVar2;
    }
    fn_82BA02A8(uVar1);
    fn_829639F0(uVar1);
  }
  return 0xffffffffffffffff;
}

