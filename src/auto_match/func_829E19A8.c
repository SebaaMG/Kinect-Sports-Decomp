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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
#define _uStack_20 ((*(U64*)&uStack_20))
extern int fn_829E0B08();
extern int fn_829E11B8();
extern int fn_829E14A8();
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


undefined8 fn_829E19A8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  uStack_18 = 0;
  _uStack_20 = CONCAT44(param_2,param_3);
  uVar1 = fn_829E0B08(*(undefined8 *)(param_1 + 8));
  if (-1 < (int)uVar1) {
    if ((int)uVar1 == 1) {
      uVar1 = 0xffffffff80004005;
    }
    else {
      uVar1 = fn_829E11B8(&uStack_20);
      if (-1 < (int)uVar1) {
        uVar1 = fn_829E14A8(param_1,&uStack_20);
      }
    }
  }
  return uVar1;
}

