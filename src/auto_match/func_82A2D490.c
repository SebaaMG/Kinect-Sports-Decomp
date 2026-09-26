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
extern int fn_82A2D360();


undefined8 fn_82A2D490(undefined8 param_1,ushort *param_2,undefined8 param_3,undefined4 *param_4)

{
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar1;
  ulonglong uVar4;
  longlong lVar5;
  
  if (((param_2 == (ushort *)0x0) || (uVar4 = (ulonglong)*param_2, uVar4 == 0)) ||
     ((uVar4 == 1 && (**(char **)(param_2 + 2) == '*')))) {
    lVar5 = 0;
  }
  else {
    lVar5 = uVar4 << 1;
  }
  iVar2 = ObIsTitleObject();
  puVar3 = (undefined4 *)ExAllocatePoolTypeWithTag(lVar5 + 0xc,0x65446f49,(iVar2 == 0) + '\x01');
  if (puVar3 == (undefined4 *)0x0) {
    uVar1 = 0xffffffffc000009a;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    if (lVar5 != 0) {
      *(short *)((int)puVar3 + 6) = (short)lVar5;
      puVar3[2] = puVar3 + 3;
      iVar2 = fn_82A2D360(puVar3 + 1,param_3,param_2);
      if (iVar2 == 0) {
        ExFreePool(puVar3);
        return 0xffffffffc000000d;
      }
    }
    *param_4 = puVar3;
    uVar1 = 0;
  }
  return uVar1;
}

