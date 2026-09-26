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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_828358A8();
extern int fn_82835968();
extern int fn_82F64020();
extern unsigned int uStack_24;
extern unsigned int uStack_26;
extern unsigned int uStack_27;


void fn_82836098(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  undefined4 uStack_24;
  
  fn_82835968(param_1,param_2,&bStack_28);
  pcVar3 = (char *)fn_828358A8(param_1);
  uVar4 = 0xffffffff8201f410;
  pcVar6 = "int";
  pcVar7 = pcVar3;
  do {
    cVar1 = *pcVar7;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    uVar4 = 0xffffffff8201f338;
  }
  else {
    pcVar6 = "unsigned int";
    pcVar7 = pcVar3;
    do {
      cVar1 = *pcVar7;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar7 = pcVar7 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      uVar4 = 0xffffffff8201f34c;
    }
    else {
      pcVar6 = "short";
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = (ulonglong)CONCAT11(bStack_28,uStack_27);
        uVar4 = 0xffffffff8201f358;
        goto LAB_82836454;
      }
      pcVar6 = "unsigned short";
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar5 = (ulonglong)CONCAT11(bStack_28,uStack_27);
        uVar4 = 0xffffffff8201f36c;
        goto LAB_82836454;
      }
      pcVar6 = "long";
      pcVar7 = pcVar3;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        uVar4 = 0xffffffff8201f378;
      }
      else {
        pcVar6 = "unsigned long";
        pcVar7 = pcVar3;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
          pcVar6 = "long long";
          pcVar7 = pcVar3;
          do {
            cVar1 = *pcVar7;
            cVar2 = *pcVar6;
            if (cVar1 == '\0') break;
            pcVar7 = pcVar7 + 1;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 == cVar2);
          if (cVar1 == cVar2) {
            uVar4 = 0xffffffff8201f39c;
          }
          else {
            pcVar6 = "unsigned long long";
            pcVar7 = pcVar3;
            do {
              cVar1 = *pcVar7;
              cVar2 = *pcVar6;
              if (cVar1 == '\0') break;
              pcVar7 = pcVar7 + 1;
              pcVar6 = pcVar6 + 1;
            } while (cVar1 == cVar2);
            if (cVar1 != cVar2) {
              pcVar6 = "float";
              pcVar7 = pcVar3;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                fn_82F64020(param_3,0x100,0xffffffff8201f3c8,
                                  (double)(float)CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26));
                return;
              }
              pcVar6 = "double";
              pcVar7 = pcVar3;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                fn_82F64020(param_3,0x100,0xffffffff8201f3d4,
                                  CONCAT44(CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26),
                                           uStack_24));
                return;
              }
              pcVar6 = "bool";
              pcVar7 = pcVar3;
              do {
                cVar1 = *pcVar7;
                cVar2 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar7 = pcVar7 + 1;
                pcVar6 = pcVar6 + 1;
              } while (cVar1 == cVar2);
              if (cVar1 == cVar2) {
                uVar5 = 0xffffffff8201f3e0;
                if (bStack_28 == 0) {
                  uVar5 = 0xffffffff8201f3e8;
                }
                uVar4 = 0xffffffff8201f3f0;
              }
              else {
                pcVar6 = "char";
                pcVar7 = pcVar3;
                do {
                  cVar1 = *pcVar7;
                  cVar2 = *pcVar6;
                  if (cVar1 == '\0') break;
                  pcVar7 = pcVar7 + 1;
                  pcVar6 = pcVar6 + 1;
                } while (cVar1 == cVar2);
                if (cVar1 == cVar2) {
                  uVar4 = 0xffffffff8201f3fc;
                  uVar5 = (ulonglong)(char)bStack_28;
                }
                else {
                  pcVar7 = "unsigned char";
                  do {
                    cVar1 = *pcVar3;
                    cVar2 = *pcVar7;
                    if (cVar1 == '\0') break;
                    pcVar3 = pcVar3 + 1;
                    pcVar7 = pcVar7 + 1;
                  } while (cVar1 == cVar2);
                  if (cVar1 != cVar2) {
                    return;
                  }
                  uVar5 = (ulonglong)bStack_28;
                }
              }
              goto LAB_82836454;
            }
            uVar4 = 0xffffffff8201f3b8;
          }
          fn_82F64020(param_3,0x100,uVar4,
                            CONCAT44(CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26),uStack_24));
          return;
        }
        uVar4 = 0xffffffff8201f38c;
      }
    }
  }
  uVar5 = (ulonglong)CONCAT22(CONCAT11(bStack_28,uStack_27),uStack_26);
LAB_82836454:
  fn_82F64020(param_3,0x100,uVar4,uVar5);
  return;
}

