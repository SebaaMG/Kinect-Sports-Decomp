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
extern int fn_829C91E8();
extern int fn_829C95E8();
extern int fn_829C9680();
extern int fn_829CB7D8();
extern int fn_829CB948();
extern int iRam83217338;
extern unsigned int lbl_83217324;
extern unsigned int lbl_83217334;
extern unsigned int lbl_832178B4;
extern unsigned int stack0xffffffe8;
extern unsigned int uRam83217340;
extern unsigned int uStack_44;


void fn_829CDB48(void)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar5;
  undefined8 uVar4;
  byte *pbVar6;
  undefined4 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 uStack_44;
  byte abStack_40 [40];
  
  if ((&lbl_83217324)[uRam83217340] == 0) {
    uVar3 = fn_829C95E8();
    if ((uVar3 & 0xffffffff) != 0) {
      iVar5 = fn_829CB948(uVar3,abStack_40);
      if (iVar5 != 0) {
        pbVar8 = abStack_40;
        pbVar6 = (byte *)&lbl_832178B4;
        do {
          bVar1 = *pbVar8;
          bVar2 = *pbVar6;
          if ((ulonglong)bVar1 - (ulonglong)bVar2 != 0) break;
          pbVar8 = pbVar8 + 1;
          pbVar6 = pbVar6 + 1;
        } while (pbVar8 != &stack0xffffffe8);
        if ((int)((ulonglong)bVar1 - (ulonglong)bVar2) != 0) {
          puVar9 = &uStack_44;
          puVar7 = (undefined4 *)0x832178b0;
          lVar10 = 10;
          do {
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            *puVar7 = *puVar9;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
          fn_829C91E8();
          fn_829CB7D8(0);
        }
        uVar4 = KfAcquireSpinLock(0xffffffff8321732c);
        if ((iRam83217338 != 0) && (lbl_83217334 == 0)) {
          (&lbl_83217324)[uRam83217340] = (int)uVar3;
          uRam83217340 = uRam83217340 - 1 & 1;
          sync(0);
          uVar3 = 0;
        }
        KfReleaseSpinLock(0xffffffff8321732c,uVar4);
      }
      if ((uVar3 & 0xffffffff) != 0) {
        fn_829C9680(uVar3);
      }
    }
  }
  return;
}

