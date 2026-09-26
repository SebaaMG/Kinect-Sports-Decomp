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
extern int fn_82270B70();


undefined8 fn_8226FDB8(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = fn_82270B70();
    for (puVar1 = (undefined4 *)**(undefined4 **)(iVar2 + 0xa8);
        puVar1 != *(undefined4 **)(iVar2 + 0xa8); puVar1 = (undefined4 *)*puVar1) {
      if ((puVar1[2] == param_1) && ((param_2 == 0 || (puVar1[0x42d] == 0)))) {
        return 1;
      }
    }
  }
  return 0;
}

