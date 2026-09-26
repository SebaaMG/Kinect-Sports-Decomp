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
extern int fn_8270E160();
extern int fn_8270E520();
extern int fn_827843C0();


void fn_8270E968(int param_1,int param_2,int param_3,ulonglong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  uVar4 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    do {
      lVar5 = (ulonglong)
              *(uint *)(((uint)((uVar4 & 0xffffffff) >> 4) & 0xffffffc) + *(int *)(param_2 + 0x24))
              + (uVar4 & 0x3f) * 0x18;
      iVar2 = (int)lVar5;
      if (-1 < *(int *)(iVar2 + 0xc)) {
        bVar1 = *(byte *)(*(int *)(iVar2 + 0xc) * 0x28 + param_3);
        if (((bVar1 & 0x10) != 0) || ((bVar1 & 0x40) != 0)) {
          if (*(int *)(param_1 + 0x164) == 0) {
            puVar6 = (undefined4 *)(param_1 + 0x160);
            fn_8270E520(puVar6,puVar6,param_4);
            if ((param_4 & 0xffffffff) != 0) {
              fn_8270E160(*puVar6,param_4);
            }
          }
          lVar3 = (ulonglong)*(uint *)(iVar2 + 0xc) * 0x28 + (ulonglong)*(uint *)(param_1 + 0x160);
          fn_827843C0(lVar5,lVar3,lVar3 + 4,lVar3 + 8,lVar3 + 0xc);
        }
      }
      if (-1 < *(int *)(iVar2 + 0x10)) {
        bVar1 = *(byte *)(*(int *)(iVar2 + 0x10) * 0x28 + param_3);
        if (((bVar1 & 0x10) != 0) || ((bVar1 & 0x40) != 0)) {
          if (*(int *)(param_1 + 0x164) == 0) {
            puVar6 = (undefined4 *)(param_1 + 0x160);
            fn_8270E520(puVar6,puVar6,param_4);
            if ((param_4 & 0xffffffff) != 0) {
              fn_8270E160(*puVar6,param_4);
            }
          }
          lVar3 = (ulonglong)*(uint *)(iVar2 + 0x10) * 0x28 + (ulonglong)*(uint *)(param_1 + 0x160);
          fn_827843C0(lVar5,lVar3,lVar3 + 4,lVar3 + 8,lVar3 + 0xc);
        }
      }
      uVar4 = uVar4 + 1;
    } while ((uVar4 & 0xffffffff) < (ulonglong)*(uint *)(param_2 + 0x18));
  }
  return;
}

