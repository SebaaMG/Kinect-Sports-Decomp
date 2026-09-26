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
extern int fn_8265CA20();
extern int fn_82897F68();
extern unsigned int lbl_820239B4;


void fn_828991A0(undefined4 *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  *param_1 = &lbl_820239B4;
  if (param_1[1] == 7) {
    puVar2 = param_1 + 2;
    lVar1 = 4;
    do {
      if (4 < (uint)param_1[6]) {
        fn_8265CA20(*puVar2);
      }
      *puVar2 = 0;
      lVar1 = lVar1 + -1;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0);
  }
  else if (param_1[1] == 8) {
    param_1 = param_1 + 2;
    lVar1 = 4;
    do {
      fn_82897F68(param_1,0);
      lVar1 = lVar1 + -1;
      param_1 = param_1 + 1;
    } while (lVar1 != 0);
  }
  return;
}

