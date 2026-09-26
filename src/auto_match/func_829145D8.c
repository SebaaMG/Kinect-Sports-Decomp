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
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_8296DA28();
extern int fn_82F691F0();


undefined8 fn_829145D8(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1];
  if ((uVar1 == 0) || (*(int *)(uVar1 + 4) != 4)) {
    uVar2 = 0;
  }
  else if (param_1[2] == 0) {
    uVar2 = 0xffffffff80004005;
  }
  else {
    uVar2 = fn_8296DA28(param_1[2],uVar1,(ulonglong)*param_1 + 0x18,param_1[4],param_1[5]);
    if (-1 < (int)uVar2) {
      fn_8265C990(param_1[6],0x24810000);
      uVar3 = fn_8265C940(*(int *)(uVar1 + 0x1c) << 2,0x24810000);
      param_1[6] = (uint)uVar3;
      if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(uVar3,0xff,*(int *)(uVar1 + 0x1c) << 2);
      }
      uVar2 = 0xffffffff8007000e;
    }
  }
  return uVar2;
}

