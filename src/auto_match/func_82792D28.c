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
extern int fn_826BCD88();
extern int fn_82790148();
extern int fn_827901D8();
extern int fn_82790A58();
extern int fn_82791560();
extern int fn_827917E8();


longlong fn_82792D28(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  short *psVar6;
  undefined4 *puVar7;
  
  if (*(int *)(param_1 + 4) != 3) goto LAB_82792f54;
  puVar7 = (undefined4 *)(param_1 + 8);
  bVar3 = false;
  *param_2 = *(undefined4 *)(param_1 + 8);
  *param_3 = 0;
  cVar1 = *(char *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = 1;
  if ((cVar1 == '\0') && (*(short *)*puVar7 == 0x26)) {
    fn_82790A58(puVar7);
  }
  psVar6 = (short *)*puVar7;
  if (psVar6 < *(short **)(param_1 + 0x10)) {
    do {
      if (*(uint *)(param_1 + 0x14) == 0x3c) {
        if ((*(char *)(param_1 + 0x18) == '\0') || (bVar2 = true, *psVar6 != 0x26)) {
          bVar2 = false;
        }
        if (!bVar2) break;
      }
      iVar4 = fn_826BCD88(0xffffffff820094c8,*(uint *)(param_1 + 0x14) & 0xffff);
      if ((iVar4 == 0) || (*(char *)(param_1 + 0x28) == '\0')) {
        if ((*(char *)(param_1 + 0x18) == '\0') || (bVar2 = true, *psVar6 != 0x26)) {
          bVar2 = false;
        }
        if (bVar2) {
          if (!bVar3) {
            *(undefined4 *)(param_1 + 0x24) = 0;
            fn_82790148(param_1,*param_2,*param_3);
            bVar3 = true;
          }
          fn_827901D8(param_1,*(undefined4 *)(param_1 + 0x14));
        }
        else {
          iVar4 = *(int *)(param_1 + 0xc) - (int)psVar6 >> 1;
          if (bVar3) {
            fn_82790148(param_1,*puVar7,iVar4);
          }
          else {
            *param_3 = iVar4 + *param_3;
          }
        }
        fn_82791560(puVar7);
      }
      else {
        if (!bVar3) {
          *(undefined4 *)(param_1 + 0x24) = 0;
          fn_82790148(param_1,*param_2,*param_3);
          bVar3 = true;
        }
        fn_827901D8(param_1,0x20);
        fn_827917E8(param_1);
      }
      psVar6 = (short *)*puVar7;
    } while (psVar6 < *(short **)(param_1 + 0x10));
  }
  if (bVar3) {
    *param_2 = *(undefined4 *)(param_1 + 0x1c);
    *param_3 = *(int *)(param_1 + 0x24);
  }
  if ((short *)*puVar7 < *(short **)(param_1 + 0x10)) {
    if (*(int *)(param_1 + 0x14) == 0x3c) {
      if ((*(char *)(param_1 + 0x18) == '\0') || (bVar3 = true, *(short *)*puVar7 != 0x26)) {
        bVar3 = false;
      }
      if (!bVar3) goto LAB_82792f44;
    }
    *(undefined4 *)(param_1 + 4) = 1;
  }
  else {
LAB_82792f44:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x8000;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
LAB_82792f54:
  lVar5 = (ulonglong)*(uint *)(param_1 + 4) - 1;
  return lVar5 - (((ulonglong)*(uint *)(param_1 + 4) - 2) + (ulonglong)(lVar5 == 0));
}

