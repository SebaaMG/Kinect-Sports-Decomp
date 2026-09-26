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
extern int fn_82ADD198();


undefined8 fn_82ADDEB8(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  
  if ((*(uint *)(param_2 + 8) & 0x1e) != 0x1e) {
    for (puVar2 = *(uint **)(param_2 + 4); puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[2]) {
      uVar5 = puVar2[4];
      if (((uVar5 != 0) && ((*(uint *)(uVar5 + 8) & 0x3f80) == 0x3700)) &&
         ((*puVar2 & 0xe000000) != 0)) goto LAB_82addf24;
    }
    uVar5 = 0;
LAB_82addf24:
    if (uVar5 == 0) {
      puVar7 = *(ulonglong **)(*(int *)(param_1 + 0x2a8) + param_3 * 4);
      iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + 0x50);
      if (puVar7 == (ulonglong *)0x0) {
        bVar1 = (1L << (param_3 & 0x3f) & *(ulonglong *)((param_3 >> 3 & 0x1ffffff8) + iVar3)) == 0;
      }
      else {
        puVar6 = puVar7 + *(int *)(param_1 + 0x2a0);
        if (puVar7 < puVar6) {
          iVar3 = iVar3 - (int)puVar7;
          do {
            if ((*(ulonglong *)(iVar3 + (int)puVar7) & *puVar7) != 0) {
              bVar1 = true;
              goto LAB_82addf84;
            }
            puVar7 = puVar7 + 1;
          } while (puVar7 < puVar6);
        }
        bVar1 = false;
LAB_82addf84:
        bVar1 = !bVar1;
      }
      if (bVar1) {
        uVar5 = *(uint *)(*(int *)(param_2 + 0x1c) + 0x14);
        while( true ) {
          if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
            return 1;
          }
          if (((*(uint *)(uVar5 + 8) >> 0x17 & 1) != 0) &&
             (uVar4 = fn_82ADD198(param_1,*(undefined2 *)(uVar5 + 0x12)), param_3 == uVar4))
          break;
          uVar5 = *(uint *)((uVar5 & 0xfffffffe) + 0x28);
        }
      }
    }
  }
  return 0;
}

