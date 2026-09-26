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
extern int fn_82963860();


undefined8 fn_829695C0(int param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = fn_82963860(param_2);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = *param_2 & 0xfff00000;
  uVar1 = *param_2 & 0xfffff;
  uVar5 = uVar1;
  if (uVar3 < 0x60800001) {
    if (uVar3 == 0x60800000) goto LAB_829696b4;
    if ((uVar3 == 0x10d00000) || (uVar3 == 0x10e00000)) {
      uVar5 = 0;
      goto LAB_829696b4;
    }
    if ((((uVar3 == 0x60000000) || (uVar3 == 0x60200000)) || (uVar3 == 0x60300000)) ||
       (uVar3 == 0x60500000)) goto LAB_829696b4;
    uVar4 = 0x60700000;
  }
  else {
    if ((((uVar3 == 0x60a00000) || (uVar3 == 0x60c00000)) || (uVar3 == 0x60d00000)) ||
       ((uVar3 == 0x60f00000 || (uVar3 == 0x61100000)))) goto LAB_829696b4;
    uVar4 = 0x61200000;
  }
  if (uVar3 != uVar4) {
    return 0;
  }
LAB_829696b4:
  iVar6 = uVar5 * 4;
  iVar2 = *(int *)(*(int *)(*(int *)(param_2[2] + iVar6) * 4 + *(int *)(param_1 + 0x14)) + 4);
  if ((*(uint *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x210) == 0) {
    return 0;
  }
  uVar3 = 1;
  if (1 < uVar1) {
    do {
      iVar6 = iVar6 + 4;
      if (*(int *)(*(int *)(*(int *)(iVar6 + param_2[2]) * 4 + *(int *)(param_1 + 0x14)) + 4) !=
          iVar2) {
        return 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 1;
}

