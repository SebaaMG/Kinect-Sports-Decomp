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
extern int fn_82ACA920();
extern int fn_82AD17B0();
extern int fn_82AD1978();


void fn_82AEAB00(undefined8 param_1,int *param_2,int *param_3,int param_4,int param_5,
                  ulonglong param_6)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  
  puVar6 = (uint *)0x0;
  for (puVar1 = (uint *)*param_3; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
    uVar2 = *puVar1;
    puVar10 = puVar6;
    if (((uVar2 & 0xe000000) == 0) &&
       (((uVar2 >> 0x1e & 1) == 0 || (puVar10 = puVar1, (uVar2 & 0x1ffe000) != 0)))) {
      fn_82AD1978(param_2,puVar1);
      puVar10 = puVar6;
    }
    puVar6 = puVar10;
  }
  if (puVar6 != (uint *)0x0) {
    for (puVar1 = (uint *)*param_2; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
      if (((*puVar1 & 0xe000000) != 0) && ((*puVar1 & 8) != 0)) {
        fn_82AD1978(param_2,puVar6);
        break;
      }
    }
  }
  if ((param_6 & 0xffffffff) < 4) {
    if ((param_3[2] & 1U) != 0) {
      param_2[2] = param_2[2] | 1;
    }
    if (param_4 == 0) {
      if (((uint)param_3[2] >> 5 & 1) != 0) {
        param_2[2] = param_2[2] & 0xffffffc1U | 0x22;
        for (puVar1 = (uint *)param_3[1];
            (puVar1 != (uint *)0x0 && ((puVar1[4] == 0 || ((*puVar1 & 0xe000000) == 0))));
            puVar1 = (uint *)puVar1[2]) {
        }
        puVar6 = (uint *)fn_82ACA920(param_1,puVar1,param_2);
        uVar2 = *puVar6;
        uVar7 = 0;
        *puVar6 = uVar2 & 0xf1ffe01f | 0x2001c80;
        uVar9 = (uint)param_3[2] >> 1 & 0xf;
        uVar8 = *puVar1 >> 0xd & 0xf;
        while ((uVar9 != 0 &&
               (uVar7 = uVar8 & ~(uVar8 - 1),
               (0x1fU - LZCOUNT(uVar9 & ~(uVar9 - 1)) & 0xffffffff) != (param_6 & 0xffffffff)))) {
          uVar8 = uVar8 - uVar7;
          uVar9 = uVar9 - (uVar9 & ~(uVar9 - 1));
        }
        *puVar6 = (uVar7 & 0xf) << 0xd | uVar2 & 0xf1fe001f | 0x2001c80;
        fn_82AD1978(puVar1[4]);
        for (puVar1 = (uint *)*param_3; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[1]) {
          if (((*puVar1 & 0x40000000) != 0) || (bVar3 = true, (*puVar1 & 0xe000000) != 0)) {
            bVar3 = false;
          }
          if (bVar3) {
            fn_82AD1978(param_2,puVar1);
          }
        }
        for (puVar1 = (uint *)param_3[1]; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
          if (puVar1[4] != 0) {
            if (((*puVar1 & 0x40000000) != 0) || (bVar3 = true, (*puVar1 & 0xe000000) != 0)) {
              bVar3 = false;
            }
            if (bVar3) {
              fn_82AD1978(puVar1[4],puVar1);
            }
          }
        }
      }
    }
    else {
      uVar4 = fn_82AD17B0(param_1,param_2);
      uVar5 = fn_82AD1978(param_4,uVar4);
      *(undefined4 *)((param_5 + 0xb) * 4 + param_4) = uVar5;
    }
  }
  return;
}

