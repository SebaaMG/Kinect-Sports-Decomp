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
extern int fn_82AD17B0();


void fn_82B0FE60(undefined8 param_1,int param_2,longlong param_3,ulonglong param_4,
                  ulonglong param_5)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  uVar2 = 0;
  uVar3 = 1;
  uVar6 = 0;
  lVar8 = 0;
  uVar7 = 0;
  if ((int)param_3 != 0) {
    uVar5 = 0;
    piVar4 = (int *)(param_2 + 0x2c);
    uVar6 = 0;
    do {
      if ((uVar3 & param_4) != 0) {
        puVar1 = (uint *)*piVar4;
        if (uVar2 == 0) {
          uVar2 = puVar1[3];
          uVar6 = *puVar1 & 0x1f;
        }
        lVar8 = lVar8 + 1;
        uVar7 = uVar7 & ~(3 << (uVar5 & 0x3f)) | (*puVar1 >> 5 & 3) << (uVar5 & 0x3f);
        uVar5 = uVar5 + 2;
      }
      piVar4 = piVar4 + 1;
      uVar3 = (uVar3 & 0x7fffffff) << 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  puVar1 = (uint *)fn_82AD17B0();
  *puVar1 = (uint)((lVar8 + param_5 & 0xffffffff) << 0x19) & 0xe000000 | *puVar1 & 0xf1ffffff;
  uVar3 = param_5 & 0xffffffff;
  while (uVar3 != 0) {
    uVar7 = uVar7 << 2 | uVar7 & 3;
    param_5 = param_5 - 1;
    uVar3 = param_5;
  }
  *puVar1 = uVar6 | (uVar7 & 0xff) << 5 | *puVar1 & 0xffffe000;
  return;
}

