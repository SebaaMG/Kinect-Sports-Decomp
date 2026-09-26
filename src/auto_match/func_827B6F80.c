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
#define CONCAT22(h,l) ((U32)((((U16)(h)) << 16) | ((U16)(l))))
#define CONCAT42(h,l) ((U64)((((U32)(h)) << 16) | ((U16)(l))))
#define CONCAT62(h,l) ((U64)((((U64)(h)) << 16) | ((U16)(l))))
extern int fn_827B6268();
extern int fn_827B6378();


int fn_827B6F80(longlong param_1,undefined2 *param_2,undefined2 param_3,undefined2 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  iVar5 = fn_827B6268(param_1 + 0x1c);
  puVar6 = (undefined4 *)fn_827B6378(param_1 + 100);
  *(undefined4 **)(iVar5 + 8) = puVar6;
  *(undefined2 **)(iVar5 + 0x1c) = param_2;
  *(undefined2 *)(iVar5 + 0x20) = *param_2;
  *(undefined2 *)(iVar5 + 0x26) = 0;
  *(undefined2 *)(iVar5 + 0x22) = param_3;
  *(undefined2 *)(iVar5 + 0x24) = param_4;
  *(undefined1 *)((int)puVar6 + 10) = 0x10;
  puVar6[3] = iVar5;
  *puVar6 = 0;
  *(undefined2 *)(puVar6 + 1) = 0;
  *(undefined1 *)((int)puVar6 + 6) = 0;
  *(undefined1 *)((int)puVar6 + 7) = 0;
  *(undefined1 *)(puVar6 + 2) = 0;
  *(undefined1 *)((int)puVar6 + 9) = 0;
  *(undefined1 *)((int)puVar6 + 0xb) = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar1 = *(undefined2 *)(iVar5 + 0x22);
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  uVar4 = *(undefined2 *)(iVar5 + 0x24);
  *(undefined2 *)(puVar6 + 8) = 0;
  *(undefined2 *)((int)puVar6 + 0x22) = 0;
  *(ulonglong *)(puVar6 + 6) = CONCAT62(CONCAT42(CONCAT22(uVar1,uVar3),uVar4),uVar2);
  return iVar5;
}

