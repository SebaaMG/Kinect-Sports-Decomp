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


void fn_828E67B0(int *param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)(param_2 + 4);
  puVar6 = puVar7;
  if (*(char *)((int)puVar7[1] + 0x1d) == '\0') {
    uVar1 = *param_3;
    puVar4 = (undefined4 *)puVar7[1];
    do {
      uVar2 = puVar4[3];
      if ((uVar2 < uVar1) || ((uVar2 <= uVar1 && ((uint)puVar4[4] < param_3[1])))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        puVar3 = (undefined4 *)puVar4[2];
      }
      else {
        if (*(char *)((int)puVar6 + 0x1d) != '\0') {
          if ((uVar1 < uVar2) || ((uVar1 <= uVar2 && (param_3[1] < (uint)puVar4[4])))) {
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
          if (bVar5) {
            puVar6 = puVar4;
          }
        }
        puVar3 = (undefined4 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  if (*(char *)((int)puVar6 + 0x1d) == '\0') {
    puVar4 = (undefined4 *)*puVar6;
  }
  else {
    puVar4 = *(undefined4 **)(*(int *)(param_2 + 4) + 4);
  }
  if (*(char *)((int)puVar4 + 0x1d) == '\0') {
    do {
      if ((*param_3 < (uint)puVar4[3]) ||
         ((*param_3 <= (uint)puVar4[3] && (param_3[1] < (uint)puVar4[4])))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) {
        puVar3 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      else {
        puVar3 = (undefined4 *)puVar4[2];
      }
      puVar4 = puVar3;
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  *param_1 = (int)puVar7;
  param_1[1] = (int)puVar6;
  return;
}

