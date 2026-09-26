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
extern int fn_83055100();
extern unsigned int lbl_8217E0C0;
extern unsigned int lbl_8217E0F0;
extern unsigned int lbl_831BC978;


undefined4 *
fn_830553E0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  *param_4 = 0;
  puVar1 = (undefined4 *)fn_82FA5060(lbl_831BC978,0xa8);
  if (puVar1 == (undefined4 *)0x0) {
    fn_8304F0A8(param_1,100);
    iVar2 = fn_82FA5060(lbl_831BC978,0xa8);
    if (iVar2 == 0) {
      return (undefined4 *)0x0;
    }
    puVar1 = (undefined4 *)fn_83055100();
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  else {
    fn_83050B90();
    *(undefined1 *)(puVar1 + 0x28) = 0;
    *puVar1 = &lbl_8217E0F0;
    puVar1[0x1e] = &lbl_8217E0C0;
  }
  iVar2 = fn_830500F0(puVar1,param_1,param_2,param_3);
  if (iVar2 != 1) {
    if (puVar1 != (undefined4 *)0x0) {
      fn_8304FC90(puVar1);
    }
    return (undefined4 *)0x0;
  }
  fn_830516C8(param_1,puVar1);
  puVar3 = puVar1 + 0x1e;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  *param_4 = puVar3;
  return puVar1;
}

