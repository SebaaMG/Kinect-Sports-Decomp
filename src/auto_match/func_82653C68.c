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
extern int fn_82653BE8();
extern int fn_82A1E108();


void fn_82653C68(int param_1)

{
  char cVar1;
  bool bVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  char acStack_120 [288];
  
  uVar3 = (**(code **)(param_1 + 4))(0x5d0);
  bVar2 = false;
  fn_82653BE8(param_1,0xffffffff821cc818,0xffffffff821cc80c,uVar3);
  lVar7 = 0xb;
  puVar9 = (undefined4 *)0x831be894;
  do {
    if (((uint)puVar9[-1] & uVar3) != 0) {
      if (bVar2) {
        fn_82653BE8(param_1,0xffffffff82196824);
      }
      fn_82653BE8(param_1,*puVar9);
      bVar2 = true;
    }
    lVar7 = lVar7 + -1;
    puVar9 = puVar9 + 2;
  } while (lVar7 != 0);
  if (!bVar2) {
    fn_82653BE8(param_1,0xffffffff821cc82c);
  }
  fn_82653BE8(param_1,0xffffffff821cc840);
  (**(code **)(param_1 + 8))(0xf11,0);
  fn_82A1E108(1);
  uVar4 = (**(code **)(param_1 + 4))(0xf12);
  fn_82653BE8(param_1,0xffffffff821cc858,0xffffffff821cc844,uVar4);
  lVar7 = 0x1e;
  puVar9 = (undefined4 *)0x831be8e4;
  do {
    uVar4 = (**(code **)(param_1 + 4))(puVar9[1]);
    puVar9 = puVar9 + 2;
    fn_82653BE8(param_1,0xffffffff821cc858,*puVar9,uVar4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  puVar10 = (uint *)0x831be9e8;
  lVar7 = 5;
  do {
    fn_82653BE8(param_1,0xffffffff821cc86c);
    uVar3 = 0;
    if (*puVar10 != 0) {
      do {
        sprintf(acStack_120,"%s 0x%02x: ",(ulonglong)puVar10[1],uVar3);
        uVar8 = uVar3 + 8;
        while( true ) {
          uVar5 = (ulonglong)*puVar10;
          if ((uVar8 & 0xffffffff) < (ulonglong)*puVar10) {
            uVar5 = uVar8;
          }
          if ((uVar5 & 0xffffffff) <= (uVar3 & 0xffffffff)) break;
          (**(code **)(param_1 + 8))(puVar10[-4],(int)uVar3 << (puVar10[-1] & 0x3f) | puVar10[-2]);
          fn_82A1E108(1);
          uVar4 = (**(code **)(param_1 + 4))(puVar10[-3]);
          pcVar6 = acStack_120;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          sprintf(pcVar6 + (int)(acStack_120 + (-1 - (int)acStack_120)),"%08x ",uVar4);
          uVar3 = uVar3 + 1;
        }
        fn_82653BE8(param_1,0xffffffff821cc884,acStack_120);
        uVar3 = uVar8;
      } while ((uVar8 & 0xffffffff) < (ulonglong)*puVar10);
    }
    lVar7 = lVar7 + -1;
    puVar10 = puVar10 + 6;
  } while (lVar7 != 0);
  return;
}

