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
extern int fn_827A53E8();
extern int fn_827A5B60();
extern int fn_827A6A50();


void fn_827A7218(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar7 = (ulonglong)*param_1;
  if (uVar7 != 0) {
    uVar1 = *(uint *)(*param_1 + 4);
    uVar3 = *(uint *)(param_2 + 8) & uVar1;
    uVar8 = (ulonglong)uVar3;
    lVar10 = uVar8 * 0x14 + uVar7;
    if ((*(int *)((int)lVar10 + 8) != -2) && ((*(uint *)((int)lVar10 + 0x14) & uVar1) == uVar8)) {
      uVar5 = uVar8;
      uVar11 = 0xffffffffffffffff;
      while( true ) {
        uVar9 = uVar5;
        lVar13 = lVar10 + 8;
        puVar4 = (uint *)lVar13;
        if ((puVar4[3] & uVar1) == uVar8) {
          lVar10 = lVar10 + 0xc;
          cVar6 = fn_827A53E8(lVar10);
          if (cVar6 != '\0') {
            if (uVar3 == (uint)uVar9) {
              if (*puVar4 != 0xffffffff) {
                lVar12 = (ulonglong)*puVar4 * 0x14 + uVar7 + 8;
                fn_827A5B60(lVar10,0);
                *puVar4 = 0xfffffffe;
                fn_827A6A50(lVar13,lVar12);
                lVar13 = lVar12;
              }
            }
            else {
              *(uint *)((int)uVar11 * 0x14 + (int)uVar7 + 8) = *puVar4;
            }
            fn_827A5B60(lVar13 + 4,0);
            *(undefined4 *)lVar13 = 0xfffffffe;
            *(int *)*param_1 = *(int *)*param_1 + -1;
            return;
          }
        }
        uVar2 = *puVar4;
        if (uVar2 == 0xffffffff) break;
        lVar10 = (ulonglong)uVar2 * 0x14 + uVar7;
        uVar5 = (ulonglong)uVar2;
        uVar11 = uVar9;
      }
      return;
    }
  }
  return;
}

