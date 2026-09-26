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
extern int fn_829548C8();
extern int fn_8295A330();
extern int fn_8295D0A8();
extern int fn_82975B00();


uint fn_829610F8(int *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_1[0x57] == 0) && ((*param_2 & 0x10000000) == 0)) {
    uVar1 = fn_8295D0A8(param_1,0x200001f);
    if (-1 < (int)uVar1) {
      uVar1 = param_2[0xf];
      if (uVar1 == 0x200000) {
        uVar2 = 0xffffffff90000000;
      }
      else if (uVar1 == 0x400000) {
        uVar2 = 0xffffffffa0000000;
      }
      else {
        if (uVar1 != 0x800000) {
          fn_82975B00(param_1,0,0x12ce,0xffffffff820343a0);
          return 0x80004005;
        }
        uVar2 = 0xffffffff98000000;
      }
      uVar1 = fn_8295A330(param_1,uVar2);
      if ((-1 < (int)uVar1) &&
         (uVar1 = (**(code **)(*param_1 + 0x138))(param_1,param_2[3] & 0x7ff | 0xa0000800,0xf0000,0)
         , -1 < (int)uVar1)) {
        uVar1 = fn_829548C8(param_1);
        uVar1 = (int)uVar1 >> 0x1f & uVar1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

