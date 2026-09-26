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
extern int fn_826D7840();


void fn_826DA118(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (*param_1 != 0) {
    iVar3 = 0;
    lVar2 = (ulonglong)*(uint *)(*param_1 + 4) + 1;
    do {
      iVar1 = iVar3 + *param_1;
      if (*(int *)(iVar1 + 8) != -2) {
        fn_826D7840(iVar1 + 0x10);
        *(undefined4 *)(iVar1 + 8) = 0xfffffffe;
      }
      lVar2 = lVar2 + -1;
      iVar3 = iVar3 + 0x14;
    } while (lVar2 != 0);
    fn_8267BE38(*param_1);
    *param_1 = 0;
  }
  return;
}

