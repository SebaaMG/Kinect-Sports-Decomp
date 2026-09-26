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
extern int fn_82696958();
extern int fn_826972E0();
extern int fn_826C1BA0();
extern int fn_82743C08();
extern int fn_827451A8();
extern int fn_827459D8();
extern unsigned int lbl_82005710;


undefined8
fn_82746818(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             byte *param_5)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  if ((*param_5 & 4) == 0) {
    pcVar5 = "left";
    pcVar7 = *(char **)*param_3;
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      dStack_40 = lbl_82005710;
      dStack_38 = lbl_82005710;
      dStack_30 = lbl_82005710;
      dStack_28 = lbl_82005710;
      fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
      dStack_40 = (double)fn_826972E0(param_4,param_2);
    }
    else {
      pcVar5 = "top";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        dStack_40 = lbl_82005710;
        dStack_38 = lbl_82005710;
        dStack_30 = lbl_82005710;
        dStack_28 = lbl_82005710;
        fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
        dStack_38 = (double)fn_826972E0(param_4,param_2);
      }
      else {
        pcVar5 = "right";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          dStack_40 = lbl_82005710;
          dStack_38 = lbl_82005710;
          dStack_30 = lbl_82005710;
          dStack_28 = lbl_82005710;
          fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
          dStack_30 = (double)fn_826972E0(param_4,param_2);
        }
        else {
          pcVar5 = "bottom";
          pcVar6 = pcVar7;
          do {
            cVar1 = *pcVar6;
            cVar2 = *pcVar5;
            if (cVar1 == '\0') break;
            pcVar6 = pcVar6 + 1;
            pcVar5 = pcVar5 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            dStack_40 = lbl_82005710;
            dStack_38 = lbl_82005710;
            dStack_30 = lbl_82005710;
            dStack_28 = lbl_82005710;
            fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
            dStack_28 = (double)fn_826972E0(param_4,param_2);
          }
          else {
            pcVar5 = "topLeft";
            pcVar6 = pcVar7;
            do {
              cVar1 = *pcVar6;
              cVar2 = *pcVar5;
              if (cVar1 == '\0') break;
              pcVar6 = pcVar6 + 1;
              pcVar5 = pcVar5 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 == cVar2) {
              dStack_40 = lbl_82005710;
              dStack_38 = lbl_82005710;
              dStack_30 = lbl_82005710;
              dStack_28 = lbl_82005710;
              fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
              lVar4 = fn_82696958(param_4,param_2);
              if (lVar4 != 0) {
                fn_82743C08(param_2,lVar4,&dStack_70);
                dStack_40 = dStack_70;
                dStack_38 = dStack_68;
              }
            }
            else {
              pcVar5 = "bottomRight";
              pcVar6 = pcVar7;
              do {
                cVar1 = *pcVar6;
                cVar2 = *pcVar5;
                if (cVar1 == '\0') break;
                pcVar6 = pcVar6 + 1;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                dStack_40 = lbl_82005710;
                dStack_38 = lbl_82005710;
                dStack_30 = lbl_82005710;
                dStack_28 = lbl_82005710;
                fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
                lVar4 = fn_82696958(param_4,param_2);
                if (lVar4 != 0) {
                  fn_82743C08(param_2,lVar4,&dStack_60);
                  dStack_30 = dStack_60;
                  dStack_28 = dStack_58;
                }
              }
              else {
                pcVar6 = "size";
                do {
                  cVar1 = *pcVar7;
                  cVar2 = *pcVar6;
                  if (cVar1 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 != cVar2) {
                  uVar3 = fn_826C1BA0(param_1,param_2,param_3,param_4);
                  return uVar3;
                }
                dStack_40 = lbl_82005710;
                dStack_38 = lbl_82005710;
                dStack_30 = lbl_82005710;
                dStack_28 = lbl_82005710;
                fn_827459D8(param_1 + -0x10,param_2,&dStack_40);
                lVar4 = fn_82696958(param_4,param_2);
                if (lVar4 != 0) {
                  fn_82743C08(param_2,lVar4,&dStack_50);
                  dStack_30 = dStack_50 + dStack_40;
                  dStack_28 = dStack_38 + dStack_48;
                }
              }
            }
          }
        }
      }
    }
    fn_827451A8(param_1 + -0x10,param_2,&dStack_40);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

