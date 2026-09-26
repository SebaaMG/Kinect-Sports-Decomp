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
#define NAN(x) ((x) != (x))
extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_8227B548();
extern int fn_8229AE10();
extern int fn_8229F618();
extern int fn_823605C0();
extern int fn_82360BB0();
extern int fn_82672C20();
extern unsigned int iStack_4c;
extern unsigned int iStack_54;
extern unsigned int iStack_5c;
extern unsigned int iStack_64;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_8241B1C8(double param_1,uint *param_2)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar7;
  ulonglong uVar6;
  int iVar8;
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined1 auStack_60 [4];
  int iStack_5c;
  undefined1 auStack_58 [4];
  int iStack_54;
  undefined1 auStack_50 [4];
  int iStack_4c;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double dStack_38;
  
  fVar3 = lbl_821CC160;
  uVar7 = param_2[0x6d];
  if (uVar7 < 2) {
    if (-1 < *(int *)(param_2[6] * 0x1ac + param_2[2] + 0xc)) {
      if (*(int *)(*(int *)(*param_2 + 0xd4) + 0x183c) == 0) {
        puVar5 = (undefined4 *)fn_8229AE10(auStack_58);
        fn_82672C20(*puVar5,0xffffffff821aa744,0,0);
        if (iStack_54 != 0) {
          fn_822315A0();
        }
      }
      else {
        fn_8229F618(*(undefined4 *)(*(int *)(*param_2 + 0xd4) + 0xc));
      }
    }
    if (-1 < *(int *)(param_2[6] * 0x1ac + param_2[2] + 0xc)) {
      puVar5 = (undefined4 *)fn_8229AE10(auStack_50,*(undefined4 *)(*param_2 + 0xd4));
      fn_82672C20(*puVar5,0xffffffff821aa780,0,0);
      if (iStack_4c != 0) {
        fn_822315A0();
      }
    }
    if (param_2[0x6e] == 6) {
      uVar7 = *(uint *)(*param_2 + 0x650);
    }
    else {
      uVar7 = *(uint *)(*param_2 + 0x654);
    }
    param_2[0x6f] = uVar7;
    param_2[0x6d] = ((uint)LZCOUNT(param_2[0x6d]) >> 5 ^ 1) + 2;
  }
  else if (uVar7 == 3) {
    fVar1 = (float)((double)(float)param_2[0x6f] - param_1);
    if (*(float *)(&lbl_821954D8 +
                  ((uint)(byte)((fVar1 < lbl_821CC160) << 2) |
                  (uint)(NAN(fVar1) || NAN(lbl_821CC160)) << 2)) < 0.0) {
      fVar1 = lbl_821CC160;
    }
    param_2[0x6f] = (uint)fVar1;
    if (fVar1 == fVar3) {
      uVar6 = (ulonglong)*param_2;
      iVar4 = fn_82360BB0(uVar6);
      if ((iVar4 != 0) && (iVar4 = (int)uVar6, *(int *)(iVar4 + 0x2b40) == 0)) {
        if (param_2 == *(uint **)(iVar4 + 0x2b20)) {
          iVar4 = *(int *)(*(int *)(*(int *)(iVar4 + 0xd4) + 0x18) + 0xc);
        }
        else {
          iVar4 = 0;
        }
        if (((iVar4 == 0) && (param_2[0xa7] == 0)) && (param_2[0xac] == 0)) {
          param_2[0x6d] = 4;
          fn_823605C0(uVar6,*(undefined4 *)(param_2[6] * 0x1ac + param_2[2] + 0xc));
          iVar8 = param_2[6] * 0x1ac + param_2[2];
          iVar4 = *(int *)(iVar8 + 0x40);
          if (-1 < *(int *)(iVar8 + 0xc)) {
            uVar2 = *(undefined4 *)(*param_2 + 0xd4);
            uStack_40 = 0;
            uStack_3c = 0;
            fn_82273CD8(&uStack_40,3);
            dStack_38 = (double)(longlong)iVar4;
            puVar5 = (undefined4 *)fn_8229AE10(auStack_68,uVar2);
            fn_82672C20(*puVar5,0xffffffff821aa6e0,&uStack_40,1);
            if (iStack_64 != 0) {
              fn_822315A0();
            }
            fn_82273C88(&uStack_40);
          }
          if (-1 < *(int *)(param_2[6] * 0x1ac + param_2[2] + 0xc)) {
            puVar5 = (undefined4 *)fn_8229AE10(auStack_60,*(undefined4 *)(*param_2 + 0xd4));
            fn_82672C20(*puVar5,0xffffffff821aa760,0,0);
            if (iStack_5c != 0) {
              fn_822315A0();
            }
          }
        }
      }
    }
  }
  else if (uVar7 == 5) {
    uVar7 = *param_2;
    iVar4 = fn_82360BB0(uVar7);
    if (iVar4 != 0) {
      param_2[0x6d] = 6;
      if (*(int *)(uVar7 + 0x184) != 0) {
        fn_8227B548();
      }
    }
  }
  param_2[0x6e] = param_2[0x6d];
  return;
}

