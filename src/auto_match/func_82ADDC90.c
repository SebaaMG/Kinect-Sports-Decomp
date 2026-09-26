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


undefined8 fn_82ADDC90(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulonglong *puVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x2a0) * param_2 * 8 + *(int *)(param_1 + 0x2ac);
  iVar2 = *(int *)(param_1 + 0x2a0) * param_3 * 8 + *(int *)(param_1 + 0x2ac);
  if (((1L << ((ulonglong)param_3 & 0x3f) & *(ulonglong *)((param_3 >> 3 & 0x1ffffff8) + iVar1)) ==
       0) && ((1L << ((ulonglong)param_2 & 0x3f) &
              *(ulonglong *)((param_2 >> 3 & 0x1ffffff8) + iVar2)) == 0)) {
    iVar5 = 0;
    do {
      if ((*(ulonglong *)((param_3 * 5 + iVar5 + 1) * 8 + *(int *)(param_1 + 0x2a4)) |
          *(ulonglong *)((param_2 * 5 + iVar5 + 1) * 8 + *(int *)(param_1 + 0x2a4))) !=
          0xffffffffffffffff) {
        bVar3 = true;
        goto LAB_82addd60;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    bVar3 = false;
LAB_82addd60:
    if (bVar3) {
      puVar6 = *(ulonglong **)(param_2 * 4 + *(int *)(param_1 + 0x2a8));
      puVar7 = *(ulonglong **)(param_3 * 4 + *(int *)(param_1 + 0x2a8));
      if (puVar6 != (ulonglong *)0x0) {
        puVar4 = puVar6 + *(int *)(param_1 + 0x2a0);
        if (puVar6 < puVar4) {
          iVar2 = iVar2 - (int)puVar6;
          do {
            if ((*(ulonglong *)(iVar2 + (int)puVar6) & *puVar6) != 0) {
              bVar3 = true;
              goto LAB_82adddc0;
            }
            puVar6 = puVar6 + 1;
          } while (puVar6 < puVar4);
        }
        bVar3 = false;
LAB_82adddc0:
        if (bVar3) {
          return 1;
        }
      }
      if (puVar7 != (ulonglong *)0x0) {
        puVar6 = puVar7 + *(int *)(param_1 + 0x2a0);
        if (puVar7 < puVar6) {
          iVar1 = iVar1 - (int)puVar7;
          do {
            if ((*(ulonglong *)(iVar1 + (int)puVar7) & *puVar7) != 0) {
              bVar3 = true;
              goto LAB_82adde10;
            }
            puVar7 = puVar7 + 1;
          } while (puVar7 < puVar6);
        }
        bVar3 = false;
LAB_82adde10:
        if (bVar3) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

