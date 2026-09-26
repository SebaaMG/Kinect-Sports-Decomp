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
extern int fn_826E7800();


undefined2 fn_826A6A38(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x314);
  if (iVar4 == 0) {
    iVar4 = param_1 + 0x28;
  }
  *(undefined1 *)(iVar4 + 0x15) = 0;
  if (*(int *)(iVar4 + 0x30) - *(int *)(iVar4 + 0x2c) < 2) {
    fn_826E7800(iVar4,2);
  }
  puVar3 = (undefined1 *)(*(int *)(iVar4 + 0x3c) + *(int *)(iVar4 + 0x2c));
  uVar1 = puVar3[1];
  uVar2 = *puVar3;
  *(int *)(iVar4 + 0x2c) = *(int *)(iVar4 + 0x2c) + 2;
  return CONCAT11(uVar1,uVar2);
}

