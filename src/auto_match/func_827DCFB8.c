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
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_827D5078();
extern int fn_827D5090();
extern int fn_827D50A8();
extern int fn_828171A0();
extern int fn_8281C510();
extern int fn_8281C530();


undefined8
fn_827DCFB8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puStack0000002c;
  undefined1 auStack_30 [48];
  
  puStack0000002c = param_4;
  fn_8281C510(param_2,auStack_30);
  fn_827D5078(*param_4,0);
  iVar2 = fn_8281C530(param_2);
  if (iVar2 == 2) {
    uVar1 = *param_4;
    uVar3 = fn_828171A0(0,0xffffffff8201c380);
    fn_827D5090(uVar1,uVar3);
    uVar1 = *param_4;
    uVar3 = fn_828171A0(0,0xffffffff8201c388);
    fn_827D50A8(uVar1,uVar3);
    uVar3 = 0;
  }
  else {
    uVar3 = 0x65b;
  }
  if (param_4[1] != 0) {
    fn_822315A0();
  }
  return uVar3;
}

