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
extern int fn_82975B00();


undefined8 fn_82954050(int param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  *param_4 = 1;
  uVar1 = *(uint *)(param_2 + 0xc);
  *param_3 = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x28)) {
    uVar2 = 0;
  }
  else {
    fn_82975B00(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x3c),0x119a,
                      0xffffffff82037a70);
    uVar2 = 0xffffffff80004005;
  }
  return uVar2;
}

