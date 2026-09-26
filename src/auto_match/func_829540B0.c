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
extern unsigned int *auStack_2c;
extern int fn_82975B00();
extern unsigned int uStack_30;


undefined8 fn_829540B0(int *param_1,int param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uStack_30;
  uint auStack_2c [11];
  
  if (param_1[0x22] == *(int *)(param_2 + 4)) {
    auStack_2c[0] = *(uint *)(param_2 + 0xc);
    uVar6 = 0;
    uStack_30 = 0;
    if ((uint)param_1[0xb] <= auStack_2c[0]) {
      uVar4 = 0xffffffff82037a48;
      goto LAB_8295410c;
    }
    uVar1 = param_1[0x14];
    if ((uVar1 != 0) && (uVar1 <= auStack_2c[0])) {
      auStack_2c[0] = auStack_2c[0] - uVar1;
      uVar6 = 3;
      uStack_30 = 3;
    }
  }
  else {
    uVar1 = *(uint *)(*(int *)(*(int *)(param_2 + 4) * 4 + param_1[4]) + 4);
    if (((uVar1 & 0x10) == 0) || ((uVar1 & 4) == 0)) {
      if (((uVar1 & 0x10) == 0) || ((uVar1 & 0x200) != 0)) {
        if (((uVar1 & 0x200) != 0) && ((uVar1 & 0x42080) == 0)) {
          auStack_2c[0] = *(uint *)(param_2 + 0xc);
          if ((uint)param_1[0xe] <= auStack_2c[0]) {
            uVar3 = 0x119b;
            uVar4 = 0xffffffff82037b70;
            goto LAB_82954110;
          }
          if (auStack_2c[0] < 0x800) {
            uVar6 = 2;
          }
          else if (auStack_2c[0] < 0x1000) {
            uVar6 = 0xb;
          }
          else {
            uVar6 = 0xd - (ulonglong)(auStack_2c[0] < 0x1800);
          }
          auStack_2c[0] = auStack_2c[0] & 0x7ff;
          goto LAB_82954244;
        }
        if (((uVar1 & 0x200) == 0) || (((uVar1 & 0x80) != 0 || ((uVar1 & 0x2000) == 0)))) {
          if ((uVar1 & 0x80) == 0) {
            if ((uVar1 & 0x40000) == 0) {
              if (param_1[0x24] != *(int *)(param_2 + 4)) {
                uVar4 = 0;
                uVar3 = 0xffffffff82037a98;
                uVar2 = 0;
                goto LAB_82954470;
              }
              auStack_2c[0] = *(uint *)(param_2 + 0xc);
              uVar6 = 0x13;
              uStack_30 = 0x13;
              if ((uint)param_1[0xd] <= auStack_2c[0]) {
                uVar3 = 0x11c5;
                uVar4 = 0xffffffff820379f4;
                goto LAB_82954110;
              }
            }
            else {
              auStack_2c[0] = *(uint *)(param_2 + 0xc);
              uVar6 = 7;
              uStack_30 = 7;
              if ((uint)param_1[0x10] <= auStack_2c[0]) {
                uVar4 = 0xffffffff82037af4;
                goto LAB_8295410c;
              }
            }
          }
          else {
            auStack_2c[0] = *(uint *)(param_2 + 0xc);
            uVar6 = 10;
            uStack_30 = 10;
            if ((uint)param_1[0x13] <= auStack_2c[0]) {
              uVar4 = 0xffffffff82037b1c;
LAB_8295410c:
              uVar3 = 0x1199;
LAB_82954110:
              fn_82975B00(param_1,*(undefined4 *)(param_1[0x41] + 0x3c),uVar3,uVar4);
              return 0xffffffff88760b59;
            }
          }
        }
        else {
          auStack_2c[0] = *(uint *)(param_2 + 0xc);
          uVar6 = 0xe;
          uStack_30 = 0xe;
          if ((uint)param_1[0x18] <= auStack_2c[0]) {
            uVar3 = 0x1194;
            uVar4 = 0xffffffff82037b44;
            goto LAB_82954110;
          }
        }
      }
      else {
        uVar4 = (**(code **)(*param_1 + 0x15c))(param_1,param_2,auStack_2c,&uStack_30);
        if ((int)uVar4 < 0) {
          return uVar4;
        }
        uVar6 = (ulonglong)uStack_30;
      }
    }
    else {
      uVar6 = 0xf;
      auStack_2c[0] = 0;
LAB_82954244:
      uStack_30 = (uint)uVar6;
    }
  }
  uVar5 = 0;
  uVar1 = *(uint *)(param_2 + 0x3c) & 0x1f0000;
  if (uVar1 == 0x100000) {
    uVar5 = 0xb000000;
  }
  else if (uVar1 == 0x180000) {
    uVar5 = 0xc000000;
  }
  else if (uVar1 == 0x80000) {
    uVar5 = 0x1000000;
  }
  else if (uVar1 == 0x20000) {
    uVar5 = 0x2000000;
  }
  else if (uVar1 == 0xa0000) {
    uVar5 = 0x3000000;
  }
  else if (uVar1 == 0x60000) {
    uVar5 = 0x4000000;
  }
  else if (uVar1 == 0xe0000) {
    uVar5 = 0x5000000;
  }
  else if (uVar1 == 0x10000) {
    uVar5 = 0x6000000;
  }
  else if (uVar1 == 0x40000) {
    uVar5 = 0x7000000;
  }
  else if (uVar1 == 0xc0000) {
    uVar5 = 0x8000000;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = (uint)(((uVar6 & 7) << 0x14 | 0xff800000 | uVar6 & 0x18) << 8) |
               auStack_2c[0] & 0x7ff | uVar5;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_2 + 8);
  }
  if (*(int *)(param_2 + 8) != -1) {
    if (param_1[0x56] == 0) {
      uVar4 = 0x119f;
      uVar3 = 0xffffffff82037ac8;
      uVar2 = *(undefined4 *)(param_1[0x41] + 0x3c);
LAB_82954470:
      fn_82975B00(param_1,uVar2,uVar4,uVar3);
      return 0xffffffff80004005;
    }
    *param_3 = *param_3 | 0x2000;
  }
  return 0;
}

