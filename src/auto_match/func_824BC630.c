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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_828647D8();
extern unsigned int lbl_821C05A0;
extern unsigned int lbl_8328111C;
extern U64 storeWordConditionalIndexed();


undefined8 fn_824BC630(int param_1,int param_2,char *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char in_RESERVE;
  byte in_cr0;
  
  iVar3 = fn_828647D8(param_1 + 0x10);
  if (iVar3 == param_2) {
    cVar7 = *param_3;
    cVar5 = 'v';
    cVar6 = cVar7;
    if (cVar7 == 'v') {
      cVar6 = 'v';
      pcVar4 = param_3;
      do {
        pcVar4 = pcVar4 + 1;
        if (cVar6 == '\0') goto LAB_824bc6a8;
        cVar5 = pcVar4[(int)&lbl_821C05A0 - (int)param_3];
        cVar6 = *pcVar4;
      } while (cVar6 == cVar5);
    }
    in_cr0 = (cVar6 == cVar5) << 1;
    if (cVar6 == cVar5) {
LAB_824bc6a8:
      if (lbl_8328111C == 0) {
        puVar1 = *(uint **)(param_1 + 8);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar1 + 1,0,ZEXT48(puVar1));
            *puVar1 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
      else {
        puVar1 = *(uint **)(param_1 + 4);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar1 + 1,0,ZEXT48(puVar1));
            *puVar1 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else {
      cVar5 = 's';
      cVar6 = cVar7;
      if (cVar7 == 's') {
        cVar6 = 's';
        pcVar4 = param_3;
        do {
          pcVar4 = pcVar4 + 1;
          if (cVar6 == '\0') goto LAB_824bc74c;
          cVar5 = pcVar4[(int)"still" - (int)param_3];
          cVar6 = *pcVar4;
        } while (cVar6 == cVar5);
      }
      in_cr0 = (cVar6 == cVar5) << 1;
      if (cVar6 == cVar5) {
LAB_824bc74c:
        puVar1 = *(uint **)(param_1 + 8);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((ulonglong)*puVar1 + 1,0,ZEXT48(puVar1));
            *puVar1 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1));
      }
      else {
        cVar6 = 'f';
        if (cVar7 == 'f') {
          iVar3 = (int)"flash" - (int)param_3;
          cVar7 = 'f';
          do {
            param_3 = param_3 + 1;
            if (cVar7 == '\0') goto LAB_824bc7bc;
            cVar6 = param_3[iVar3];
            cVar7 = *param_3;
          } while (cVar7 == cVar6);
        }
        in_cr0 = (cVar7 == cVar6) << 1;
        if (cVar7 == cVar6) {
LAB_824bc7bc:
          puVar1 = *(uint **)(param_1 + 0xc);
          do {
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed((ulonglong)*puVar1 + 1,0,ZEXT48(puVar1));
              *puVar1 = uVar2;
              in_cr0 = 2;
            }
          } while (!(bool)(in_cr0 >> 1));
        }
      }
    }
  }
  return 0;
}

