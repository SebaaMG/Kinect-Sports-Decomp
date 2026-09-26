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
extern unsigned int uStack_50;


void fn_82CA60E0(int param_1,byte *param_2,int param_3,uint *param_4,int param_5,int param_6,
                  int param_7)

{
  undefined2 uVar1;
  undefined2 uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  undefined2 *puVar8;
  undefined2 uStack_50;
  byte bStack_4e;
  byte bStack_4d;
  byte bStack_4c;
  byte bStack_4b;
  
  bStack_4e = 0;
  if (param_5 == 0) {
    uStack_50 = *(undefined2 *)(param_3 + -2);
  }
  else {
    uStack_50 = 0;
  }
  if (param_7 == 0) {
    puVar8 = (undefined2 *)(param_3 + *(int *)(param_1 + 0x158) * -2);
    uVar1 = *puVar8;
    if (param_6 == 0) {
      uVar2 = puVar8[1];
      bStack_4d = (byte)uVar2;
      bStack_4e = (byte)((ushort)uVar2 >> 8);
    }
    else {
      bStack_4d = 0;
    }
    bStack_4c = (byte)((ushort)uVar1 >> 8);
    bStack_4b = (byte)uVar1;
    bVar4 = (byte)((uint)((int)(char)bStack_4c - (int)(char)(((U64)(uStack_50) >> 0) & 0xFF)) >> 0x18);
    bVar3 = (byte)((uint)((int)(char)bStack_4c - (int)(char)bStack_4e) >> 0x18) ^ bVar4;
    bVar4 = (byte)((uint)((int)(char)bStack_4e - (int)(char)(((U64)(uStack_50) >> 0) & 0xFF)) >> 0x18) ^ bVar4;
    bVar6 = (byte)((uint)((int)(char)bStack_4b - (int)(char)(byte)uStack_50) >> 0x18);
    bVar5 = (byte)((uint)((int)(char)bStack_4b - (int)(char)bStack_4d) >> 0x18) ^ bVar6;
    bVar6 = (byte)((uint)((int)(char)bStack_4d - (int)(char)(byte)uStack_50) >> 0x18) ^ bVar6;
    *param_2 = bStack_4e & ~((char)(bVar3 | bVar4) >> 7) | (char)bVar4 >> 7 & (((U64)(uStack_50) >> 0) & 0xFF) |
               (char)bVar3 >> 7 & bStack_4c;
    param_2[1] = bStack_4d & ~((char)(bVar5 | bVar6) >> 7) | (char)bVar5 >> 7 & bStack_4b |
                 (char)bVar6 >> 7 & (byte)uStack_50;
    uVar7 = *param_4 >> 0x12 & 3;
    if (uVar7 != 2) {
      if (uVar7 != 0) {
        uStack_50 = uVar1;
      }
      *(undefined2 *)param_2 = uStack_50;
    }
  }
  else {
    *(undefined2 *)param_2 = uStack_50;
  }
  return;
}

