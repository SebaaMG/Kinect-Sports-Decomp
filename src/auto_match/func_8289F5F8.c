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
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8289DF30();
extern int fn_82BA02A8();
extern unsigned int lbl_82002B04;
extern unsigned int lbl_82023C1C;


undefined4 * fn_8289F5F8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined **ppuStack_20;
  char *pcStack_1c;
  
  *param_1 = 0;
  puVar1 = (undefined4 *)fn_8265C9E0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[3] = param_2;
    puVar1[1] = 1;
    *puVar1 = &lbl_82023C1C;
    puVar1[2] = 1;
  }
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    if (param_2 != 0) {
      if (*(int *)(param_2 + 4) != 0) {
        fn_8289DF30();
      }
      fn_8265CA20(param_2);
    }
    pcStack_1c = "bad allocation";
    ppuStack_20 = &lbl_82002B04;
    fn_82BA02A8(&ppuStack_20);
  }
  return param_1;
}

