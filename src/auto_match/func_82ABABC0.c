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


uint * fn_82ABABC0(int param_1,int param_2,uint *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = (param_2 + 0x191) * 4;
  uVar1 = *(uint *)(iVar2 + param_1);
  uVar4 = uVar1 >> 0x1c;
  uVar6 = uVar1 >> 0x18;
  uVar5 = uVar6 & 0xf;
  uVar3 = uVar1 >> 5 & 0x7ff;
  if (uVar4 == 0) {
    if ((uVar6 & 0xf) != 0) {
LAB_82abac3c:
      uVar6 = 5;
      uVar5 = (uVar4 + 1) * 0x10 | uVar5;
      goto LAB_82abac58;
    }
    uVar6 = 0;
  }
  else if (uVar4 == 4) {
    if ((uVar6 & 0xf) != 0) goto LAB_82abac3c;
    uVar6 = 1;
  }
  else {
    if (uVar4 == 5) {
      uVar6 = 5;
      goto LAB_82abac58;
    }
    if (uVar4 == 10) {
      uVar6 = 2;
      goto LAB_82abac58;
    }
    if ((uVar4 != 0xb) || ((uVar6 & 0xf) != 0)) goto LAB_82abac3c;
    uVar6 = 4;
  }
  uVar5 = 0;
LAB_82abac58:
  if ((uVar1 & 0x1e) == 0x1e) {
    uVar4 = 0x55;
  }
  else {
    uVar4 = (uint)((uVar1 & 2) != 0);
    if ((uVar1 & 4) != 0) {
      uVar4 = uVar4 | 4;
    }
    if ((uVar1 & 8) != 0) {
      uVar4 = uVar4 | 0x10;
    }
    if ((uVar1 & 0x10) != 0) {
      uVar4 = uVar4 | 0x40;
    }
  }
  *param_3 = ((uVar5 & 0xff) << 5 | uVar6) << 0x10 | 0x8000001b;
  param_3[1] = uVar4;
  param_3[2] = uVar3 | 0xb0000;
  *(char *)(iVar2 + param_1 + 1) = (char)uVar3;
  *param_4 = *param_4 + 3;
  return param_3 + 3;
}

