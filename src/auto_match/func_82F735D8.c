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
extern int fn_82F72318();
extern int fn_82F72A00();
extern int fn_82F732B0();
extern unsigned int lbl_82169D58;


int * fn_82F735D8(int *param_1,char param_2)

{
  undefined4 *puVar1;
  
  if (((int)(param_1[1] & 0xff000000U) < 0x1000001) && (param_2 != '\0')) {
    if (*param_1 == 0) {
      fn_82F732B0();
    }
    else {
      puVar1 = (undefined4 *)fn_82F72318(0xffffffff832635a0,8,0);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        *(char *)(puVar1 + 1) = param_2;
        *puVar1 = &lbl_82169D58;
      }
      fn_82F72A00(param_1,puVar1);
    }
  }
  return param_1;
}

