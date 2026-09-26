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
extern int fn_82AF4AE0();
extern int fn_82B161E8();


undefined8 fn_82AF56B0(int param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  uint *puVar1;
  uint uVar3;
  char cVar4;
  undefined8 uVar2;
  uint uVar5;
  int *piVar6;
  
  uVar3 = param_3;
  if ((*(uint *)(param_3 + 8) & 0x3f80) != 0x3700) {
    for (puVar1 = *(uint **)(param_3 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
      uVar3 = puVar1[4];
      if (((uVar3 != 0) && ((*(uint *)(uVar3 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar1 & 0xe000000) != 0)) goto LAB_82af5724;
    }
    uVar3 = 0;
  }
LAB_82af5724:
  if (uVar3 == 0) {
    uVar2 = fn_82AF4AE0(param_1,param_2,param_3,param_4);
  }
  else {
    if ((*(uint *)(uVar3 + 8) >> 0x1a & 1) != 0) {
      uVar3 = fn_82B161E8(param_1,uVar3,*(undefined4 *)(param_1 + 0x294));
    }
    piVar6 = (int *)(uVar3 + 0x2c);
    for (uVar5 = 0; uVar5 < (*(uint *)(uVar3 + 8) >> 0x13 & 7); uVar5 = uVar5 + 1) {
      cVar4 = fn_82AF4AE0(param_1,param_2,*(uint *)(*piVar6 + 0xc),
                            -(ulonglong)(param_3 == *(uint *)(*piVar6 + 0xc)) & param_4);
      if (cVar4 == '\0') {
        return 0;
      }
      piVar6 = piVar6 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

