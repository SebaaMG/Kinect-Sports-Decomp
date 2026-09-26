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


undefined8 fn_82AC3E38(int param_1,int param_2,int param_3,int *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  
  puVar7 = (uint *)(param_2 * 0xc + param_1);
  uVar4 = 0;
  bVar2 = false;
  uVar1 = *puVar7 >> 0x1a;
  if (uVar1 == 0x2a) {
LAB_82ac3e88:
    uVar1 = puVar7[2] >> 0x18 & 0x1f;
    if (((uVar1 < 0xb) || (0xe < uVar1)) && (uVar1 != 0x11)) {
      uVar1 = puVar7[1];
      bVar2 = true;
      if (((((uVar1 >> 6) - 1 ^ uVar1) & 3) != 0) &&
         ((puVar7[2] >> 0x1c & 2 | uVar1 & 0x3c | uVar4) <= *(uint *)(param_3 + 0x20)))
      goto LAB_82ac3eec;
    }
LAB_82ac3ea8:
    uVar3 = 0xffffffff80004005;
  }
  else {
    if (uVar1 == 0x2b) {
LAB_82ac3e84:
      uVar4 = 1;
      goto LAB_82ac3e88;
    }
    if (uVar1 == 0x2c) goto LAB_82ac3e88;
    if (uVar1 == 0x2d) goto LAB_82ac3e84;
    if (uVar1 == 0x2e) goto LAB_82ac3e88;
    if (uVar1 == 0x2f) goto LAB_82ac3e84;
LAB_82ac3eec:
    iVar6 = 0;
    do {
      iVar5 = 0;
      do {
        if (((1 << (0x1fU - iVar6 & 0x3f) & puVar7[2]) == 0) || ((iVar6 == 2 && (bVar2)))) {
          uVar1 = puVar7[1];
          if ((((uVar1 & 0x80000000) == 0) &&
              (((uVar1 & 0x40000000) == 0 && ((uVar1 & 0x20000000) != 0)))) ||
             (((uVar1 & 0x80000000) != 0 &&
              (((uVar1 & 0x20000000) == 0 && ((*(ushort *)(param_4 + *param_4 * 4 + 3) & 7) == 0))))
             )) goto LAB_82ac3ea8;
        }
        else {
          uVar1 = puVar7[2] >> ((2 - iVar6) * 8 & 0x38U);
          if (((uVar1 & 0x40) != 0) || (*(uint *)(param_3 + 0x20) < (uVar1 & 0x3f)))
          goto LAB_82ac3ea8;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    uVar3 = 0;
  }
  return uVar3;
}

