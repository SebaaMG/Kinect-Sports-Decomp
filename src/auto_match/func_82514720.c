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
extern unsigned int lbl_821C250C;


undefined4 * fn_82514720(undefined4 *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)param_1[1];
  puVar3 = param_1 + 1;
  if (puVar2 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)puVar2[1];
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)puVar2[2];
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2 = puVar1;
      }
      else {
        puVar2[1] = puVar1[2];
        puVar1[2] = puVar2;
        puVar2 = puVar1;
      }
    } while (puVar2 != (undefined4 *)0x0);
    param_1[2] = puVar3;
    param_1[3] = puVar3;
    *puVar3 = 0;
  }
  param_1[2] = puVar3;
  param_1[3] = puVar3;
  *puVar3 = 0;
  param_1[4] = 0;
  *param_1 = &lbl_821C250C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

