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
extern int fn_82AC8910();
extern int fn_82AC8ED0();
extern int fn_82ACA998();


void fn_82AC90A8(int param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar3;
  ulonglong uVar2;
  uint *puVar4;
  bool bVar5;
  uint *puVar6;
  uint uVar7;
  
  if ((*(int *)(param_2 + 0x58) != 0) &&
     (uVar3 = fn_82AC8910(*(int *)(param_2 + 0x58),0,*(undefined4 *)(param_1 + 0x2a0)),
     uVar3 <= *(int *)(param_1 + 0x29c) - 1U)) {
    do {
      iVar1 = *(int *)(uVar3 * 4 + *(int *)(param_1 + 0x2c4));
      if ((*(uint *)(iVar1 + 8) & 0x3f80) != 0x3980) {
        puVar6 = *(uint **)(iVar1 + 4);
        for (puVar4 = puVar6; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[2]) {
          if ((*puVar4 & 0xe000000) != 0) {
            bVar5 = true;
            if ((*puVar4 >> 0x1e & 1) != 0) goto LAB_82ac9140;
            break;
          }
        }
        bVar5 = false;
LAB_82ac9140:
        if (bVar5) {
          for (; (puVar6 != (uint *)0x0 && ((*puVar6 & 0xe000000) == 0)); puVar6 = (uint *)puVar6[2]
              ) {
          }
          uVar7 = *puVar6;
          uVar2 = fn_82ACA998(param_1,param_2);
          fn_82AC8ED0(param_3,(ulonglong)(uVar7 >> 0xd) & 0xff0 | uVar2 & 0xffffffff0000000f);
        }
      }
      uVar7 = *(int *)(param_1 + 0x29c) - 1;
      if (uVar3 == uVar7) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = fn_82AC8910(*(undefined4 *)(param_2 + 0x58),uVar3 + 1,
                              *(undefined4 *)(param_1 + 0x2a0));
      }
    } while (uVar3 <= uVar7);
  }
  return;
}

