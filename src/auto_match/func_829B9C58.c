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
extern int fn_829AB0F0();
extern int fn_829AB308();
extern int fn_829AE100();
extern int fn_829B0F38();
extern int fn_829B9B60();


void fn_829B9C58(int param_1,undefined8 param_2,int param_3)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte bStack_58;
  byte bStack_57;
  char cStack_56;
  char cStack_55;
  byte bStack_54;
  
  if (*(int *)(param_1 + 0x558) != 0) {
    fn_829AB0F0(param_1,0xffffffff82054d08);
  }
  if (param_3 != 0xd) {
    fn_829AB0F0(param_1,0xffffffff82054cf4);
  }
  *(uint *)(param_1 + 0x558) = *(uint *)(param_1 + 0x558) | 1;
  fn_829B0F38(param_1,&bStack_60,0xd);
  fn_829AB308(param_1,&bStack_60,0xd);
  fn_829B9B60(param_1,0);
  uVar3 = (((uint)bStack_5c * 0x100 + (uint)bStack_5b) * 0x100 + (uint)bStack_5a) * 0x100 +
          (uint)bStack_59;
  uVar4 = (((uint)bStack_60 * 0x100 + (uint)bStack_5f) * 0x100 + (uint)bStack_5e) * 0x100 +
          (uint)bStack_5d;
  if ((((uVar4 == 0) || (0x7fffffff < uVar4)) || (uVar3 == 0)) || (0x7fffffff < uVar3)) {
    fn_829AB0F0(param_1,0xffffffff82054cd8);
  }
  if (((bStack_58 != 1) && (bStack_58 != 2)) &&
     ((bStack_58 != 4 && ((bStack_58 != 8 && (bStack_58 != 0x10)))))) {
    fn_829AB0F0(param_1,0xffffffff82054cbc);
  }
  if (((bStack_57 == 1) || (bStack_57 == 5)) || (6 < bStack_57)) {
    fn_829AB0F0(param_1,0xffffffff82054ca0);
  }
  if (((bStack_57 == 3) && (8 < bStack_58)) ||
     (((bStack_57 == 2 || ((bStack_57 == 4 || (bStack_57 == 6)))) && (bStack_58 < 8)))) {
    fn_829AB0F0(param_1,0xffffffff82054c6c);
  }
  if (1 < bStack_54) {
    fn_829AB0F0(param_1,0xffffffff82054c48);
  }
  if (cStack_56 != '\0') {
    fn_829AB0F0(param_1,0xffffffff82054c24);
  }
  if (cStack_55 != '\0') {
    fn_829AB0F0(param_1,0xffffffff82054c04);
  }
  *(uint *)(param_1 + 0x5b8) = uVar4;
  *(uint *)(param_1 + 0x5bc) = uVar3;
  *(byte *)(param_1 + 0x616) = bStack_57;
  *(byte *)(param_1 + 0x617) = bStack_58;
  *(byte *)(param_1 + 0x613) = bStack_54;
  if (bStack_57 == 0) {
LAB_829b9ec0:
    uVar1 = 1;
  }
  else if (bStack_57 == 2) {
    uVar1 = 3;
  }
  else {
    if (bStack_57 == 3) goto LAB_829b9ec0;
    if (bStack_57 == 4) {
      uVar1 = 2;
    }
    else {
      if (bStack_57 != 6) goto LAB_829b9ec8;
      uVar1 = 4;
    }
  }
  *(undefined1 *)(param_1 + 0x61a) = uVar1;
LAB_829b9ec8:
  bVar2 = *(char *)(param_1 + 0x61a) * bStack_58;
  *(byte *)(param_1 + 0x619) = bVar2;
  *(uint *)(param_1 + 0x5c8) = bVar2 * uVar4 + 7 >> 3;
  fn_829AE100(param_1,param_2,uVar4,uVar3,bStack_58,bStack_57,bStack_54,cStack_56);
  return;
}

