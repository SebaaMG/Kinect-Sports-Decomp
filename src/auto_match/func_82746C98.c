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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695FA0();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_82713EE8();
extern int fn_82743888();
extern int fn_82744378();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


undefined8 fn_82746C98(longlong param_1,int param_2,undefined4 *param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar5;
  ulonglong uVar3;
  undefined8 uVar4;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  undefined1 auStack_c0 [8];
  double dStack_b8;
  undefined1 auStack_b0 [8];
  double dStack_a8;
  undefined1 auStack_a0 [8];
  double dStack_98;
  undefined1 auStack_90 [8];
  double dStack_88;
  undefined1 auStack_80 [16];
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  double dStack_30;
  double dStack_28;
  
  pcVar6 = "left";
  pcVar8 = *(char **)*param_3;
  pcVar7 = pcVar8;
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    dStack_e0 = lbl_82005710;
    dStack_d8 = lbl_82005710;
    dStack_d0 = lbl_82005710;
    dStack_c8 = lbl_82005710;
    fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
    dStack_88 = dStack_e0;
    auStack_90[0] = 3;
    fn_82695FA0(param_4,auStack_90);
    puVar5 = auStack_90;
  }
  else {
    pcVar6 = "right";
    pcVar7 = pcVar8;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      dStack_e0 = lbl_82005710;
      dStack_d8 = lbl_82005710;
      dStack_d0 = lbl_82005710;
      dStack_c8 = lbl_82005710;
      fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
      dStack_98 = dStack_d0;
      auStack_a0[0] = 3;
      fn_82695FA0(param_4,auStack_a0);
      puVar5 = auStack_a0;
    }
    else {
      pcVar6 = "top";
      pcVar7 = pcVar8;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        dStack_e0 = lbl_82005710;
        dStack_d8 = lbl_82005710;
        dStack_d0 = lbl_82005710;
        dStack_c8 = lbl_82005710;
        fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
        dStack_b8 = dStack_d8;
        auStack_c0[0] = 3;
        fn_82695FA0(param_4,auStack_c0);
        puVar5 = auStack_c0;
      }
      else {
        pcVar6 = "bottom";
        pcVar7 = pcVar8;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          dStack_e0 = lbl_82005710;
          dStack_d8 = lbl_82005710;
          dStack_d0 = lbl_82005710;
          dStack_c8 = lbl_82005710;
          fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
          dStack_a8 = dStack_c8;
          auStack_b0[0] = 3;
          fn_82695FA0(param_4,auStack_b0);
          puVar5 = auStack_b0;
        }
        else {
          pcVar6 = "topLeft";
          pcVar7 = pcVar8;
          do {
            cVar1 = *pcVar7;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            dStack_e0 = lbl_82005710;
            dStack_d8 = lbl_82005710;
            dStack_d0 = lbl_82005710;
            dStack_c8 = lbl_82005710;
            fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
            uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x288),0x30,0);
            if ((uVar3 & 0xffffffff) == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = fn_82744378(uVar3,param_2);
            }
            dStack_30 = dStack_e0;
            dStack_28 = dStack_d8;
            fn_82743888(uVar3,param_2,&dStack_30);
            fn_826961B0(auStack_80,uVar3);
            if ((uVar3 & 0xffffffff) != 0) {
              fn_826824B0(uVar3);
            }
            fn_82695FA0(param_4,auStack_80);
            puVar5 = auStack_80;
          }
          else {
            pcVar6 = "bottomRight";
            pcVar7 = pcVar8;
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              dStack_e0 = lbl_82005710;
              dStack_d8 = lbl_82005710;
              dStack_d0 = lbl_82005710;
              dStack_c8 = lbl_82005710;
              fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
              uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x288),0x30,0);
              if ((uVar3 & 0xffffffff) == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = fn_82744378(uVar3,param_2);
              }
              dStack_60 = dStack_d0;
              dStack_58 = dStack_c8;
              fn_82743888(uVar3,param_2,&dStack_60);
              fn_826961B0(auStack_40,uVar3);
              if ((uVar3 & 0xffffffff) != 0) {
                fn_826824B0(uVar3);
              }
              fn_82695FA0(param_4,auStack_40);
              puVar5 = auStack_40;
            }
            else {
              pcVar7 = "size";
              do {
                cVar1 = *pcVar8;
                cVar2 = *pcVar7;
                if (cVar1 == '\0') break;
                pcVar8 = pcVar8 + 1;
                pcVar7 = pcVar7 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 != cVar2) {
                uVar4 = fn_82713EE8(param_1,param_2,param_3,param_4);
                return uVar4;
              }
              dStack_e0 = lbl_82005710;
              dStack_d8 = lbl_82005710;
              dStack_d0 = lbl_82005710;
              dStack_c8 = lbl_82005710;
              fn_827459D8(param_1 + -0x10,param_2,&dStack_e0);
              uVar3 = fn_8267B890(*(undefined4 *)(*(int *)(param_2 + 0x78) + 0x288),0x30,0);
              if ((uVar3 & 0xffffffff) == 0) {
                uVar3 = 0;
              }
              else {
                uVar3 = fn_82744378(uVar3,param_2);
              }
              dStack_70 = dStack_d0 - dStack_e0;
              dStack_68 = dStack_c8 - dStack_d8;
              fn_82743888(uVar3,param_2,&dStack_70);
              fn_826961B0(auStack_50,uVar3);
              if ((uVar3 & 0xffffffff) != 0) {
                fn_826824B0(uVar3);
              }
              fn_82695FA0(param_4,auStack_50);
              puVar5 = auStack_50;
            }
          }
        }
      }
    }
  }
  fn_82696330(puVar5);
  return 1;
}

