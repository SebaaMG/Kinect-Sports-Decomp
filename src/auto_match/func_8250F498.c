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
extern int fn_8250F2B0();


void fn_8250F498(int param_1,int param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_r0;
  char cVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)(in_r0 + param_2 & 0xfffffff0);
    uVar7 = puVar2[1];
    uVar8 = puVar2[2];
    uVar9 = puVar2[3];
    puVar3 = (undefined4 *)(in_r0 + param_1 & 0xfffffff0);
    *puVar3 = *puVar2;
    puVar3[1] = uVar7;
    puVar3[2] = uVar8;
    puVar3[3] = uVar9;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    cVar4 = fn_8250F2B0((undefined4 *)(param_1 + 0x10),
                              *(int *)(param_2 + 0x14) - *(int *)(param_2 + 0x10) >> 5);
    if (cVar4 != '\0') {
      puVar1 = *(undefined8 **)(param_2 + 0x14);
      puVar6 = *(undefined8 **)(param_1 + 0x10);
      for (puVar5 = *(undefined8 **)(param_2 + 0x10); puVar5 != puVar1; puVar5 = puVar5 + 4) {
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = *puVar5;
          puVar6[1] = puVar5[1];
          puVar6[2] = puVar5[2];
          puVar6[3] = puVar5[3];
        }
        puVar6 = puVar6 + 4;
      }
      *(undefined8 **)(param_1 + 0x14) = puVar6;
    }
  }
  return;
}

