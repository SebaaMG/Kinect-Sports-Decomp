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
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_82AD12C8();
extern int fn_82AF4BA8();
extern int fn_82AF4C78();
extern int fn_82AF57C8();
extern int fn_82AF6A18();
extern int fn_82AF8FA0();
extern int fn_82B161E8();
extern int fn_82B8BCB0();
extern int fn_82B8D2B8();


undefined8
fn_82AF9758(int param_1,undefined8 param_2,uint *param_3,undefined8 param_4,uint *param_5,
             undefined8 param_6,uint *param_7,char param_8)

{
  uint *puVar1;
  bool bVar2;
  uint uVar4;
  int iVar5;
  undefined8 uVar3;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [128];
  
  uVar7 = param_3[3];
  uVar8 = param_5[3];
  param_7[1] = 0;
  param_7[2] = 0;
  *param_7 = *param_7 & 0xfff0780c | 1;
  uVar4 = *(uint *)(uVar7 + 8) >> 7 & 0x7f;
  if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
    bVar2 = true;
  }
  if (bVar2) {
    uVar4 = *(uint *)(uVar8 + 8) >> 7 & 0x7f;
    if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = *param_3;
      uVar4 = fn_82AF4BA8(param_1,uVar7,uVar4 >> 0x19 & 7,uVar4 >> 5 & 0xff,uVar4 & 0x1f,
                            auStack_80);
      *param_7 = (uVar4 & 7) << 0xf | *param_7 & 0xfffc7fff;
      uVar4 = *param_5;
      uVar6 = *param_7;
      uVar4 = fn_82AF4BA8(param_1,uVar8,uVar4 >> 0x19 & 7,uVar4 >> 5 & 0xff,uVar4 & 0x1f,
                            auStack_90);
      uVar4 = (uVar4 & 7) << 0xf | uVar6;
      *param_7 = uVar4;
      if (((*(uint *)(uVar7 + 8) & 0x3f80) == 16000) && ((*(uint *)(uVar8 + 8) & 0x3f80) == 16000))
      {
        iVar5 = fn_82AF4C78(param_1,auStack_80,*param_3 >> 0x19 & 7,auStack_90,
                              *param_5 >> 0x19 & 7);
        *param_7 = uVar6 & 0xfffc7fff | (iVar5 << 0xf | uVar4) & 0x38000;
      }
    }
  }
  if (((*(uint *)(uVar7 + 8) & 0x3f80) == 16000) && ((*(uint *)(uVar8 + 8) & 0x3f80) == 16000)) {
LAB_82af98cc:
    uVar3 = 0;
  }
  else {
    if (((*param_3 ^ *param_5) & 0x1e) == 0) {
      if ((*param_3 & 8) != 0) {
        uVar4 = fn_82AD12C8(param_2);
        uVar6 = fn_82AD12C8(param_4);
        if (uVar4 != uVar6) {
          return 3;
        }
        param_7[2] = uVar4;
      }
      if (uVar7 == uVar8) goto LAB_82af98cc;
      if (((*(uint *)(uVar7 + 8) & 0x3f80) == 0x3a00) || ((*(uint *)(uVar8 + 8) & 0x3f80) == 0x3a00)
         ) goto LAB_82af9dbc;
      uVar4 = *param_7;
      param_7[1] = 0;
      *param_7 = uVar4 | 2;
      uVar6 = *(uint *)(uVar7 + 8) >> 7 & 0x7f;
      if (uVar6 == 0x70) {
LAB_82af9980:
        uVar6 = *(uint *)(uVar8 + 8) >> 7 & 0x7f;
        if (uVar6 != 0x70) {
          if ((uVar6 < 0x20) || (bVar2 = true, 0x52 < uVar6)) {
            bVar2 = false;
          }
          if (!bVar2) goto LAB_82af99b0;
        }
        iVar5 = 1;
      }
      else {
        if ((uVar6 < 0x20) || (bVar2 = true, 0x52 < uVar6)) {
          bVar2 = false;
        }
        if (bVar2) goto LAB_82af9980;
LAB_82af99b0:
        iVar5 = 3;
      }
      *param_7 = iVar5 << 4 | uVar4 & 0xfffff80f | 2;
      uVar4 = *(uint *)(uVar7 + 8) >> 7 & 0x7f;
      if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
        bVar2 = true;
      }
      if (!bVar2) {
        uVar4 = *(uint *)(uVar8 + 8) >> 7 & 0x7f;
        if ((uVar4 == 0x7d) || (bVar2 = false, uVar4 == 0x7c)) {
          bVar2 = true;
        }
        if (!bVar2) {
          if ((*(uint *)(uVar7 + 8) >> 0x1a & 1) != 0) {
            uVar7 = fn_82B161E8(param_1,uVar7,*(undefined4 *)(param_1 + 0x294));
          }
          if ((*(uint *)(uVar8 + 8) >> 0x1a & 1) != 0) {
            uVar8 = fn_82B161E8(param_1,uVar8,*(undefined4 *)(param_1 + 0x294));
          }
          if ((*param_3 & 0x1e) == 0) {
            cVar9 = fn_82AF8FA0(param_1,uVar7,param_5,param_7,0,0);
            if (cVar9 != '\0') {
              uVar7 = *param_7 & 0xfffff80d | 0x40000;
LAB_82af9a90:
              *param_7 = uVar7;
              return 0;
            }
            cVar9 = fn_82AF8FA0(param_1,uVar8,param_3,param_7,0,0);
            if (cVar9 != '\0') {
              uVar7 = *param_7 & 0xfffff80d | 0x80000;
              goto LAB_82af9a90;
            }
          }
          if (param_8 == '\0') goto LAB_82af98cc;
          uVar4 = *(uint *)(uVar7 + 8) >> 0x17 & 1;
          if (uVar4 != (*(uint *)(uVar8 + 8) >> 0x17 & 1)) {
            return 1;
          }
          if ((uVar4 != 0) && (cVar9 = fn_82AF6A18(param_1,uVar7,uVar8), cVar9 == '\0')) {
            return 1;
          }
          for (puVar1 = *(uint **)(uVar7 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
            uVar4 = puVar1[4];
            if (((uVar4 != 0) && ((*(uint *)(uVar4 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar1 & 0xe000000) != 0)) goto LAB_82af9b64;
          }
          uVar4 = 0;
LAB_82af9b64:
          for (puVar1 = *(uint **)(uVar8 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
            uVar6 = puVar1[4];
            if (((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3f80) == 0x3700)) &&
               ((*puVar1 & 0xe000000) != 0)) goto LAB_82af9ba4;
          }
          uVar6 = 0;
LAB_82af9ba4:
          if (uVar4 != 0) {
            if ((uVar6 != 0) && (uVar4 != uVar6)) {
              return 1;
            }
            if ((*(uint *)(uVar4 + 8) >> 0x1a & 1) != 0) {
              uVar4 = fn_82B161E8(param_1,uVar4,*(undefined4 *)(param_1 + 0x294));
              for (puVar1 = *(uint **)(uVar8 + 4); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]
                  ) {
                uVar6 = puVar1[4];
                if (((uVar6 != 0) && ((*(uint *)(uVar6 + 8) & 0x3f80) == 0x3700)) &&
                   ((*puVar1 & 0xe000000) != 0)) goto LAB_82af9c1c;
              }
              uVar6 = 0;
            }
LAB_82af9c1c:
            *param_7 = *param_7 & 0xfffff80f;
            cVar9 = fn_82AF57C8(param_1,uVar4,uVar7,uVar8,param_6,param_7);
            if (cVar9 == '\0') goto LAB_82af9dbc;
            *param_7 = *param_7 & 0xffffefff;
          }
          if (uVar6 != 0) {
            if ((*(uint *)(uVar6 + 8) >> 0x1a & 1) != 0) {
              uVar6 = fn_82B161E8(param_1,uVar6,*(undefined4 *)(param_1 + 0x294));
            }
            *param_7 = *param_7 & 0xfffff80f;
            cVar9 = fn_82AF57C8(param_1,uVar6,uVar8,uVar7,param_6,param_7);
            if (cVar9 == '\0') goto LAB_82af9dbc;
            *param_7 = *param_7 | 0x1000;
          }
          if ((uVar4 == 0) && (uVar6 == 0)) {
            if (4 < (*(uint *)(uVar8 + 8) >> 0xe & 7) + (*(uint *)(uVar7 + 8) >> 0xe & 7))
            goto LAB_82af9dbc;
            if (((*(uint *)(uVar7 + 8) & 0x3f80) == 0x3700) ||
               ((*(uint *)(uVar8 + 8) & 0x3f80) == 0x3700)) {
              *param_7 = *param_7 & 0xfffff80f;
            }
          }
          if ((*(uint *)(uVar7 + 8) >> 7 & 0x7f) == 0x6e) {
            if ((*(uint *)(uVar8 + 8) & 0x3f80) != 0x3700) {
              if (((*(uint *)(uVar8 + 8) & 0x3f80) != 0x3800) &&
                 (cVar9 = fn_82B8BCB0(param_1,uVar8,uVar7,1), cVar9 == '\0')) {
                return 1;
              }
              goto LAB_82af9d84;
            }
            cVar9 = fn_82B8D2B8(param_1,uVar7,uVar8,1,1);
          }
          else {
LAB_82af9d84:
            if (((*(uint *)(uVar8 + 8) & 0x3f80) != 0x3700) ||
               ((*(uint *)(uVar7 + 8) & 0x3f80) == 0x3800)) goto LAB_82af98cc;
            cVar9 = fn_82B8BCB0(param_1,uVar7,uVar8,1);
          }
          if (cVar9 == '\0') {
            return 1;
          }
          goto LAB_82af98cc;
        }
      }
    }
LAB_82af9dbc:
    uVar3 = 2;
  }
  return uVar3;
}

