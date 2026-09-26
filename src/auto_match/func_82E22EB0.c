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
extern int fn_82A1F2F8();
extern int fn_82E23588();
extern int fn_82E23728();


longlong fn_82E22EB0(int param_1,undefined4 param_2,undefined4 param_3,int param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = fn_82E23728(param_1 + 0x30,param_1 + 0x20);
  if (lVar1 == 0) {
    *(undefined4 *)(param_1 + 0x148) = param_2;
    *(undefined4 *)(param_1 + 0x14c) = param_3;
    lVar1 = fn_82E23588(param_1 + 0x168,param_5,0);
    if (lVar1 == 0) {
      uVar2 = fn_82A1F2F8();
      *(undefined4 *)(param_1 + 0x154) = uVar2;
      *(undefined4 *)(param_1 + 0x180) = 1;
      *(undefined4 *)(param_1 + 0x178) = 1;
      *(int *)(param_1 + 0x158) = param_4 * 1000;
      *(undefined4 *)(param_1 + 0x17c) = 0;
    }
  }
  return lVar1;
}

