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
extern int fn_82552720();


undefined8 fn_82563230(int param_1,int param_2,int *param_3,undefined8 param_4,undefined4 param_5)

{
  int iVar1;
  bool bVar2;
  
  if (*(int *)(param_1 + 0x38) == 0) {
    if (param_3 == (int *)0x0) {
      bVar2 = false;
    }
    else {
      bVar2 = *param_3 != 0;
    }
    if (((bVar2) && (-1 < param_2)) && (param_2 < 9)) {
      iVar1 = param_2 * 0x18 + param_1 + 0xa30;
      fn_82552720((ulonglong)*(uint *)(param_1 + 0x4c) + 0x84c,iVar1,param_3,param_1,param_2,
                    param_4,0);
      *(undefined4 *)(iVar1 + 0x14) = param_5;
      return 1;
    }
  }
  return 0;
}

