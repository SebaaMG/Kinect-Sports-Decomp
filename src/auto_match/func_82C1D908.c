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
extern unsigned int *auStack_50;
extern int fn_82C3CD68();
extern unsigned int uStack_60;


undefined8 fn_82C1D908(ulonglong param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uStack_60;
  longlong lStack_58;
  undefined1 auStack_50 [80];
  
  lVar4 = 0;
  if ((((param_2 == (byte *)0x0) || ((param_3 & 0xffffffff) == 0)) || (param_4 == (undefined8 *)0x0)
      ) || ((param_1 & 0xffffffff) == 0)) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    uStack_60 = *param_4;
    if ((param_3 & 0xffffffff) != 0) {
      puVar5 = auStack_50 + -(int)param_2;
      do {
        uVar6 = param_3;
        if (0xf < (param_3 & 0xffffffff)) {
          uVar6 = 0x10;
        }
        lStack_58 = lVar4;
        fn_82C3CD68(param_1,auStack_50,&uStack_60,1);
        uVar7 = uVar6;
        pbVar3 = param_2;
        uVar1 = uVar6 & 0xffffffff;
        while (uVar1 != 0) {
          *pbVar3 = pbVar3[(int)puVar5] ^ *pbVar3;
          pbVar3 = pbVar3 + 1;
          uVar7 = uVar7 - 1;
          uVar1 = uVar7;
        }
        param_3 = param_3 - uVar6;
        param_2 = param_2 + 0x10;
        puVar5 = puVar5 + -0x10;
        lVar4 = lVar4 + 1;
      } while (param_3 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

