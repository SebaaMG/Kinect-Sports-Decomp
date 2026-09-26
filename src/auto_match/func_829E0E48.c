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
extern int fn_829E0C20();
extern int fn_829E0DC0();
extern int fn_82A1DDC0();


undefined8 fn_829E0E48(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  uint *puVar2;
  undefined8 uVar1;
  ulonglong uVar3;
  short *psVar4;
  
  if (((param_3 & 0xffff) != 0) &&
     (puVar2 = (uint *)fn_829E0C20(param_2,param_3), puVar2 != (uint *)0x0)) {
    fn_82A1DDC0(param_1,puVar2 + 2,0x10);
    uVar3 = 0;
    psVar4 = (short *)((*puVar2 >> 0xe) + (int)puVar2);
    while (*psVar4 != 0) {
      uVar1 = fn_829E0DC0(param_1,uVar3,param_2);
      if ((int)uVar1 < 0) {
        return uVar1;
      }
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 1;
      if (7 < (uVar3 & 0xffffffff)) {
        return 0;
      }
    }
  }
  return 0xffffffff80004005;
}

