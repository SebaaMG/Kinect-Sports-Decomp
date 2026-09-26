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
extern int fn_82F64C00();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_2c;


int * fn_8266CA00(int *param_1,ulonglong param_2)

{
  int iVar1;
  undefined **ppuStack_30;
  undefined4 uStack_2c;
  
  if ((int)param_2 < 0) {
    param_2 = 0;
  }
  else if (0x15555555 < (param_2 & 0xffffffff)) {
    uStack_2c = 0;
    ppuStack_30 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_30);
  }
  iVar1 = 0;
  if (0 < (int)param_2) {
    do {
      iVar1 = fn_82F64C00(param_2 * 0xc,0xffffffff8326332e);
      if (iVar1 != 0) break;
      param_2 = (longlong)((int)param_2 >> 1) + (ulonglong)((int)param_2 < 0 && (param_2 & 1) != 0);
    } while (0 < (longlong)param_2);
  }
  *param_1 = iVar1;
  param_1[1] = (int)param_2;
  return param_1;
}

