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
extern int fn_826E7800();


undefined4 fn_826DF558(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x314);
  if (iVar6 == 0) {
    iVar6 = param_1 + 0x28;
  }
  *(undefined1 *)(iVar6 + 0x15) = 0;
  if (*(int *)(iVar6 + 0x30) - *(int *)(iVar6 + 0x2c) < 4) {
    fn_826E7800(iVar6,4);
  }
  puVar5 = (undefined1 *)(*(int *)(iVar6 + 0x3c) + *(int *)(iVar6 + 0x2c));
  uVar1 = puVar5[3];
  uVar2 = puVar5[2];
  uVar3 = puVar5[1];
  uVar4 = *puVar5;
  *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) + 4;
  return CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
}

