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
extern int fn_82FA5190();
extern unsigned int lbl_832645A4;
extern U64 storeWordConditionalIndexed();


uint * fn_82FF9E88(uint *param_1,uint *param_2,int param_3)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  byte in_xer_so;
  char in_RESERVE;
  byte bVar6;
  
  param_1[5] = param_1[5] + 1;
  if (*param_1 != 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    return param_1;
  }
  puVar2 = (uint *)param_1[2];
  bVar1 = (int)(param_1[3] - (int)puVar2) / 0xc == 0;
  bVar6 = bVar1 << 1 | in_xer_so;
  if (!bVar1) {
    uVar3 = *puVar2;
    lVar4 = (ulonglong)uVar3 + 0x40;
    *param_2 = puVar2[1];
    puVar2 = (uint *)puVar2[2];
    param_2[1] = (uint)puVar2;
    *(uint *)(param_3 + 0x18) = uVar3;
    do {
      puVar5 = (uint *)lVar4;
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((ulonglong)*puVar5 + 1,0,lVar4);
        *puVar5 = uVar3;
        bVar6 = in_xer_so | 2;
      }
    } while (!(bool)(bVar6 >> 1 & 1));
    return puVar2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = param_1[5];
  param_1[5] = (uint)((ulonglong)uVar3 - 1);
  if (((ulonglong)uVar3 - 1 == 0) && (*param_1 != 0)) {
    fn_82FA5190(lbl_832645A4);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return (uint *)param_1[5];
}

