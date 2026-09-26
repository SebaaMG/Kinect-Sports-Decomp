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
extern int fn_82980C18();
extern int fn_829814B0();


undefined8 fn_829843D0(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if ((uVar1 & 0x200) != 0) {
    fn_829814B0(param_1,param_3,1);
  }
  if (((param_3 == 0) || (*(int *)(param_3 + 4) != 9)) || (*(int *)(param_3 + 0x10) != 2)) {
    if ((uVar1 & 0xc00) != 0) {
      fn_82980C18(param_1,param_1 + 10,0xc05,0xffffffff8204e268);
      return 0xffffffff80004005;
    }
  }
  else {
    if ((uVar1 & 0xc00) == 0) {
      uVar1 = *(uint *)(param_1[1] + 0x3c) | uVar1;
    }
    if ((uVar1 & 0xc00) == 0) {
      if ((*param_1 & 8) == 0) {
        if ((*param_1 & 0x10) != 0) {
          uVar1 = uVar1 | 0x800;
        }
      }
      else {
        uVar1 = uVar1 | 0x400;
      }
    }
    if ((uVar1 & 0x400) != 0) {
      *(uint *)(param_3 + 0x24) = *(uint *)(param_3 + 0x24) & 0xfffff3ff | 0x400;
    }
    if ((uVar1 & 0x800) != 0) {
      *(uint *)(param_3 + 0x24) = *(uint *)(param_3 + 0x24) & 0xfffff3ff | 0x800;
    }
  }
  return 0;
}

