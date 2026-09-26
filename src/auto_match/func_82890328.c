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
extern int fn_828B55B0();
extern unsigned int lbl_82197140;


void fn_82890328(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 5;
    do {
      puVar2[-2] = &lbl_82197140;
      if (puVar2[-1] == 7) {
        if ((uint)puVar2[1] < 5) {
          *puVar2 = 0;
        }
        else {
          fn_8265CA20(*puVar2);
          *puVar2 = 0;
        }
      }
      else if (puVar2[-1] == 8) {
        fn_82897F68(puVar2,0);
      }
      fn_828B55B0(puVar2 + -5);
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 8;
    } while (puVar1 != param_2);
  }
  return;
}

