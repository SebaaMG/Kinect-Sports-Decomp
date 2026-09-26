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
extern int fn_827F2A90();
extern int fn_827F2B98();
extern int fn_827F46E8();
extern int fn_827F5C20();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827F2C38(double param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  float fVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  double dVar5;
  
  fVar2 = lbl_821AAD20;
  dVar5 = (double)lbl_821AAD20;
  *(float *)(param_2 + 0xf4) = lbl_821AAD20;
  *(float *)(param_2 + 0xf8) = fVar2;
  if (dVar5 < param_1) {
    uVar3 = fn_827F46E8(0xe8);
    if ((uVar3 & 0xffffffff) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = fn_827F5C20(dVar5,(double)lbl_82002AE0,param_1,uVar3,param_5,param_2,param_3,
                                param_2,*(undefined4 *)(param_2 + 4));
    }
    *(undefined4 *)((*(byte *)(param_2 + 0x53) + 0xc) * 4 + param_2) = uVar4;
    bVar1 = *(char *)(param_2 + 0x53) + 1U & 3;
    *(byte *)(param_2 + 0x53) = bVar1;
    if (bVar1 == *(byte *)(param_2 + 0x54)) {
      fn_827F2A90(param_2);
      *(byte *)(param_2 + 0x54) = *(char *)(param_2 + 0x54) + 1U & 3;
    }
  }
  else {
    fn_827F2B98();
  }
  *(int *)((*(byte *)(param_2 + 0x53) + 8) * 4 + param_2) = (int)param_3;
  *(undefined4 *)((*(byte *)(param_2 + 0x53) + 0xc) * 4 + param_2) = 0;
  *(undefined1 *)(param_2 + 0x50) = 1;
  return;
}

