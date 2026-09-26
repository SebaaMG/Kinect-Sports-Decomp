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
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82E7E7E0();
extern int fn_82E7E900();
extern int fn_82E7F0F8();
extern int fn_82E7F108();
extern int fn_82E804C0();
extern int fn_82E80868();
extern int fn_82EEE678();
extern int fn_82EEE8D8();
extern unsigned int uStack_7c;


longlong fn_82E7B958(int param_1,undefined8 param_2,undefined8 param_3,ushort *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ushort auStack_80 [2];
  undefined4 uStack_7c;
  uint auStack_78 [2];
  ushort auStack_70 [56];
  
  auStack_80[0] = 0;
  uStack_7c = 0;
  auStack_78[0] = 2;
  uVar5 = 0;
  lVar1 = fn_82EEE678(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                            *(int *)(param_1 + 0x20) + 8,param_2,param_3,0,0,auStack_80,1);
  if (-1 < lVar1) {
    if ((ulonglong)auStack_80[0] == 0) {
      lVar1 = -0x3ff2c173;
    }
    else {
      iVar2 = fn_82E50BE8((ulonglong)auStack_80[0] << 1,0,0,0,0);
      if (iVar2 == 0) {
        lVar1 = -0x7ff8fff2;
      }
      else {
        lVar1 = fn_82EEE678(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                  *(int *)(param_1 + 0x20) + 8,param_2,param_3,0,iVar2,auStack_80,1)
        ;
        if ((-1 < lVar1) && (auStack_80[0] != 0)) {
          uVar4 = 0;
          do {
            fn_82E7F0F8(auStack_70);
            lVar1 = fn_82EEE8D8(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                      *(int *)(param_1 + 0x20) + 8,param_2,
                                      *(undefined2 *)(uVar4 * 2 + iVar2),0,0,auStack_78,0,0);
            if (lVar1 < 0) {
LAB_82e7bc3c:
              fn_82E7E7E0(auStack_70);
              break;
            }
            if ((uVar5 & 0xffffffff) != 0) {
              fn_82E4FE40(uVar5);
            }
            uVar5 = fn_82E50BE8(uStack_7c,0,0,0,0);
            if (uVar5 == 0) {
              lVar1 = -0x7ff8fff2;
              goto LAB_82e7bc3c;
            }
            lVar1 = fn_82EEE8D8(*(int *)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 8) +
                                      *(int *)(param_1 + 0x20) + 8,param_2,
                                      *(undefined2 *)(uVar4 * 2 + iVar2),0,0,0,0,uVar5);
            if (lVar1 < 0) goto LAB_82e7bc3c;
            if (auStack_78[0] == 0) {
              uVar3 = 0x13;
            }
            else if (auStack_78[0] == 1) {
              uVar3 = 0x1f;
            }
            else if (auStack_78[0] < 3) {
              uVar3 = 0x41;
            }
            else if (auStack_78[0] == 3) {
              uVar3 = 0xb;
            }
            else if (auStack_78[0] < 5) {
              uVar3 = 0x15;
            }
            else if (auStack_78[0] == 5) {
              uVar3 = 0x12;
            }
            else {
              if (6 < auStack_78[0]) {
                lVar1 = -0x3ff2c174;
                goto LAB_82e7bc3c;
              }
              uVar3 = 0x48;
            }
            lVar1 = fn_82E7F108(auStack_70,uVar3,uVar5,uStack_7c);
            if ((int)lVar1 < 0) goto LAB_82e7bc3c;
            if (auStack_80[0] < 2) {
              lVar1 = fn_82E7E900(param_4,auStack_70);
            }
            else {
              if (((*param_4 != 0) && (((auStack_70[0] ^ *param_4) & 0xfff) != 0)) &&
                 (lVar1 = fn_82E80868(param_4), lVar1 < 0)) goto LAB_82e7bc3c;
              lVar1 = fn_82E804C0(param_4,auStack_70);
            }
            if ((int)lVar1 < 0) goto LAB_82e7bc3c;
            fn_82E7E7E0(auStack_70);
            uVar4 = uVar4 + 1 & 0xffff;
          } while (uVar4 < auStack_80[0]);
        }
        fn_82E4FE40(iVar2);
        if ((uVar5 & 0xffffffff) != 0) {
          fn_82E4FE40(uVar5);
        }
      }
    }
  }
  return lVar1;
}

