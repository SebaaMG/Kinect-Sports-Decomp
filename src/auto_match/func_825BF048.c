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
extern int fn_825200F0();
extern int fn_827DDFB8();
extern int fn_82A1E650();


undefined8 fn_825BF048(int param_1,uint *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_50 [80];
  
  iVar2 = fn_82A1E650(*(undefined4 *)(param_1 + 0x1b4),0);
  if ((iVar2 != 0x102) && (uVar5 = 0, *(int *)(*(int *)(param_1 + 0x5c) + 8) != 0)) {
    iVar2 = 0;
    do {
      puVar3 = (uint *)(*(int *)(param_1 + 100) + iVar2);
      if (puVar3 != (uint *)0x0) {
        uVar1 = *puVar3;
        uVar4 = uVar1 >> 0x18;
        if (uVar1 == 0) {
          uVar4 = 0x7a;
        }
        if (uVar4 == *param_2) {
          fn_825200F0(auStack_50);
          fn_827DDFB8(param_3,auStack_50);
        }
      }
      uVar5 = uVar5 + 1;
      iVar2 = iVar2 + 0xc;
    } while (uVar5 < *(uint *)(*(int *)(param_1 + 0x5c) + 8));
  }
  return 0;
}

