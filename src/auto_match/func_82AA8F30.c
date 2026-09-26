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
extern int fn_82F68CC0();


undefined8 fn_82AA8F30(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (((int)param_2 < 0) || (*(uint *)(param_1 + 0x30) <= param_2)) {
    uVar4 = 0xffffffffffffffee;
  }
  else {
    puVar1 = *(uint **)(param_1 + 0xe8);
    iVar3 = param_2 * 4;
    uVar2 = *(uint *)(*(int *)(param_1 + 0x74) + iVar3);
    if ((int)puVar1[1] < (int)uVar2) {
      uVar4 = 0xfffffffffffffff5;
    }
    else {
      puVar1[2] = uVar2;
      if ((int)puVar1[1] < (int)(*(int *)(*(int *)(param_1 + 0x70) + iVar3) + uVar2)) {
        uVar4 = 0xfffffffffffffff4;
      }
      else {
        fn_82F68CC0(*(undefined4 *)(param_1 + 0x6c),(ulonglong)*puVar1 + (ulonglong)uVar2);
        uVar4 = 0;
        puVar1[2] = *(int *)(*(int *)(param_1 + 0x70) + iVar3) + puVar1[2];
      }
    }
  }
  return uVar4;
}

