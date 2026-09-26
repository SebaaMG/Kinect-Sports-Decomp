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
extern int fn_82A1DD38();
extern unsigned int lbl_8326183C;


undefined8 fn_82F4DD60(int param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if ((param_2 & 0xffffffff) != 0) {
    iVar2 = 0;
    piVar1 = (int *)(lbl_8326183C + 0x2d9c);
    do {
      if (*piVar1 == param_1) {
        fn_82A1DD38(param_2,(iVar2 + 0x2d9) * 0x10 + lbl_8326183C,0x10);
        return 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 4;
    } while (iVar2 < 2);
  }
  return 0;
}

