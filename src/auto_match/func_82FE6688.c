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
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern int fn_8300F0E8();
extern int fn_8300F208();
extern unsigned int lbl_832642E4;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


undefined8 fn_82FE6688(undefined4 param_1,ulonglong param_2,ushort param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  puVar1 = (undefined4 *)(ZEXT48(&stack0x00000000) - 0xa0);
  *puVar1 = register0x0000000c;
  uVar3 = (ulonglong)param_3;
  if (((uVar3 == 0) || ((param_2 & 0xffffffff) == 0)) || (2 < param_4)) {
    uVar5 = 0x1f;
  }
  else {
    uVar4 = fn_8300F0E8();
    lVar6 = (uVar4 & 0xffff) + (uVar3 + (ulonglong)param_3 * 2) * 8;
    uVar4 = -lVar6 & 0xfffffff0;
    fn_82F6E8D4();
    lVar7 = (ZEXT48(&stack0x00000000) - 0xa0) + uVar4;
    puVar2 = (undefined4 *)lVar7;
    *puVar2 = *puVar1;
    lVar7 = lVar7 + 0x50;
    if (lVar7 != 0) {
      *(undefined2 *)((int)puVar2 + 0x52) = 0x21;
    }
    puVar2[0x17] = param_4;
    puVar2[0x15] = param_1;
    *(ushort *)(puVar2 + 0x16) = param_3;
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        fn_82F68CC0(uVar4 * 0x18 + lVar7 + 0x10,uVar4 * 0x18 + param_2,0x18);
        uVar4 = uVar4 + 1 & 0xffff;
      } while (uVar4 < uVar3);
    }
    uVar5 = fn_8300F208(lbl_832642E4,lVar7,lVar6);
  }
  return uVar5;
}

