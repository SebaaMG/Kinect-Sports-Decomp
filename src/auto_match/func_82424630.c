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
extern unsigned int *auStack_230;
extern int fn_82422F08();
extern int fn_82424930();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82F65350();
extern int fn_82F68CC0();


void fn_82424630(int param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_230 [560];
  
  if (*param_2 != 0) {
    lVar2 = fn_8251F720(param_2,0);
    uVar7 = 0;
    uVar3 = fn_8251FBA8();
    if ((int)((uVar3 & 0xffffffff) / 0x6b4) != 0) {
      lVar8 = lVar2;
      do {
        fn_82422F08(param_1,lVar8,auStack_230);
        fn_82424930(param_1 + 0xc,auStack_230);
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x6b4;
        uVar3 = fn_8251FBA8(lVar2);
      } while ((uVar7 & 0xffffffff) < (uVar3 & 0xffffffff) / 0x6b4);
    }
    fn_8251FA58(lVar2);
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0xc);
    if (uVar3 != uVar1) {
      uVar9 = 2;
      uVar7 = uVar3;
      while (uVar7 = uVar7 + 0x1f0, (uVar7 & 0xffffffff) != (ulonglong)uVar1) {
        uVar6 = 0x7fff;
        uVar4 = fn_82F65350();
        uVar4 = uVar4 & 0x7fff;
        if (0x7fff < uVar9) {
          do {
            if (uVar6 == 0xffffffff) break;
            uVar5 = fn_82F65350();
            uVar4 = (uVar4 & 0x1ffff) << 0xf | uVar5 & 0xffffffff00007fff;
            uVar6 = uVar6 << 0xf | 0x7fff;
          } while (uVar6 < uVar9);
        }
        lVar2 = (uVar4 - (longlong)(int)((uVar4 & 0xffffffff) / (ulonglong)uVar9) *
                         (longlong)(int)uVar9) * 0x1f0 + uVar3;
        fn_82F68CC0(auStack_230,uVar7,0x1f0);
        fn_82F68CC0(uVar7,lVar2,0x1f0);
        fn_82F68CC0(lVar2,auStack_230,0x1f0);
        uVar9 = uVar9 + 1;
      }
    }
  }
  return;
}

