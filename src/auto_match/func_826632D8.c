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
extern unsigned int *auStack_70;
extern int fn_82663428();
extern int fn_82663470();
extern int fn_826634A0();
extern int fn_8266C340();
extern int fn_82A2A378();
extern unsigned int iStack_18;
extern unsigned int uStack0000001e;
extern unsigned int uStack00000026;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000034;
extern unsigned int uStack0000003c;
extern unsigned int uStack00000046;


undefined2 *
fn_826632D8(undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined2 param_7)

{
  undefined2 *puStack00000014;
  undefined2 uStack0000001e;
  undefined2 uStack00000026;
  undefined4 uStack0000002c;
  undefined4 uStack00000034;
  undefined4 uStack0000003c;
  undefined2 uStack00000046;
  undefined1 auStack_70 [88];
  int iStack_18;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  puStack00000014 = param_1;
  uStack0000001e = param_2;
  uStack00000026 = param_3;
  uStack0000002c = param_4;
  uStack00000034 = param_5;
  uStack0000003c = param_6;
  uStack00000046 = param_7;
  fn_82663428(param_1 + 2);
  fn_826634A0(puStack00000014 + 0x10,uStack00000034);
  fn_82663428(puStack00000014 + 0x1e);
  puStack00000014[0x2c] = uStack00000046;
  iStack_18 = fn_82A2A378(0,0,uStack0000002c,0xffffffffffffffff,auStack_70,0x55,0,0);
  if (iStack_18 < 1) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001d38,0x4e,0xffffffff82001940);
  }
  fn_82663470(puStack00000014 + 2,auStack_70);
  iStack_18 = fn_82A2A378(0,0,uStack0000003c,0xffffffffffffffff,auStack_70,0x55,0,0);
  if (iStack_18 < 1) {
    fn_8266C340(0xffffffff820015c0,0xffffffff82001d38,0x53,0xffffffff82001940);
  }
  fn_82663470(puStack00000014 + 0x1e,auStack_70);
  return puStack00000014;
}

