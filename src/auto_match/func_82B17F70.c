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
extern int fn_82ABE250();
extern int fn_82B167E0();
extern unsigned int lbl_82005710;


undefined4 * fn_82B17F70(undefined8 param_1,int param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  double dVar9;
  
  if (((*(uint *)(param_2 + 8) & 0x3f80) == 0x680) && ((*(uint *)(param_2 + 8) >> 0x1a & 1) == 0)) {
    uVar1 = **(uint **)(param_2 + 0x2c);
    if (((uVar1 & 0x1f) == 0) &&
       (((uVar1 & 0xe000000) == 0x2000000 &&
        (puVar2 = *(uint **)(param_2 + 0x30), (*puVar2 & 0x1f) == 0)))) {
      uVar3 = (*(uint **)(param_2 + 0x2c))[3];
      uVar7 = 0;
      if ((uVar3 == param_3) ||
         (((((*(uint *)(uVar3 + 8) & 0x3f80) == 0x80 &&
            (*(uint *)(*(int *)(uVar3 + 0x2c) + 0xc) == param_3)) &&
           (iVar4 = *(int *)(*(int *)(uVar3 + 0x30) + 0xc), (*(uint *)(iVar4 + 8) & 0x3f80) == 16000
           )) && ((dVar9 = (double)fn_82B167E0(iVar4,uVar1 >> 5 & 3), dVar9 <= lbl_82005710 &&
                  (uVar7 = (longlong)-dVar9 & 0xffffffff, (double)uVar7 == -dVar9)))))) {
        puVar5 = (uint *)*param_4;
        puVar8 = param_4;
        while( true ) {
          if (puVar5 == (uint *)0x0) {
            *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x4000000;
            puVar6 = (undefined4 *)fn_82ABE250(param_1,0xc,1);
            *puVar6 = (int)uVar7;
            puVar6[1] = param_2;
            puVar6[2] = *puVar8;
            *puVar8 = (uint)puVar6;
            param_4[1] = param_4[1] + 1;
            if (uVar3 == param_3) {
              param_4[2] = *(uint *)(param_2 + 0x34);
            }
            uVar1 = *(uint *)(puVar2[3] + 8) >> 7 & 0x7f;
            if (uVar1 == 0x7d) {
              param_4[3] = param_4[3] & 0xffffe000 | param_4[3] + 1 & 0x1fff;
              return puVar6;
            }
            if (uVar1 != 0x7c) {
              return puVar6;
            }
            param_4[3] = param_4[3] & 0xfc001fff | (param_4[3] & 0xffffe000) + 0x2000 & 0x3ffe000;
            return puVar6;
          }
          if (uVar7 == *puVar5) break;
          if (*puVar5 < uVar7) {
            puVar8 = puVar5 + 2;
          }
          puVar5 = (uint *)puVar5[2];
        }
      }
    }
  }
  return (undefined4 *)0x0;
}

