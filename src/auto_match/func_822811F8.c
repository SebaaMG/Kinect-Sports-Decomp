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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FD0;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82193AD8;
extern unsigned int lbl_82193ADC;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_82193B00;
extern unsigned int lbl_82193B04;
extern unsigned int lbl_82193B0C;
extern unsigned int lbl_82193B18;
extern unsigned int lbl_82193B1C;
extern unsigned int lbl_82193B20;
extern unsigned int lbl_82193B24;
extern unsigned int lbl_82193B38;
extern unsigned int lbl_82193B40;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_821CC160;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_822811F8(void)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  
  puVar20 = (undefined4 *)fn_82F6A548();
  puVar20[0x16] = lbl_8218E8E8;
  uVar19 = lbl_821CC160;
  uVar18 = lbl_821CA460;
  uVar17 = lbl_82193B40;
  uVar16 = lbl_82193B38;
  uVar15 = lbl_82193B24;
  uVar14 = lbl_82193B20;
  uVar13 = lbl_82193B1C;
  uVar12 = lbl_82193B18;
  uVar11 = lbl_82193B0C;
  uVar10 = lbl_82193B04;
  uVar9 = lbl_82193B00;
  uVar8 = lbl_82193AF0;
  uVar7 = lbl_82193ADC;
  uVar6 = lbl_82192604;
  uVar5 = lbl_821922D0;
  uVar4 = lbl_82191FD0;
  uVar3 = lbl_821917D4;
  uVar2 = lbl_821917B0;
  uVar1 = CONCAT44(lbl_821CA460,lbl_821CC160);
  *puVar20 = lbl_82193AD8;
  puVar20[1] = uVar7;
  puVar20[4] = uVar2;
  puVar20[5] = uVar5;
  puVar20[6] = uVar8;
  puVar20[7] = uVar19;
  *(undefined8 *)(puVar20 + 2) = uVar1;
  puVar20[10] = uVar9;
  puVar20[0xb] = uVar10;
  *(ulonglong *)(puVar20 + 8) = CONCAT44(uVar18,uVar18);
  puVar20[0xc] = uVar8;
  *(ulonglong *)(puVar20 + 0xe) = CONCAT44(uVar4,uVar18);
  puVar20[0xd] = uVar11;
  puVar20[0x10] = uVar12;
  puVar20[0x11] = uVar13;
  puVar20[0x12] = uVar14;
  puVar20[0x13] = uVar15;
  puVar20[0x14] = uVar3;
  puVar20[0x15] = uVar6;
  puVar20[0x17] = uVar6;
  puVar20[0x18] = uVar16;
  puVar20[0x19] = uVar18;
  puVar20[0x1a] = uVar17;
  puVar20[0x1b] = uVar19;
  fn_82F6A594();
  return;
}

