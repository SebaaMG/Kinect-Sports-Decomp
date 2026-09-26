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
extern int fn_82ACACA8();


ulonglong fn_82ACBE00(undefined8 param_1,int *param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  for (puVar1 = (uint *)*param_2; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    uVar2 = *puVar1;
    if ((uVar2 & 0xe000000) != 0) {
      if ((uVar2 >> 0x1e & 1) != 0) {
        piVar3 = (int *)puVar1[3];
        if (((uint)piVar3[2] >> 0x17 & 1) != 0) {
          uVar5 = uVar2 >> 0xf & 0x3fc;
          uVar5 = fn_82ACACA8(param_4 + 4,uVar5,uVar5 + 3);
          if (uVar5 != 0) {
            uVar6 = 1;
            do {
              if ((uVar6 & uVar5) != 0) {
                piVar4 = *(int **)((int)((((((ulonglong)(uVar2 >> 0xd) & 0xff0) >> 2) -
                                          LZCOUNT(uVar6 & 0xf & ~((uVar6 & 0xf) - 1))) + 0x1f &
                                         0xffffffff) << 2) + *(int *)(param_4 + 8));
                if ((piVar4 != piVar3) && (piVar4 != param_2)) {
                  if (((uint)piVar4[2] >> 0x17 & 1) == 0) {
                    uVar7 = uVar7 | 2;
                  }
                  else {
                    uVar7 = uVar7 | 1;
                  }
                }
              }
              uVar6 = uVar6 << 1;
            } while (uVar6 < 0x10);
          }
        }
      }
    }
  }
  return uVar7;
}

