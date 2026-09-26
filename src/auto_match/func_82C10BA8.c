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
extern int fn_82C10968();


undefined8 fn_82C10BA8(int param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
  cVar1 = *(char *)(param_1 + 0x5f4);
  puVar2 = *(undefined4 **)(param_1 + 0x5f8);
  bVar6 = false;
  uVar8 = 0x50000e;
  if ((cVar1 == '\0') || (puVar2 == (undefined4 *)0x0)) {
    uVar8 = 0xffffffff805000bf;
  }
  else {
    bVar5 = false;
    *param_3 = 0;
    iVar9 = 1;
    puVar4 = puVar2;
    if ('\x01' < cVar1) {
      do {
        if (bVar5) {
          if (!bVar5) {
            return 0xffffffff805000b3;
          }
          if (bVar6) {
            *param_3 = puVar2[iVar9];
            return 0x50000e;
          }
          bVar5 = false;
        }
        else {
          pcVar3 = (char *)puVar4[1];
          if (*pcVar3 != '-') {
            return 0xffffffff805000be;
          }
          iVar7 = fn_82C10968(pcVar3 + 1,param_2);
          if (iVar7 == 0) {
            bVar6 = true;
          }
          bVar5 = true;
        }
        iVar9 = iVar9 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar9 < cVar1);
    }
  }
  return uVar8;
}

