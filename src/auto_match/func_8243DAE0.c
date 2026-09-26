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


void fn_8243DAE0(int *param_1,int param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  puVar9 = *(undefined4 **)(param_2 + 4);
  puVar8 = puVar9;
  if (*(char *)((int)puVar9[1] + 0x15) == '\0') {
    puVar4 = (undefined4 *)puVar9[1];
    do {
      pbVar5 = (byte *)puVar4[3];
      pbVar7 = (byte *)*param_3;
      pbVar6 = pbVar5;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar7;
        if (bVar1 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar7 = pbVar7 + 1;
      } while ((uint)bVar1 == (uint)bVar2);
      if ((int)((uint)bVar1 - (uint)bVar2) < 0) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        pbVar7 = (byte *)*param_3;
        if (*(char *)((int)puVar8 + 0x15) != '\0') {
          do {
            bVar1 = *pbVar7;
            bVar2 = *pbVar5;
            if (bVar1 == 0) break;
            pbVar5 = pbVar5 + 1;
            pbVar7 = pbVar7 + 1;
          } while ((uint)bVar1 == (uint)bVar2);
          if ((int)((uint)bVar1 - (uint)bVar2) < 0) {
            puVar8 = puVar4;
          }
        }
        puVar3 = (undefined4 *)*puVar4;
        puVar9 = puVar4;
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar8 + 0x15) == '\0') {
    puVar4 = (undefined4 *)*puVar8;
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  }
  if (*(char *)((int)puVar4 + 0x15) == '\0') {
    do {
      pbVar5 = (byte *)puVar4[3];
      pbVar7 = (byte *)*param_3;
      do {
        bVar1 = *pbVar7;
        bVar2 = *pbVar5;
        if (bVar1 == 0) break;
        pbVar7 = pbVar7 + 1;
        pbVar5 = pbVar5 + 1;
      } while ((uint)bVar1 == (uint)bVar2);
      if ((int)((uint)bVar1 - (uint)bVar2) < 0) {
        puVar3 = (undefined4 *)*puVar4;
        puVar8 = puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  *param_1 = (int)puVar9;
  param_1[1] = (int)puVar8;
  return;
}

