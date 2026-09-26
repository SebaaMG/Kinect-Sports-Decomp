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
extern unsigned int *auStack_10;
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CC160;


void fn_825B9EF8(uint *param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong lVar7;
  uint auStack_10 [4];
  
  fVar3 = lbl_821CC160;
  uVar2 = lbl_8218E8E8;
  if (param_3 != 0) {
    uVar4 = 1;
    lVar7 = 4;
    do {
      puVar6 = param_1 + 1;
      if (((uVar4 & param_2) != 0) &&
         (uVar1 = *puVar6, *puVar6 = (uint)((ulonglong)uVar1 - 1), (ulonglong)uVar1 - 1 == 0)) {
        param_1[5] = uVar2;
      }
      uVar4 = (uVar4 & 0x7fffffff) << 1;
      lVar7 = lVar7 + -1;
      param_1 = puVar6;
    } while (lVar7 != 0);
    return;
  }
  uVar4 = 1;
  puVar6 = auStack_10;
  lVar7 = 4;
  do {
    puVar5 = param_1 + 1;
    *puVar6 = 0;
    if (((uVar4 & param_2) != 0) && (uVar2 = *puVar5, *puVar5 = uVar2 + 1, uVar2 + 1 == 1)) {
      *puVar6 = (uint)((float)param_1[5] == fVar3);
    }
    puVar6 = puVar6 + 1;
    uVar4 = (uVar4 & 0x7fffffff) << 1;
    lVar7 = lVar7 + -1;
    param_1 = puVar5;
  } while (lVar7 != 0);
  return;
}

