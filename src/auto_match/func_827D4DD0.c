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
extern unsigned int *auStack_120;
extern unsigned int *auStack_a0;
extern int fn_827D4D80();


ulonglong fn_827D4DD0(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  uint auStack_120 [32];
  uint auStack_a0 [34];
  
  if ((int)param_3 != 0) {
    uVar6 = 1;
    puVar5 = auStack_120;
    auStack_120[0] = 0xedb88320;
    lVar7 = 0x1f;
    do {
      puVar5 = puVar5 + 1;
      *puVar5 = uVar6;
      uVar6 = uVar6 << 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    fn_827D4D80(auStack_a0,auStack_120);
    fn_827D4D80(auStack_120,auStack_a0);
    do {
      fn_827D4D80(auStack_a0,auStack_120);
      if ((param_3 & 1) != 0) {
        puVar5 = auStack_a0;
        uVar2 = 0;
        uVar4 = param_1;
        uVar1 = param_1 & 0xffffffff;
        while (param_1 = uVar2, uVar1 != 0) {
          if ((uVar4 & 1) != 0) {
            param_1 = *puVar5 ^ param_1;
          }
          puVar5 = puVar5 + 1;
          uVar4 = (uVar4 & 0xffffffff) >> 1;
          uVar2 = param_1;
          uVar1 = uVar4;
        }
      }
      uVar4 = (ulonglong)((int)param_3 >> 1);
      if (uVar4 == 0) break;
      fn_827D4D80(auStack_120,auStack_a0);
      if ((uVar4 & 1) != 0) {
        puVar5 = auStack_120;
        uVar3 = 0;
        uVar1 = param_1;
        uVar2 = param_1 & 0xffffffff;
        while (param_1 = uVar3, uVar2 != 0) {
          if ((uVar1 & 1) != 0) {
            param_1 = *puVar5 ^ param_1;
          }
          puVar5 = puVar5 + 1;
          uVar1 = (uVar1 & 0xffffffff) >> 1;
          uVar3 = param_1;
          uVar2 = uVar1;
        }
      }
      param_3 = (ulonglong)((int)uVar4 >> 1);
    } while (param_3 != 0);
    param_1 = param_1 ^ param_2;
  }
  return param_1;
}

