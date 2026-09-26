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
#define CONCAT11(h,l) ((U16)((((U8)(h)) << 8) | ((U8)(l))))
#define CONCAT21(h,l) ((U32)((((U16)(h)) << 8) | ((U8)(l))))
#define CONCAT31(h,l) ((U32)((((U32)(h)) << 8) | ((U8)(l))))


undefined8 fn_82A3DB90(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  
  iVar2 = *(int *)(param_1 + 0x2b04);
  puVar7 = (undefined1 *)(iVar2 + -2);
  *(undefined1 **)(param_1 + 0x2b04) = puVar7;
  if (*(uint *)(param_1 + 0x2b08) <= iVar2 + 2U) {
    return 0;
  }
  puVar6 = (undefined4 *)(param_1 + 8);
  lVar8 = 3;
  do {
    puVar3 = puVar7 + 3;
    puVar4 = puVar7 + 2;
    puVar5 = puVar7 + 1;
    uVar1 = *puVar7;
    puVar7 = puVar7 + 4;
    puVar6 = puVar6 + 1;
    *puVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar3,*puVar4),*puVar5),uVar1);
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  *(undefined1 **)(param_1 + 0x2b04) = puVar7;
  return 1;
}

