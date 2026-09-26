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
extern int fn_82295A48();
extern int fn_82297DB0();
extern int fn_824C04E0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F68CC0();


void fn_824C21B8(int param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined4 *)(param_1 + 0x58) = param_3;
  uVar2 = fn_8265C9E0(0x428);
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    fn_82F68CC0(uVar2,param_4,0x428);
  }
  if ((uVar2 & 0xffffffff) != (ulonglong)*(uint *)(param_1 + 0x5c)) {
    if ((ulonglong)*(uint *)(param_1 + 0x5c) != 0) {
      fn_8265CA20();
    }
    *(int *)(param_1 + 0x5c) = (int)uVar2;
  }
  *(undefined8 *)(param_1 + 0x60) = param_5;
  iVar1 = *(int *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (iVar1 != 0) {
    fn_822315A0();
  }
  fn_82295A48(param_1 + 0x70,param_6);
  fn_824C04E0(param_1,1);
  fn_82297DB0(param_6,1,0);
  return;
}

