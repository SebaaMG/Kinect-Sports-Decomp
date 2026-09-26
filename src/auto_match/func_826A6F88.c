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
extern int fn_8268B610();


void fn_826A6F88(int param_1,uint param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  char cVar4;
  byte *pbVar3;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte abStack_140 [255];
  byte abStack_41 [65];
  
  pbVar5 = abStack_140;
  uVar7 = 0;
  if (param_2 != 0) {
    do {
      bVar1 = *(byte *)(uVar7 + param_1);
      if (abStack_41 <= pbVar5 + 4) {
        *pbVar5 = 0;
        fn_8268B610(param_3,abStack_140,0xffffffffffffffff);
        pbVar5 = abStack_140;
      }
      if (bVar1 < 0x80) {
        if ((1 << ((uint)bVar1 + ((int)(uint)bVar1 >> 5) * -0x20 & 0x3f) &
            *(uint *)(((int)(uint)bVar1 >> 5) * 4 + param_4)) == 0) goto LAB_826a7028;
        *pbVar5 = bVar1;
        pbVar5 = pbVar5 + 1;
      }
      else {
LAB_826a7028:
        uVar2 = (int)(uint)bVar1 >> 4;
        *pbVar5 = 0x25;
        cVar4 = '0';
        if (9 < uVar2) {
          cVar4 = '7';
        }
        pbVar5[1] = (char)uVar2 + cVar4;
        pbVar3 = pbVar5 + 2;
        iVar6 = (uint)bVar1 + ((int)(uint)bVar1 >> 4) * -0x10;
        cVar4 = '0';
        if (9 < iVar6) {
          cVar4 = '7';
        }
        pbVar5 = pbVar5 + 3;
        *pbVar3 = (char)iVar6 + cVar4;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < param_2);
  }
  *pbVar5 = 0;
  fn_8268B610(param_3,abStack_140,0xffffffffffffffff);
  return;
}

