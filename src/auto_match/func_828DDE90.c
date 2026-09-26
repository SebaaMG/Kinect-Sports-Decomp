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
extern int fn_823AA970();
extern int fn_8289F2E0();
extern int fn_828D4578();
extern int fn_82A4AAA8();


undefined8 fn_828DDE90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  int iVar6;
  undefined8 uVar5;
  undefined8 in_r7;
  double dVar7;
  
  uVar4 = fn_8289F2E0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x18));
  if (((uVar4 & 0xffffffff) == 0) || (iVar6 = fn_82A4AAA8(), iVar6 != 1)) {
    uVar5 = 1;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x6c);
    dVar7 = (double)*(float *)(param_1 + 0x88);
    uVar2 = *(undefined4 *)(param_1 + 0x84);
    uVar3 = *(undefined4 *)(param_1 + 0x80);
    uVar5 = fn_823AA970(uVar4);
    uVar5 = fn_828D4578(dVar7,uVar1,uVar5,uVar3,uVar2,in_r7,param_1 + 0x8c,param_1 + 0xb0,
                            param_1 + 0xb8);
  }
  return uVar5;
}

