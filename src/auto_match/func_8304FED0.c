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
extern int fn_82FA5060();
extern unsigned int lbl_831BC978;


undefined8 fn_8304FED0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar2;
  undefined8 uVar1;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfbffffff;
  iVar2 = fn_82FA5060(lbl_831BC978,0x24);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0x7fffffff;
    if (param_3 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20) = 0;
    }
    else {
      puVar4 = (undefined4 *)(param_3 + -4);
      *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x20) = 1;
      lVar5 = 5;
      puVar3 = *(undefined4 **)(param_1 + 0x10);
      do {
        puVar4 = puVar4 + 1;
        puVar3 = puVar3 + 1;
        *puVar3 = *puVar4;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar1 = 1;
    **(undefined4 **)(param_1 + 0x10) = param_2;
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x18) = param_4;
  }
  return uVar1;
}

