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
extern int fn_82AD1B28();
extern int fn_82AE93B0();
extern int fn_82B10EA8();
extern int fn_82B89810();


bool fn_82B111F8(int param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  bool bVar1;
  char cVar3;
  int iVar2;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  
  bVar5 = false;
  if ((*param_4 & 0x10) == 0) {
    uVar6 = -(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4);
    uVar4 = *(uint *)(param_4[3] + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar1 = false, uVar4 == 0x7c)) {
      bVar1 = true;
    }
    if (!bVar1) {
      uVar6 = *(uint *)(param_2 + 0x1c);
    }
    if (*(uint *)(param_2 + 0x1c) == uVar6) {
      uVar4 = param_2 & 0xfffffffc;
    }
    else {
      uVar4 = uVar6 + 0x18 & 0xfffffffe | 2;
    }
    cVar3 = fn_82B89810(param_1,uVar6,uVar4,param_4);
    uVar4 = param_4[3];
    if (cVar3 == '\0') {
      fn_82AD1B28(uVar4);
      fn_82AE93B0(uVar4);
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) | 0x1000000;
    }
    if (*(uint *)(param_2 + 0x1c) != uVar6) {
      iVar2 = fn_82B10EA8(param_1,param_4,1);
      bVar5 = (*(uint *)(iVar2 + 8) & 0x3f80) == 0x3700;
    }
  }
  else {
    cVar3 = fn_82B89810(param_1,*(undefined4 *)(param_2 + 0x1c),param_2 & 0xfffffffc);
    if (cVar3 == '\0') {
      uVar6 = param_4[3];
      fn_82AD1B28(uVar6);
      fn_82AE93B0(uVar6);
      *(uint *)(uVar6 + 8) = *(uint *)(uVar6 + 8) | 0x1000000;
    }
  }
  return bVar5;
}

