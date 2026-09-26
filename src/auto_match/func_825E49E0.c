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
extern unsigned int uStack_10;


uint fn_825E49E0(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined4 uStack_10;
  
  iVar1 = param_1[7];
  uVar4 = 1;
  uVar6 = 0;
  uVar2 = ((param_2 & 0xffff) - *param_1) * iVar1;
  iVar5 = 0;
  uVar3 = uVar2 + (((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0)) * -8;
  uVar7 = 0;
  if (0 < iVar1) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = uVar7 | uVar4;
      uVar4 = uVar4 << 1;
      uVar7 = uVar6;
    } while (iVar5 < iVar1);
  }
  puVar8 = (undefined1 *)
           (param_1[10] + ((int)uVar2 >> 3) + (uint)((int)uVar2 < 0 && (uVar2 & 7) != 0));
  uStack_10 = CONCAT31(CONCAT21(CONCAT11(puVar8[3],puVar8[2]),puVar8[1]),*puVar8);
  return (uVar6 << (uVar3 & 0x3f) & uStack_10) >> (uVar3 & 0x3f);
}

