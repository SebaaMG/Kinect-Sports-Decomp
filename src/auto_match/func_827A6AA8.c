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
extern unsigned int *auStack_30;
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_8268B508();
extern int fn_827A5970();
extern int fn_827A5BE8();
extern int fn_827A5CC8();
extern int fn_827A5E20();
extern int fn_827A5F20();
extern int fn_827A6060();
extern int fn_827A61A0();
extern int fn_827A62E0();
extern int fn_827A63C8();
extern int fn_827A64B0();
extern int fn_827A6598();
extern int fn_827A67D0();
extern int fn_827A6910();
extern U64 storeWordConditionalIndexed();


void fn_827A6AA8(undefined8 param_1,int param_2,int param_3,undefined8 param_4)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  uint *puVar8;
  char *pcVar9;
  char in_RESERVE;
  byte in_cr0;
  byte bVar10;
  uint auStack_30 [12];
  
  fn_8268B330(auStack_30);
  fn_8268B508(auStack_30,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (*(int *)(param_3 + 4) == 0) {
    lVar7 = ((ulonglong)auStack_30[0] & 0xfffffffc) + 4;
    do {
      puVar8 = (uint *)lVar7;
      uVar5 = (ulonglong)*puVar8;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
        *puVar8 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  else {
    pcVar4 = (char *)((auStack_30[0] & 0xfffffffc) + 8);
    pcVar6 = "color";
    pcVar9 = pcVar4;
    do {
      cVar1 = *pcVar9;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar9 = pcVar9 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    bVar10 = (cVar1 == cVar2) << 1;
    if (cVar1 == cVar2) {
      fn_827A5BE8(param_1,param_4,param_3);
    }
    else {
      pcVar6 = "display";
      pcVar9 = pcVar4;
      do {
        cVar1 = *pcVar9;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar9 = pcVar9 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      bVar10 = (cVar1 == cVar2) << 1;
      if (cVar1 == cVar2) {
        fn_827A5CC8(param_1,param_4,param_3);
      }
      else {
        pcVar6 = "font-family";
        pcVar9 = pcVar4;
        do {
          cVar1 = *pcVar9;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar9 = pcVar9 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        bVar10 = (cVar1 == cVar2) << 1;
        if (cVar1 == cVar2) {
          fn_827A5970(param_1,param_4,param_3);
        }
        else {
          pcVar6 = "font-size";
          pcVar9 = pcVar4;
          do {
            cVar1 = *pcVar9;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar9 = pcVar9 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          bVar10 = (cVar1 == cVar2) << 1;
          if (cVar1 == cVar2) {
            fn_827A5E20(param_1,param_4,param_3);
          }
          else {
            pcVar6 = "font-style";
            pcVar9 = pcVar4;
            do {
              cVar1 = *pcVar9;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar9 = pcVar9 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            bVar10 = (cVar1 == cVar2) << 1;
            if (cVar1 == cVar2) {
              fn_827A5F20(param_1,param_4,param_3);
            }
            else {
              pcVar6 = "font-weight";
              pcVar9 = pcVar4;
              do {
                cVar1 = *pcVar9;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar9 = pcVar9 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              bVar10 = (cVar1 == cVar2) << 1;
              if (cVar1 == cVar2) {
                fn_827A6060(param_1,param_4,param_3);
              }
              else {
                pcVar6 = "kerning";
                pcVar9 = pcVar4;
                do {
                  cVar1 = *pcVar9;
                  cVar2 = *pcVar6;
                  if (cVar1 == '\0') break;
                  pcVar9 = pcVar9 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 == cVar2);
                bVar10 = (cVar1 == cVar2) << 1;
                if (cVar1 == cVar2) {
                  fn_827A61A0(param_1,param_4,param_3);
                }
                else {
                  pcVar6 = "letter-spacing";
                  pcVar9 = pcVar4;
                  do {
                    cVar1 = *pcVar9;
                    cVar2 = *pcVar6;
                    if (cVar1 == '\0') break;
                    pcVar9 = pcVar9 + 1;
                    pcVar6 = pcVar6 + 1;
                  } while (cVar1 == cVar2);
                  bVar10 = (cVar1 == cVar2) << 1;
                  if (cVar1 == cVar2) {
                    fn_827A62E0(param_1,param_4,param_3);
                  }
                  else {
                    pcVar6 = "margin-left";
                    pcVar9 = pcVar4;
                    do {
                      cVar1 = *pcVar9;
                      cVar2 = *pcVar6;
                      if (cVar1 == '\0') break;
                      pcVar9 = pcVar9 + 1;
                      pcVar6 = pcVar6 + 1;
                    } while (cVar1 == cVar2);
                    bVar10 = (cVar1 == cVar2) << 1;
                    if (cVar1 == cVar2) {
                      fn_827A63C8(param_1,param_4,param_3);
                    }
                    else {
                      pcVar6 = "margin-right";
                      pcVar9 = pcVar4;
                      do {
                        cVar1 = *pcVar9;
                        cVar2 = *pcVar6;
                        if (cVar1 == '\0') break;
                        pcVar9 = pcVar9 + 1;
                        pcVar6 = pcVar6 + 1;
                      } while (cVar1 == cVar2);
                      bVar10 = (cVar1 == cVar2) << 1;
                      if (cVar1 == cVar2) {
                        fn_827A64B0(param_1,param_4,param_3);
                      }
                      else {
                        pcVar6 = "text-align";
                        pcVar9 = pcVar4;
                        do {
                          cVar1 = *pcVar9;
                          cVar2 = *pcVar6;
                          if (cVar1 == '\0') break;
                          pcVar9 = pcVar9 + 1;
                          pcVar6 = pcVar6 + 1;
                        } while (cVar1 == cVar2);
                        bVar10 = (cVar1 == cVar2) << 1;
                        if (cVar1 == cVar2) {
                          fn_827A6598(param_1,param_4,param_3);
                        }
                        else {
                          pcVar6 = "text-decoration";
                          pcVar9 = pcVar4;
                          do {
                            cVar1 = *pcVar9;
                            cVar2 = *pcVar6;
                            if (cVar1 == '\0') break;
                            pcVar9 = pcVar9 + 1;
                            pcVar6 = pcVar6 + 1;
                          } while (cVar1 == cVar2);
                          bVar10 = (cVar1 == cVar2) << 1;
                          if (cVar1 == cVar2) {
                            fn_827A67D0(param_1,param_4,param_3);
                          }
                          else {
                            pcVar9 = "text-indent";
                            do {
                              cVar1 = *pcVar4;
                              cVar2 = *pcVar9;
                              if (cVar1 == '\0') break;
                              pcVar4 = pcVar4 + 1;
                              pcVar9 = pcVar9 + 1;
                            } while (cVar1 == cVar2);
                            bVar10 = (cVar1 == cVar2) << 1;
                            if (cVar1 == cVar2) {
                              fn_827A6910(param_1,param_4,param_3);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar7 = ((ulonglong)auStack_30[0] & 0xfffffffc) + 4;
    do {
      puVar8 = (uint *)lVar7;
      uVar5 = (ulonglong)*puVar8;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(uVar5 - 1,0,lVar7);
        *puVar8 = uVar3;
        bVar10 = 2;
      }
    } while (!(bool)(bVar10 >> 1 & 1));
  }
  if (uVar5 == 1) {
    fn_8267BE38();
  }
  return;
}

