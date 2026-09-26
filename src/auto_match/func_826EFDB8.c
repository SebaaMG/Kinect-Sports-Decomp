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
extern int fn_826EF340();
extern int fn_826EF410();
extern int fn_826EF508();
extern int fn_82F63CA0();


void fn_826EFDB8(int param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 8) == '\0') {
    puVar6 = (uint *)(param_1 + 0x10);
    if (((*(uint *)(param_1 + 0x10) & 0xf8000000) != 0) || (*(longlong *)(param_1 + 0x28) != 0)) {
      if ((*(byte *)(param_1 + 0x20) & 0x40) == 0) {
        if ((*(byte *)(param_1 + 0x20) & 0x80) == 0) {
          uVar2 = *(uint *)(param_1 + 0x1c);
          uVar1 = *(ulonglong *)(param_1 + 0x28) & 0xffffffff;
        }
        else {
          uVar2 = *(uint *)(param_1 + 0x1c);
          uVar3 = (uint)*(undefined8 *)(param_1 + 0x28);
          uVar8 = (int)uVar3 >> 0x1f;
          uVar1 = (longlong)(int)(uVar3 ^ uVar8) - (longlong)(int)uVar8;
        }
        fn_826EF410(puVar6,param_1 + 0x30,uVar1,1,uVar2 >> 0x1b);
      }
      else {
        uVar1 = (longlong)*(ulonglong *)(param_1 + 0x28) >> 0x3f;
        fn_826EF340(puVar6,param_1 + 0x30,(*(ulonglong *)(param_1 + 0x28) ^ uVar1) - uVar1,1,
                      *(uint *)(param_1 + 0x1c) >> 0x1b);
      }
    }
    for (uVar2 = (param_1 - *(int *)(param_1 + 0x18)) + 0x4c; uVar2 < *puVar6 >> 0x1b;
        uVar2 = uVar2 + 1) {
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0x18) + -1);
      *(undefined1 **)(param_1 + 0x18) = puVar5;
      *puVar5 = 0x30;
    }
    if (((*puVar6 & 0xf8000000) == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
      *(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 1 | 0x40;
    }
    uVar2 = *(uint *)(param_1 + 0x1c) >> 0x1b;
    if (uVar2 == 10) {
      if ((*(byte *)(param_1 + 0x14) & 0xfe) == 0x60) {
        uVar2 = (param_1 - *(int *)(param_1 + 0x18)) + 0x4c;
        while( true ) {
          if (((*(byte *)(param_1 + 0x15) & 1) != 0) ||
             (iVar7 = 0, (*(byte *)(param_1 + 0x16) & 0x40) != 0)) {
            iVar7 = 1;
          }
          if ((*puVar6 >> 0x16 & 0x1f) - iVar7 <= uVar2) break;
          uVar2 = uVar2 + 1;
          pcVar4 = (char *)(*(int *)(param_1 + 0x18) + -1);
          *(char **)(param_1 + 0x18) = pcVar4;
          *pcVar4 = *(char *)(param_1 + 0x14) >> 1;
        }
      }
      fn_826EF508(param_1,*(longlong *)(param_1 + 0x28) < 0);
    }
    else if ((((uVar2 == 8) || (uVar2 == 0x10)) && (*(longlong *)(param_1 + 0x28) != 0)) &&
            ((*(byte *)(param_1 + 0x16) & 0x10) != 0)) {
      if (uVar2 == 0x10) {
        pcVar4 = (char *)(*(int *)(param_1 + 0x18) + -1);
        *(char **)(param_1 + 0x18) = pcVar4;
        *pcVar4 = (-((*(byte *)(param_1 + 0x16) & 0x80) != 0) & 0xe0U) + 0x78;
      }
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0x18) + -1);
      *(undefined1 **)(param_1 + 0x18) = puVar5;
      *puVar5 = 0x30;
    }
    if ((((*(byte *)(param_1 + 0x16) & 0x40) != 0) && ((*(byte *)(param_1 + 0x15) & 1) == 0)) &&
       ((*(byte *)(param_1 + 0x14) = *(byte *)(param_1 + 0x14) & 1 | 0x40,
        (*(byte *)(param_1 + 0x20) & 0x80) != 0 && (-1 < *(longlong *)(param_1 + 0x28))))) {
      puVar5 = (undefined1 *)(*(int *)(param_1 + 0x18) + -1);
      *(undefined1 **)(param_1 + 0x18) = puVar5;
      *puVar5 = 0x20;
    }
    uVar8 = (param_1 - *(int *)(param_1 + 0x18)) + 0x4c;
    uVar2 = *puVar6 >> 0x16 & 0x1f;
    if ((*(byte *)(param_1 + 0x16) & 0x20) == 0) {
      if (uVar8 < uVar2) {
        do {
          pcVar4 = (char *)(*(int *)(param_1 + 0x18) + -1);
          *(char **)(param_1 + 0x18) = pcVar4;
          if ((*(uint *)(param_1 + 0x1c) & 0xf8000000) == 0x50000000) {
            *pcVar4 = ' ';
          }
          else {
            *pcVar4 = *(char *)(param_1 + 0x14) >> 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < (*puVar6 >> 0x16 & 0x1f));
      }
    }
    else if (uVar8 < uVar2) {
      iVar7 = (param_1 - uVar2) + 0x4c;
      fn_82F63CA0(iVar7,*(int *)(param_1 + 0x18),uVar8);
      *(int *)(param_1 + 0x18) = iVar7;
      if (uVar8 < (*puVar6 >> 0x16 & 0x1f)) {
        iVar7 = iVar7 + uVar8 + -1;
        do {
          if ((*(uint *)(param_1 + 0x1c) & 0xf8000000) == 0x50000000) {
            *(undefined1 *)(iVar7 + 1) = 0x20;
          }
          else {
            *(char *)(iVar7 + 1) = *(char *)(param_1 + 0x14) >> 1;
          }
          iVar7 = iVar7 + 1;
          uVar8 = uVar8 + 1;
        } while (uVar8 < (*puVar6 >> 0x16 & 0x1f));
      }
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

