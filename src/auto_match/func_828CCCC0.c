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
extern int fn_82230040();
extern int fn_822315A0();
extern int fn_8223AAC0();
extern unsigned int lbl_82002B14;


void fn_828CCCC0(undefined4 *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  undefined **ppuStack_30;
  char *pcStack_2c;
  
  if (((int)param_3 != 0) && (cVar1 = fn_8223AAC0(param_3), cVar1 != '\0')) {
    if (param_1[1] != 0) {
      fn_822315A0();
    }
    param_1[1] = (int)param_3;
    *param_1 = param_2;
    return;
  }
  if (param_4 == '\0') {
    return;
  }
  pcStack_2c = "unknown";
  ppuStack_30 = &lbl_82002B14;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_30);
}

