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
extern int fn_82FA5060();
extern int fn_8304F0A8();
extern int fn_8304FC90();
extern int fn_830500F0();
extern int fn_83050B90();
extern int fn_830516C8();
extern unsigned int lbl_8217E00C;
extern unsigned int lbl_8217E03C;
extern unsigned int lbl_831BC978;


undefined4 *
fn_83053C98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  *param_4 = 0;
  puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC978,0xb8);
  if (puVar1 == (undefined4 *)0x0) {
    fn_8304F0A8(param_1,100);
    puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC978,0xb8);
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  fn_83050B90(puVar1);
  puVar1[0x1e] = &lbl_8217E00C;
  *puVar1 = &lbl_8217E03C;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  iVar2 = fn_830500F0(puVar1,param_1,param_2,param_3);
  if (iVar2 != 1) {
    fn_8304FC90(puVar1);
    return (undefined4 *)0x0;
  }
  fn_830516C8(param_1,puVar1);
  *param_4 = puVar1 + 0x1e;
  return puVar1;
}

