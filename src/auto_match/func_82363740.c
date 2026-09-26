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
extern int fn_82400E48();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8D8C;


undefined4 * fn_82363740(undefined4 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  
  uVar1 = fn_8251F720(param_2 + 0x7ec,0);
  puVar2 = (undefined4 *)fn_8265C9E0(0x3f0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 1;
    *puVar2 = &lbl_821A8D8C;
    puVar2[2] = 1;
    if (puVar2 + 4 != (undefined4 *)0x0) {
      fn_82400E48(puVar2 + 4,param_2,param_3,uVar1);
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 4;
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return param_1;
}

