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
extern unsigned int *auStack_50;
extern int fn_82636148();
extern int fn_82AA0258();
extern int fn_82AA1AD8();


void fn_82AA1DC0(longlong *param_1,uint *param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char cVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 auStack_50 [80];
  
  if ((param_3 == '\0') && (uVar1 = param_2[1], (1 << (uVar1 >> 0xc & 0xf) & 0x607eU) != 0)) {
    uVar2 = *param_2;
    uVar9 = 0;
    uVar8 = (ulonglong)(uVar2 >> 0xc) & 7;
    *param_1 = 0;
    uVar11 = (ulonglong)uVar2 & 0xfff;
    uVar12 = (ulonglong)(uVar2 >> 0x10) & 0xfff;
    uVar10 = ((ulonglong)uVar1 & 3) << 4 | (ulonglong)(uVar2 >> 0x1c);
    if ((uVar2 >> 0xc & 7) != 0) {
      do {
        uVar6 = fn_82636148(*(undefined4 *)(param_1 + 1),uVar11,auStack_50);
        uVar4 = uVar12 & 1;
        uVar3 = uVar12 >> 1;
        uVar5 = uVar10 & 1;
        uVar10 = uVar10 >> 1;
        uVar12 = uVar12 >> 2;
        cVar7 = fn_82AA0258(param_1,uVar4,uVar3 & 1,uVar5,uVar6);
        if (cVar7 != '\0') {
          *param_2 = *param_2 & 0xf000ffff | ((2 << (uVar9 & 0x3f)) << 0x10 | *param_2) & 0xfff0000;
        }
        uVar8 = uVar8 - 1;
        uVar9 = uVar9 + 2;
        uVar11 = uVar11 + 1;
      } while (uVar8 != 0);
      if (*param_1 != 0) {
        fn_82AA1AD8(param_1,param_6 + 1);
      }
    }
  }
  return;
}

