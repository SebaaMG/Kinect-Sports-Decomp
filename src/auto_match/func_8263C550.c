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
extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern unsigned int *auStack_30;
extern unsigned int *auStack_34;
extern int fn_8262FE50();
extern int fn_8263B958();
extern int fn_8265C940();


longlong fn_8263C550(uint *param_1,ulonglong param_2)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  fn_8263B958(param_1,0,param_2,auStack_24,auStack_28,auStack_2c,auStack_30,auStack_34);
  lVar3 = fn_8265C940(0x30,0x64800000);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    puVar2 = (uint *)lVar3;
    uVar1 = *param_1;
    puVar2[6] = (uint)param_1;
    *puVar2 = uVar1 & 0x200000 | 0x40100004;
    puVar2[1] = 1;
    puVar2[5] = 0xffff0000;
    puVar2[7] = puVar2[7] & 0x3fffff | (uint)((param_2 & 0xffffffff) << 0x1c);
    fn_8262FE50(param_1);
  }
  return lVar3;
}

