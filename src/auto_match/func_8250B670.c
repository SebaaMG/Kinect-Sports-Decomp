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
extern unsigned int uStack_24;


void fn_8250B670(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 uStack_24;
  float afStack_20 [8];
  int iVar3;
  
  iVar1 = param_1;
  if (param_1 != param_2) {
    while (iVar3 = iVar1 + 0x14, iVar3 != param_2) {
      puVar4 = &uStack_24;
      puVar5 = (undefined4 *)(iVar1 + 0x10);
      lVar6 = 5;
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar1 = iVar3;
      if (*(float *)(param_1 + 8) <= afStack_20[2]) {
        while( true ) {
          iVar2 = iVar3 + -0x14;
          puVar5 = (undefined4 *)(iVar3 + -4);
          lVar6 = 5;
          if (*(float *)(iVar3 + -0xc) <= afStack_20[2]) break;
          puVar4 = (undefined4 *)(iVar3 + -0x18);
          do {
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
            *puVar5 = *puVar4;
            lVar6 = lVar6 + -1;
            iVar3 = iVar2;
          } while (lVar6 != 0);
        }
        puVar4 = &uStack_24;
        do {
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
          *puVar5 = *puVar4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      else {
        while (param_1 != iVar3) {
          iVar2 = iVar3 + -0x14;
          puVar4 = (undefined4 *)(iVar3 + -4);
          puVar5 = (undefined4 *)(iVar3 + -0x18);
          lVar6 = 5;
          do {
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 1;
            *puVar4 = *puVar5;
            lVar6 = lVar6 + -1;
            iVar3 = iVar2;
          } while (lVar6 != 0);
        }
        puVar5 = &uStack_24;
        puVar4 = (undefined4 *)(param_1 + -4);
        lVar6 = 5;
        do {
          puVar5 = puVar5 + 1;
          puVar4 = puVar4 + 1;
          *puVar4 = *puVar5;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    return;
  }
  return;
}

