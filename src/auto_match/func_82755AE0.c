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
extern int fn_8267BE38();
extern int fn_8268B330();
extern int fn_827AECE8();
extern U64 storeWordConditionalIndexed();


undefined8 fn_82755AE0(int *param_1,ulonglong param_2,ulonglong param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  char in_RESERVE;
  byte in_cr0;
  uint auStack_40 [16];
  
  fn_8268B330(auStack_40);
  uVar7 = 0;
  uVar5 = 0;
  if (param_1[1] != 0) {
    iVar6 = 0;
    do {
      iVar1 = *(int *)(*(int *)(iVar6 + *param_1) + 0x154);
      if (iVar1 != 0) {
        if ((param_2 & 0xffffffff) < (uVar7 & 0xffffffff)) {
LAB_82755b50:
          if ((uVar7 & 0xffffffff) < (param_3 & 0xffffffff)) {
LAB_82755b58:
            cVar2 = fn_827AECE8(iVar1,param_2 - uVar7,param_3 - uVar7);
            in_cr0 = (cVar2 == '\0') << 1;
            if (cVar2 != '\0') {
              lVar3 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
              do {
                puVar4 = (uint *)lVar3;
                uVar7 = (ulonglong)*puVar4;
                if (in_RESERVE != '\0') {
                  uVar5 = storeWordConditionalIndexed(uVar7 - 1,0,lVar3);
                  *puVar4 = uVar5;
                  in_cr0 = 2;
                }
              } while (!(bool)(in_cr0 >> 1));
              if (uVar7 == 1) {
                fn_8267BE38();
              }
              return 1;
            }
          }
        }
        else {
          if ((param_2 & 0xffffffff) < ((uint)((int *)(iVar6 + *param_1))[1] + uVar7 & 0xffffffff))
          goto LAB_82755b58;
          if ((param_2 & 0xffffffff) <= (uVar7 & 0xffffffff)) goto LAB_82755b50;
        }
        uVar7 = *(uint *)(iVar6 + *param_1 + 4) + uVar7;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 8;
    } while (uVar5 < (uint)param_1[1]);
  }
  lVar3 = ((ulonglong)auStack_40[0] & 0xfffffffc) + 4;
  do {
    puVar4 = (uint *)lVar3;
    uVar7 = (ulonglong)*puVar4;
    if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed(uVar7 - 1,0,lVar3);
      *puVar4 = uVar5;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar7 == 1) {
    fn_8267BE38();
  }
  return 0;
}

