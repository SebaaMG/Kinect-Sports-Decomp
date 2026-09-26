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
extern int fn_826360E8();
extern int fn_82636148();
extern int fn_82937A60();
extern int fn_8293C408();


void fn_8293D620(int param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int aiStack_50 [20];
  
  uVar3 = fn_8293C408(param_1,1);
  uVar4 = fn_826360E8();
  uVar9 = 0;
  uVar6 = 0;
  uVar8 = 0;
  uVar7 = 0;
  if (uVar4 != 0) {
    do {
      puVar5 = (uint *)fn_82636148(uVar3,uVar7,aiStack_50);
      if (puVar5 == (uint *)0x0) {
        fn_82937A60(param_1,0xffffffff82033bcc);
        return;
      }
      if ((aiStack_50[0] == 0) && ((*puVar5 & 0x8000) != 0)) {
        uVar2 = (ulonglong)*puVar5 & 0x3f;
        if (*(int *)(param_1 + 0x40) == 1) {
          if (uVar2 < 4) {
LAB_8293d6c4:
            uVar1 = 1 << (uint)uVar2;
            if ((uVar1 & uVar6) == 0) {
              uVar8 = uVar8 + 1;
              uVar6 = uVar1 | uVar6;
              if ((uint)uVar9 < (uint)uVar2) {
                uVar9 = uVar2;
              }
            }
          }
          else if (uVar2 == 0x3d) {
            *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) | 0x8000000;
          }
        }
        else if (uVar2 < 0x10) goto LAB_8293d6c4;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < (uVar4 & 0xffffffff));
    uVar9 = uVar9 + 1;
    if ((uVar8 & 0xffffffff) != 0) goto LAB_8293d700;
  }
  uVar9 = 0;
LAB_8293d700:
  if (*(int *)(param_1 + 0x40) == 1) {
    uVar6 = (uint)(uVar9 << 0x1c) & 0x70000000 | *(uint *)(param_1 + 0x120) & 0x8fffffff;
  }
  else {
    if ((*(uint *)(param_1 + 0x60) & 8) == 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 & 0xffffffff) != 0) {
      uVar9 = uVar9 - 1;
    }
    uVar6 = (uint)((uVar9 & 0xffffffff) << 0x14) & 0xf00000 |
            *(uint *)(param_1 + 0x120) & 0xff0fffff;
  }
  *(uint *)(param_1 + 0x120) = uVar6;
  return;
}

