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
extern int fn_8224F398();
extern int fn_8265C9E0();
extern unsigned int lbl_821C2AE8;


undefined4 * fn_8224AB50(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_8265C9E0(100);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 2) = 0;
    *puVar1 = &lbl_821C2AE8;
    puVar1[3] = 0;
    fn_8224F398(puVar1 + 4);
    *(undefined1 *)(puVar1 + 0x17) = 0;
    puVar1[0x14] = 0xffffffff;
    puVar1[0x16] = 0xffffffff;
    puVar1[0x15] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}

