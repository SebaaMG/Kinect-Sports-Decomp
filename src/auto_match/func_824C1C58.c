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


void fn_824C1C58(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 in_stack_00000054;
  undefined4 in_stack_0000005c;
  undefined4 *in_stack_00000064;
  undefined4 *in_stack_0000006c;
  undefined4 *in_stack_00000074;
  
  if (0xf < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  pcVar4 = param_1 + 0x200;
  iVar3 = (int)param_4 - (int)pcVar4;
  do {
    if (param_1 + 0x300 <= pcVar4) break;
    cVar1 = pcVar4[iVar3];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_1 + 0x300) {
    pcVar4[-1] = '\0';
  }
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  pcVar5 = param_1 + 0x100;
  pcVar4 = param_1;
  do {
    if (pcVar5 <= pcVar4) break;
    cVar1 = pcVar4[(int)param_2 - (int)param_1];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == pcVar5) {
    pcVar4[-1] = '\0';
  }
  if (0xf < (uint)param_3[5]) {
    param_3 = (undefined4 *)*param_3;
  }
  iVar3 = (int)param_3 - (int)pcVar5;
  do {
    if (param_1 + 0x200 <= pcVar5) break;
    cVar1 = pcVar5[iVar3];
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == param_1 + 0x200) {
    pcVar5[-1] = '\0';
  }
  if (0xf < (uint)param_5[5]) {
    param_5 = (undefined4 *)*param_5;
  }
  pcVar4 = param_1 + 0x300;
  iVar3 = (int)param_5 - (int)pcVar4;
  do {
    if (param_1 + 0x400 <= pcVar4) break;
    cVar1 = pcVar4[iVar3];
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 == param_1 + 0x400) {
    pcVar4[-1] = '\0';
  }
  if (in_stack_00000074 != in_stack_00000074 + 3) {
    puVar6 = in_stack_00000074;
    do {
      *(undefined4 *)(param_1 + (0x400 - (int)in_stack_00000074) + (int)puVar6) = *puVar6;
      puVar6 = puVar6 + 1;
    } while (puVar6 != in_stack_00000074 + 3);
  }
  uVar2 = *param_6;
  *(undefined4 *)(param_1 + 0x410) = param_7;
  *(undefined4 *)(param_1 + 0x414) = param_8;
  *(undefined4 *)(param_1 + 0x418) = in_stack_00000054;
  *(undefined4 *)(param_1 + 0x41c) = in_stack_0000005c;
  *(undefined4 *)(param_1 + 0x40c) = uVar2;
  *(undefined4 *)(param_1 + 0x420) = *in_stack_00000064;
  *(undefined4 *)(param_1 + 0x424) = *in_stack_0000006c;
  return;
}

