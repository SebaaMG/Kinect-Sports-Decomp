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
extern int fn_82543BE0();
extern int fn_82543C70();
extern int fn_8263CBB0();
extern unsigned int lbl_8326F48C;


void fn_8259E8C0(int param_1,undefined4 *param_2,longlong param_3,int *param_4,int param_5,
                  uint *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ushort *puVar7;
  
  uVar1 = *param_2;
  iVar2 = *param_4;
  puVar7 = (ushort *)(param_4 + 3);
  lVar6 = 0x14;
  do {
    iVar3 = *(int *)(puVar7 + -4);
    if (iVar3 == 1) {
      uVar5 = 0;
      iVar3 = *(int *)(puVar7 + -2);
      if (iVar3 == 7) {
        uVar5 = (ulonglong)param_6[1];
      }
      else if (iVar3 == 8) {
        uVar5 = (ulonglong)param_6[2];
      }
      else if (iVar3 == 9) {
        uVar5 = (ulonglong)param_6[3];
      }
      else if (iVar3 == 10) {
        uVar5 = (ulonglong)param_6[4];
      }
      else if (iVar3 == 0xc) {
        uVar5 = (ulonglong)*param_6;
      }
      uVar4 = (ulonglong)puVar7[1];
      if (uVar4 == 0xffff) {
        uVar4 = (ulonglong)*(byte *)(iVar3 * 5 + iVar2 + -0x7cd90818);
      }
                    /* WARNING: Subroutine does not return */
      fn_8263CBB0(uVar1,uVar4,
                        ((param_3 * 0x12 + (ulonglong)*puVar7 & 0xfffffff) * 0x10 +
                        (-(ulonglong)(uVar5 < *(uint *)((uint)*puVar7 * 0x2c + param_5 + 0x20)) &
                        uVar5)) * 0x34 + (ulonglong)*(uint *)(param_1 + 4) + 0x2100,
                        0x8000000000000000 >> (uVar4 + 0x20 & 0x7f));
    }
    if (iVar3 == 2) {
      fn_82543BE0(param_2,*(undefined1 *)(*(int *)(puVar7 + -2) * 5 + iVar2 + -0x7cd908a8),
                        puVar7,1);
    }
    else if (iVar3 == 3) {
      fn_82543C70(param_2,(&lbl_8326F48C)[*(int *)(puVar7 + -2)],puVar7,1);
    }
    lVar6 = lVar6 + -1;
    puVar7 = puVar7 + 0xc;
  } while (lVar6 != 0);
  return;
}

