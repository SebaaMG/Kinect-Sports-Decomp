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
extern unsigned int *auStack_78;
extern unsigned int *auStack_88;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d8;
extern int fn_827A5498();
extern int fn_827A6F48();
extern int fn_827A6FC0();
extern unsigned int iStack_100;
extern unsigned int iStack_108;
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_fc;
extern unsigned int uStack_e0;
extern unsigned int uStack_e4;
extern unsigned int uStack_e8;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f4;
extern unsigned int uStack_f8;


bool fn_827A75A8(undefined4 *param_1,int param_2,int param_3,int *param_4,undefined8 param_5)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [120];
  
  iVar6 = 0xb;
  uStack_f4 = 0;
  iStack_fc = param_3 * 2 + param_2;
  uStack_f8 = 0xb;
  uStack_f0 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  iVar4 = 0;
  iVar5 = 0;
  uStack_ec = 1;
  bVar2 = false;
  uStack_e8 = 1;
  uVar7 = 0;
  iStack_110 = 0xb;
  bVar1 = false;
  iStack_10c = 0;
  iStack_108 = 0;
  iStack_100 = param_2;
  do {
    if (uVar7 == 4) break;
    if (bVar1) {
      bVar1 = false;
    }
    else {
      piVar3 = (int *)fn_827A5498(auStack_a8,&iStack_100);
      iVar6 = *piVar3;
      iVar4 = piVar3[1];
      iVar5 = piVar3[2];
      iStack_110 = iVar6;
      iStack_10c = iVar4;
      iStack_108 = iVar5;
    }
    if (iVar6 == 10) {
      uVar7 = 3;
    }
    if (uVar7 == 0) {
      if (iVar6 == 0) {
        if (*(char *)(param_1 + 9) == '\0') {
          *param_1 = 0;
          param_1[1] = iVar4;
          param_1[2] = iVar5;
          piVar3 = (int *)fn_827A5498(auStack_c8,&iStack_100);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          iStack_110 = iVar6;
          iStack_10c = iVar4;
          iStack_108 = iVar5;
          if (iVar6 == 9) {
            *(undefined1 *)(param_1 + 9) = 1;
            param_1[2] = param_1[2] + iVar5;
            goto LAB_827a7934;
          }
          bVar1 = true;
        }
        else {
          param_1[2] = param_1[2] + iVar5;
        }
        (**(code **)(*param_4 + 4))(param_4,param_1,param_5);
        if (bVar1) {
          bVar1 = false;
        }
        else {
          piVar3 = (int *)fn_827A5498(auStack_b8,&iStack_100);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          iStack_110 = iVar6;
          iStack_10c = iVar4;
          iStack_108 = iVar5;
        }
        if (iVar6 == 2) {
          piVar3 = (int *)fn_827A5498(auStack_98,&iStack_100);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
          iStack_110 = iVar6;
          iStack_10c = iVar4;
          iStack_108 = iVar5;
        }
        if (iVar6 == 5) {
          *(undefined1 *)(param_1 + 9) = 0;
LAB_827a7930:
          uVar7 = 0;
        }
        else {
          if (iVar6 != 6) goto LAB_827a7918;
          uVar7 = 1;
          *(undefined1 *)(param_1 + 9) = 0;
        }
      }
      else if ((iVar6 != 2) || (*(char *)(param_1 + 9) != '\0')) goto LAB_827a7918;
    }
    else if (uVar7 == 1) {
      if (iVar6 == 0) {
        param_1[3] = 0;
        param_1[4] = iVar4;
        param_1[5] = iVar5;
        piVar3 = (int *)fn_827A5498(auStack_88,&iStack_100);
        iVar6 = *piVar3;
        iVar4 = piVar3[1];
        iVar5 = piVar3[2];
        if (iVar6 == 2) {
          iStack_110 = iVar6;
          iStack_10c = iVar4;
          iStack_108 = iVar5;
          piVar3 = (int *)fn_827A5498(auStack_d8,&iStack_100);
          iVar6 = *piVar3;
          iVar4 = piVar3[1];
          iVar5 = piVar3[2];
        }
        iStack_110 = iVar6;
        iStack_10c = iVar4;
        iStack_108 = iVar5;
        if (iVar6 != 9) goto LAB_827a7918;
        uVar7 = 2;
      }
      else if (iVar6 != 2) {
        if (iVar6 == 7) {
          (**(code **)(*param_4 + 8))(param_4,param_5);
          goto LAB_827a7930;
        }
LAB_827a7918:
        uVar7 = 4;
      }
    }
    else if (uVar7 < 3) {
      if (iVar6 == 7) {
        (**(code **)(*param_4 + 0xc))(param_4,param_1 + 3,param_1 + 6,param_5);
        (**(code **)(*param_4 + 8))(param_4,param_5);
        *(undefined1 *)((int)param_1 + 0x25) = 0;
        goto LAB_827a7930;
      }
      if (iVar6 == 8) {
        (**(code **)(*param_4 + 0xc))(param_4,param_1 + 3,param_1 + 6,param_5);
        uVar7 = 1;
        *(undefined1 *)((int)param_1 + 0x25) = 0;
      }
      else {
        if (*(char *)((int)param_1 + 0x25) == '\0') {
          fn_827A6F48(param_1 + 6,0);
          *(undefined1 *)((int)param_1 + 0x25) = 1;
          if (iVar6 == 2) {
            piVar3 = (int *)fn_827A5498(auStack_78,&iStack_100);
            iVar6 = *piVar3;
            iVar4 = piVar3[1];
            iVar5 = piVar3[2];
            iStack_110 = iVar6;
            iStack_10c = iVar4;
            iStack_108 = iVar5;
          }
          param_1[10] = uStack_ec;
          param_1[0xb] = uStack_e8;
        }
        fn_827A6FC0(param_1 + 6,&iStack_110);
      }
    }
    else {
      bVar2 = true;
    }
LAB_827a7934:;} while (!bVar2);
  return uVar7 == 3;
}

