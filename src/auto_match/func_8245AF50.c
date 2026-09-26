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
extern int fn_8245B168();
extern unsigned int uStack_10;
extern unsigned int uStack_c;


undefined8 fn_8245AF50(int param_1,undefined2 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_10;
  undefined2 uStack_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x1c) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 8) = 0;
    uStack_10 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x5c0);
    uStack_c = param_2;
    fn_8245B168(param_1,&uStack_10,6);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff80004005;
  }
  return uVar1;
}

