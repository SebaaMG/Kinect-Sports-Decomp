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
extern int fn_82D000A0();


void fn_82E1AB38(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = 0;
    if (iVar1 != 0) {
      piVar3 = param_2;
      do {
        fn_82D000A0(param_1 + 0x2c,iVar1,piVar3[1]);
        fn_82D000A0(param_1 + 0x3c,piVar3[1],*piVar3);
        iVar2 = iVar2 + 1;
        piVar3 = param_2 + iVar2 * 2;
        iVar1 = param_2[iVar2 * 2];
      } while (iVar1 != 0);
    }
  }
  return;
}

