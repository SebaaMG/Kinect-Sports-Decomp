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
extern int fn_827C1B68();
extern int fn_827CB600();
extern int fn_827CC2B0();
extern int fn_827CC368();
extern int fn_827CC638();
extern int fn_827CC710();
extern int fn_827CC750();


void fn_827CC758(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  longlong lVar7;
  
  iVar1 = param_1[0x6a];
  iVar2 = *(int *)(iVar1 + 0x18);
  if (param_1[0x13] != 0) {
    param_1[0x13] = 2;
  }
  if (param_2 == '\0') {
    if (param_1[0x13] == 2) {
      pcVar5 = fn_827CC368;
    }
    else {
      pcVar5 = fn_827CC2B0;
    }
    *(code **)(iVar1 + 4) = pcVar5;
    *(code **)(iVar1 + 8) = fn_827CC750;
    iVar3 = param_1[0x1c];
    if (iVar3 < 1) {
      *(undefined4 *)(*param_1 + 0x14) = 0x38;
      *(undefined4 *)(*param_1 + 0x18) = 1;
      (**(code **)*param_1)(param_1);
    }
    if (0x100 < iVar3) {
      *(undefined4 *)(*param_1 + 0x14) = 0x39;
      *(undefined4 *)(*param_1 + 0x18) = 0x100;
      (**(code **)*param_1)(param_1);
    }
    if (param_1[0x13] == 2) {
      lVar7 = ((ulonglong)(uint)param_1[0x17] + 2) * 6;
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar4 = (**(code **)(param_1[1] + 4))(param_1,1,lVar7);
        *(undefined4 *)(iVar1 + 0x20) = uVar4;
      }
      fn_827C1B68(*(undefined4 *)(iVar1 + 0x20),lVar7);
      if (*(int *)(iVar1 + 0x28) == 0) {
        fn_827CC638(param_1);
      }
      *(undefined1 *)(iVar1 + 0x24) = 0;
    }
  }
  else {
    *(code **)(iVar1 + 4) = fn_827CB600;
    *(code **)(iVar1 + 8) = fn_827CC710;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
  }
  if (*(char *)(iVar1 + 0x1c) != '\0') {
    puVar6 = (undefined4 *)(iVar2 + -4);
    lVar7 = 0x20;
    do {
      puVar6 = puVar6 + 1;
      fn_827C1B68(*puVar6,0x1000);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    *(undefined1 *)(iVar1 + 0x1c) = 0;
  }
  return;
}

