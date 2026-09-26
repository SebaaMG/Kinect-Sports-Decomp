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


undefined8 fn_82AC5778(uint *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar1 = param_2[7];
  if (((uVar1 & 0x40000) == 0) && ((uVar1 & 0x20000) == 0)) {
    uVar5 = uVar1 >> 5 & 0x1f;
    if (((uint *)param_2[0x11] <= param_1) &&
       (param_1 + uVar5 <= (uint *)(param_2[0x12] + param_2[0x11]))) {
      uVar7 = 0;
      uVar4 = 0;
      if ((uVar1 >> 5 & 0x1f) != 0) {
        do {
          uVar1 = *param_1;
          uVar2 = uVar1 >> 0x10 & 0xfff;
          if (*(uint *)(*param_2 + 0x20) < uVar2) {
            return 0xffffffff80004005;
          }
          uVar3 = uVar1 >> 8 & 0xf;
          if ((uint)param_2[0x2016] <= uVar3) {
            return 0xffffffff80004005;
          }
          puVar6 = (uint *)(uVar2 * 4 + param_2[6]);
          do {
            uVar2 = *puVar6;
            if ((*(uint *)((uVar2 & 0xfff) * 0xc + param_2[1]) & 0x3f) != uVar3) {
              return 0xffffffff80004005;
            }
            puVar6 = puVar6 + 1;
          } while ((uVar2 & 0x1000) == 0);
          if ((uVar4 != 0) && ((uVar1 & 0xff) <= uVar7)) {
            return 0xffffffff80004005;
          }
          uVar4 = uVar4 + 1;
          uVar7 = uVar1 & 0xff;
          param_1 = param_1 + 1;
        } while (uVar4 < uVar5);
      }
      return 0;
    }
  }
  return 0xffffffff80004005;
}

