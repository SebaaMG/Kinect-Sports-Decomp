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
extern unsigned int *auStack_50;
extern int fn_82ABE2E0();
extern int fn_82ACA5E0();
extern int fn_82AD1B28();
extern int fn_82AF8968();
extern int fn_82AFA378();
extern int fn_82AFF840();
extern int fn_82B161E8();
extern int fn_82B16698();
extern int fn_82B25328();
extern int fn_82B8AC10();
extern int fn_82BA02A8();


int fn_82B098F0(int param_1,ulonglong param_2,int param_3,ulonglong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_50 [80];
  
  fn_82BA02A8();
  uVar8 = (ulonglong)*(uint *)(param_3 + 8);
  uVar5 = *(uint *)(param_3 + 8) >> 7 & 0x7f;
  if ((uVar5 != 0x73) && (uVar5 != 0x7d)) {
    cVar4 = fn_82ABE2E0(param_3);
    if (cVar4 == '\0') {
      if (uVar5 == 0x6e) {
        piVar6 = (int *)(param_3 + 0x2c);
        for (uVar7 = 0; (uVar7 & 0xffffffff) < (uVar8 >> 0x13 & 7); uVar7 = uVar7 + 1) {
          if ((*(uint *)(*(int *)(*piVar6 + 0xc) + 8) >> 0x1a & 1) != 0) {
            fn_82B098F0(param_1,param_2,*(int *)(*piVar6 + 0xc),param_4 + 1);
            uVar8 = (ulonglong)*(uint *)(param_3 + 8);
            if ((*(uint *)(param_3 + 8) & 0x3f80) == 0x3980) goto LAB_82b0994c;
          }
          piVar6 = piVar6 + 1;
        }
      }
      fn_82B16698(param_1,param_3,*(undefined4 *)(param_1 + 0x294));
      uVar5 = *(uint *)(param_3 + 8);
      uVar3 = uVar5 >> 7 & 0x7f;
      if ((uVar3 != 0x73) &&
         ((((ulonglong)*(uint *)(param_3 + 0x1c) == (param_2 & 0xffffffff) || (uVar3 == 0x71)) ||
          (uVar3 == 0x7c)))) {
        if (((uVar5 >> 0x19 & 1) == 0) && ((uVar5 >> 5 & 1) == 0)) {
          cVar4 = fn_82ACA5E0(param_3);
          if (cVar4 == '\0') {
            if (uVar3 == 100) {
              puVar2 = *(uint **)(param_3 + 0x30);
              if ((uVar5 >> 1 & 3) == 0) {
                *puVar2 = *puVar2 >> 2 & 0x60 | 0x1c80 | *puVar2 & 0xfffffc9f;
                for (puVar1 = *(uint **)(param_3 + 4); puVar1 != (uint *)0x0;
                    puVar1 = (uint *)puVar1[2]) {
                  if (puVar1[4] != 0) {
                    uVar5 = *puVar1;
                    if ((uVar5 & 0xe000000) != 0) {
                      *puVar1 = ((((0x44U >> (uVar5 >> 10 & 6) & 3) << 2 |
                                  0x44U >> (uVar5 >> 8 & 6) & 3) << 2 |
                                 0x44U >> (uVar5 >> 6 & 6) & 3) << 2 | 0x44U >> (uVar5 >> 4 & 6) & 3
                                ) << 5 | uVar5 & 0xffffe01f;
                    }
                  }
                }
                fn_82AD1B28(param_3);
                uVar5 = *(uint *)(param_3 + 8);
              }
              if ((uVar5 >> 1 & 0xc) == 0) {
                if (0x2000000 < (*puVar2 & 0xe000000)) {
                  *puVar2 = *puVar2 & 0xf1ffffff | 0x2000000;
                  fn_82B161E8(param_1,puVar2[3],*(undefined4 *)(param_1 + 0x294));
                }
              }
            }
          }
          else {
            if (((**(uint **)(param_3 + 0x2c) >> 0xb ^ uVar5) & 0x1c000) != 0) {
              fn_82B25328(param_1,param_3,uVar5 >> 1 & 0xf,*(undefined4 *)(param_1 + 0x28c),1)
              ;
              fn_82AD1B28(param_3);
            }
            cVar4 = fn_82AF8968(param_1,param_3,param_3,auStack_50);
            if (cVar4 != '\0') {
              param_3 = fn_82AFF840(param_1,auStack_50,param_3,1,0);
            }
          }
          if ((param_4 & 0xffffffff) == 0) {
            for (puVar2 = *(uint **)(param_3 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]
                ) {
              uVar5 = puVar2[4];
              if (((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3f80) == 0x3700)) &&
                 ((*puVar2 & 0xe000000) != 0)) goto LAB_82b09bb4;
            }
            uVar5 = 0;
LAB_82b09bb4:
            if (uVar5 != 0) {
              fn_82AFA378(param_1);
            }
          }
        }
        goto LAB_82b09bc4;
      }
    }
    else {
      fn_82B8AC10(param_1,param_3,*(undefined4 *)(param_1 + 0x28c),1);
    }
  }
LAB_82b0994c:
  param_3 = 0;
LAB_82b09bc4:
  fn_82BA02A8(param_1,param_2);
  return param_3;
}

