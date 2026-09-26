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
extern int fn_82F691F0();


undefined8 fn_829E92B8(int param_1,uint param_2,ulonglong *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if ((param_3 != (ulonglong *)0x0) && ((int)param_4 != 0)) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_3,0,param_4);
  }
  if ((param_1 == 0) ||
     (((param_2 < 0x59 || (param_3 == (ulonglong *)0x0)) || ((int)param_4 != 0x10)))) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar3 = (ulonglong)(param_2 - 0x10 >> 3);
    if (uVar3 != 0) {
      plVar2 = (longlong *)(param_1 + 8);
      do {
        *param_3 = *param_3 ^ plVar2[1];
        plVar2 = plVar2 + 1;
        param_3[1] = *plVar2 + param_3[1];
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    uVar1 = 0;
  }
  return uVar1;
}

