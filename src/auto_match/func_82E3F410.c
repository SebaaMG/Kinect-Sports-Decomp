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
extern int fn_82E3C5F8();


undefined8 fn_82E3F410(int param_1,short param_2)

{
  ulonglong uVar1;
  short *apsStack_40 [16];
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xb8) != 0) {
    do {
      fn_82E3C5F8(param_1 + 0x78,uVar1,apsStack_40);
      if (param_2 == *apsStack_40[0]) {
        return 1;
      }
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < (ulonglong)*(uint *)(param_1 + 0xb8));
  }
  return 0;
}

