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
extern int fn_825D4FE8();
extern int fn_825FBDB8();
extern int fn_8265C9E0();
extern unsigned int lbl_821CADB0;


void fn_825FC0B0(double param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined4 param_7,int param_8)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  fn_825FBDB8();
  *(float *)(param_2 + 0x16c) = (float)param_1;
  *(undefined4 *)(param_2 + 0x25c) = param_4;
  *(undefined4 *)(param_2 + 0x254) = 4;
  *(undefined4 *)(param_2 + 0x260) = param_5;
  *(undefined4 *)(param_2 + 0x168) = param_7;
  if (param_8 == 0) {
    uVar3 = *(uint *)(param_2 + 0x20) & 0xffffefff;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0x20) | 0x1000;
  }
  *(uint *)(param_2 + 0x20) = uVar3;
  uVar1 = fn_8265C9E0(0x60);
  if ((uVar1 & 0xffffffff) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_825D4FE8(uVar1,param_3,0x23);
    puVar2[0x14] = param_2;
    puVar2[0x15] = 0;
    puVar2[0x16] = 0;
    *puVar2 = &lbl_821CADB0;
    puVar2[0x10] = puVar2[0x10] | 7;
  }
  *(undefined4 **)(param_2 + 0x170) = puVar2;
  return;
}

