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
#define ZEXT48(x) ((U64)((U32)(x)))
extern int fn_82F664B0();
extern int fn_82F6E8D4();
extern int fn_82FE89F8();
extern int fn_82FFA510();
extern unsigned int lbl_832642F0;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined8 fn_82FE90B0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar5;
  undefined8 uVar4;
  char *pcVar7;
  longlong lVar6;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  
  puVar3 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar3 = register0x0000000c;
  lVar6 = param_1;
  do {
    pcVar7 = (char *)lVar6;
    lVar6 = lVar6 + 1;
  } while (*pcVar7 != '\0');
  lVar9 = ((lVar6 - param_1) - 1U & 0xffffffff) + 1;
  uVar8 = -lVar9 & 0xfffffff0;
  pcVar5 = (char *)fn_82F6E8D4();
  lVar6 = (ZEXT48(&stack0x00000000) - 0x80) + uVar8;
  *(undefined4 *)lVar6 = *puVar3;
  lVar10 = lVar6 + 0x50;
  pcVar7 = pcVar5;
  do {
    cVar2 = *pcVar7;
    ((char *)lVar10)[(int)pcVar7 - (int)pcVar5] = cVar2;
    pcVar7 = pcVar7 + 1;
  } while (cVar2 != '\0');
  cVar2 = *(char *)lVar10;
  lVar1 = lVar10;
  do {
    if (cVar2 == '\0') {
switchD_82f20fb0_default:
      uVar4 = fn_82FE89F8(lVar10);
      uVar8 = -lVar9 & 0xfffffff0;
      fn_82F6E8D4();
      *(undefined4 *)(lVar6 + uVar8) = *(undefined4 *)lVar6;
      lVar6 = lVar6 + uVar8 + 0x50;
      fn_82F664B0(lVar6,lVar9,lVar10);
      fn_82FFA510(lbl_832642F0,uVar4,lVar6);
      return uVar4;
    }
    if (*(char *)lVar1 == '.') {
      *(char *)lVar1 = '\0';
      goto switchD_82f20fb0_default;
    }
    lVar1 = lVar1 + 1;
    cVar2 = *(char *)lVar1;
  } while( true );
}

