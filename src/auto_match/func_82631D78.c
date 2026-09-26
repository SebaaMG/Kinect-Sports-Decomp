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
extern int fn_82F65FE0();


undefined8 fn_82631D78(uint *param_1,char param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte abStack_40 [64];
  
  if (param_2 == '\0') {
    fn_82F65FE0(param_1 + 1,*param_1,4,0xffffffff82631e68);
  }
  uVar2 = 1;
  uVar9 = 0;
  uVar3 = 0;
  abStack_40[0] = 0xff;
  abStack_40[1] = 0xff;
  abStack_40[2] = 0xff;
  abStack_40[3] = 0xff;
  abStack_40[4] = 0xff;
  abStack_40[5] = 0xff;
  abStack_40[6] = 0xff;
  abStack_40[7] = 0xff;
  uVar4 = 0;
  abStack_40[8] = 0xff;
  abStack_40[9] = 0xff;
  abStack_40[10] = 0xff;
  abStack_40[0xb] = 0xff;
  abStack_40[0xc] = 0xff;
  abStack_40[0xd] = 0xff;
  abStack_40[0xe] = 0xff;
  abStack_40[0xf] = 0xff;
  uVar5 = 0;
  puVar6 = param_1;
  if (*param_1 != 0) {
    do {
      uVar1 = puVar6[1];
      uVar8 = uVar1 >> 0x14 & 0xf;
      uVar7 = (uint)abStack_40[uVar8];
      if (uVar7 == 0xff) {
        uVar7 = uVar8;
        if (param_2 == '\0') {
          uVar7 = uVar9;
          uVar9 = uVar9 + 1;
        }
        abStack_40[uVar8] = (byte)uVar7;
        if (uVar8 < 0x10) {
          uVar3 = 1 << uVar8 | uVar3;
        }
        if (uVar7 < 0x10) {
          uVar4 = 1 << (uVar7 & 0x3f) | uVar4;
        }
      }
      uVar5 = uVar5 + 1;
      puVar6[1] = (uVar7 & 0xf) << 0x10 | uVar1 & 0xfff0ffff;
      puVar6 = puVar6 + 1;
    } while (uVar5 < *param_1);
  }
  if ((param_2 == '\0') && (uVar3 != uVar4)) {
    uVar2 = 0;
  }
  return uVar2;
}

