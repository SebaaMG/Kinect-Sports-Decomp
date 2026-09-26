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
extern int fn_82AA66A8();
extern int fn_82AD1AC8();
extern int fn_82AD20C0();
extern int fn_82B8F0D0();


void fn_82B8F3D8(int param_1,int param_2,uint *param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  iVar1 = (param_2 + 0x17) * 4;
  puVar3 = (uint *)0x0;
  puVar7 = *(uint **)(iVar1 + param_1);
  while( true ) {
    if (puVar7 == param_3) {
      puVar4 = (uint *)fn_82AD1AC8(param_3,param_2);
      puVar7 = param_3;
      if (puVar4 != (uint *)0x0) {
        while( true ) {
          puVar5 = (uint *)*puVar7;
          if (puVar5 == (uint *)0x0) break;
          if (puVar5 != puVar4) {
            uVar6 = *puVar5;
            if (((uVar6 & 0x40000000) != 0) || (bVar2 = true, (uVar6 & 0xe000000) != 0)) {
              bVar2 = false;
            }
            if ((!bVar2) || (bVar2 = true, (uVar6 & 0x1ffe000) == 0)) {
              bVar2 = false;
            }
            if ((bVar2) && ((uVar6 >> 0xd & 0xfff) - 1 == param_2)) {
              fn_82AD20C0(param_3,puVar5,param_4);
            }
          }
          if ((uint *)*puVar7 == puVar5) {
            puVar7 = puVar5 + 1;
          }
        }
      }
      if (puVar3 == (uint *)0x0) {
        if (puVar4 == (uint *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = puVar4[3];
        }
        *(uint *)(iVar1 + param_1) = uVar6;
      }
      else {
        puVar7 = param_3 + 1;
        while( true ) {
          puVar5 = (uint *)*puVar7;
          if (puVar5 == (uint *)0x0) break;
          if ((puVar5[4] != 0) && (puVar5 != puVar3)) {
            uVar6 = *puVar5;
            if (((uVar6 & 0x40000000) != 0) || (bVar2 = true, (uVar6 & 0xe000000) != 0)) {
              bVar2 = false;
            }
            if ((!bVar2) || (bVar2 = true, (uVar6 & 0x1ffe000) == 0)) {
              bVar2 = false;
            }
            if ((bVar2) && ((uVar6 >> 0xd & 0xfff) - 1 == param_2)) {
              fn_82AD20C0(puVar5[4],puVar5,param_4);
            }
          }
          if ((uint *)*puVar7 == puVar5) {
            puVar7 = puVar5 + 2;
          }
        }
        if (puVar4 == (uint *)0x0) {
          fn_82AD20C0(puVar3[4],puVar3,param_4);
        }
        else {
          uVar6 = puVar4[3];
          puVar5 = (uint *)(puVar3[3] + 4);
          for (puVar7 = (uint *)*puVar5; puVar7 != puVar3; puVar7 = (uint *)puVar7[2]) {
            puVar5 = puVar7 + 2;
          }
          *puVar5 = puVar3[2];
          puVar3[2] = *(uint *)(uVar6 + 4);
          *(uint **)(uVar6 + 4) = puVar3;
          puVar3[3] = uVar6;
        }
      }
      if (puVar4 != (uint *)0x0) {
        fn_82AD20C0(param_3,puVar4,param_4);
      }
      fn_82B8F0D0(param_3,param_2);
      return;
    }
    if (puVar7 == (uint *)0x0) break;
    puVar3 = (uint *)fn_82AD1AC8(puVar7,param_2);
    if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_4,0x12c0);
    }
    puVar7 = (uint *)puVar3[3];
  }
                    /* WARNING: Subroutine does not return */
  fn_82AA66A8(param_4,0x12c0);
}

