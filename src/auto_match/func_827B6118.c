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
extern int fn_8267BE38();


void fn_827B6118(int *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*param_1 != 0) {
    iVar2 = 0;
    lVar1 = (ulonglong)*(uint *)(*param_1 + 4) + 1;
    do {
      if (*(int *)(iVar2 + *param_1 + 8) != -2) {
        *(undefined4 *)(iVar2 + *param_1 + 8) = 0xfffffffe;
      }
      iVar2 = iVar2 + 0x18;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    fn_8267BE38(*param_1);
    *param_1 = 0;
  }
  return;
}

