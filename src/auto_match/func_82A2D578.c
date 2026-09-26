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


bool fn_82A2D578(ushort *param_1,ushort *param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  uint uVar6;
  ushort *puVar7;
  ushort *puVar8;
  
  if (param_3 != 0) {
    puVar4 = (ushort *)((int)param_2 + param_3);
    puVar5 = (ushort *)((uint)*param_1 + (int)*(ushort **)(param_1 + 2));
    puVar8 = *(ushort **)(param_1 + 2);
LAB_82a2d64c:
    do {
      if (puVar5 <= puVar8) {
        return puVar4 == param_2;
      }
      uVar6 = (uint)*puVar8;
      puVar7 = puVar8 + 1;
      if (uVar6 == 0x2a) {
        if (puVar7 == puVar5) {
          return true;
        }
        puVar8 = puVar8 + 2;
        if (param_4 == 0) {
          do {
            if (param_2 == puVar4) break;
            bVar1 = *(byte *)param_2;
            param_2 = (ushort *)((int)param_2 + 1);
          } while (bVar1 != 0x2e);
        }
        else {
          do {
            if (param_2 == puVar4) break;
            uVar2 = *param_2;
            param_2 = param_2 + 1;
          } while (uVar2 != 0x2e);
        }
        goto LAB_82a2d64c;
      }
      if (param_2 == puVar4) {
        return false;
      }
      if (param_4 == 0) {
        uVar3 = (uint)*(byte *)param_2;
        param_2 = (ushort *)((int)param_2 + 1);
      }
      else {
        uVar3 = (uint)*param_2;
        param_2 = param_2 + 1;
      }
      puVar8 = puVar7;
    } while (((uVar6 == 0x3f) || (uVar3 == uVar6)) ||
            (uVar3 = RtlUpcaseUnicodeChar(), uVar3 == uVar6));
  }
  return false;
}

