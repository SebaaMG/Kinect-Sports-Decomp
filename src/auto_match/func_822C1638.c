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
extern int fn_822315A0();
extern int fn_8251F720();
extern int fn_8265C9E0();
extern unsigned int lbl_821ACDEC;


undefined4 * fn_822C1638(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  uVar1 = fn_8251F720(param_2,0);
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = (undefined4 *)fn_8265C9E0(0x14);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[3] = uVar1;
    puVar2[1] = 1;
    *puVar2 = &lbl_821ACDEC;
    puVar2[2] = 1;
    puVar3 = puVar2;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  param_1[1] = puVar3;
  *param_1 = uVar1;
  return param_1;
}

