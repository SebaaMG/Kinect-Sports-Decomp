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


uint fn_82AE9218(int param_1,uint *param_2,int *param_3)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  uVar5 = 0;
  for (puVar1 = *(uint **)(param_1 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    uVar2 = puVar1[4];
    if (uVar2 != 0) {
      if ((*puVar1 & 0xe000000) != 0) {
        uVar4 = *(uint *)(uVar2 + 8) >> 7 & 0x7f;
        if ((uVar4 < 0x20) || (bVar3 = true, 0x52 < uVar4)) {
          bVar3 = false;
        }
        if ((bVar3) && ((*(uint *)(uVar2 + 8) & 0x380000) == 0x100000)) {
          if ((*(uint *)((*(uint **)(uVar2 + 0x2c))[3] + 8) & 0x3f80) == 0x3e00) {
            *param_2 = 1 << (**(uint **)(uVar2 + 0x2c) >> 5 & 3) | *param_2;
          }
          else {
            *param_3 = *param_3 + 1;
          }
        }
        else if (uVar4 == 0x6e) {
          uVar5 = uVar2;
        }
      }
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x3f80) == 0x3700) {
    piVar6 = (int *)(param_1 + 0x28);
    for (uVar5 = 0; uVar5 < (*(uint *)(param_1 + 8) >> 0x13 & 7); uVar5 = uVar5 + 1) {
      piVar6 = piVar6 + 1;
      fn_82AE9218(*(undefined4 *)(*piVar6 + 0xc),param_2,param_3);
    }
    uVar5 = 0;
  }
  return uVar5;
}

