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
extern unsigned int *auStack_3c;
extern int fn_8267BED0();
extern int fn_826D8050();
extern int fn_827626A0();
extern unsigned int lbl_820148F8;
extern unsigned int lbl_82015278;
extern unsigned int uStack_40;


undefined4 * fn_82772D08(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uStack_40;
  undefined4 auStack_3c [15];
  
  fn_826D8050();
  *param_1 = &lbl_82015278;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  uStack_40 = 0x102;
  puVar1 = (undefined4 *)fn_8267BED0(param_1,0x2c,&uStack_40);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_827626A0(puVar1);
    *puVar1 = &lbl_820148F8;
    puVar1[10] = 0;
  }
  param_1[0x23] = puVar1;
  auStack_3c[0] = 0x102;
  puVar1 = (undefined4 *)fn_8267BED0(param_1,0x2c,auStack_3c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    fn_827626A0(puVar1);
    *puVar1 = &lbl_820148F8;
    puVar1[10] = 0;
  }
  param_1[0x24] = puVar1;
  return param_1;
}

