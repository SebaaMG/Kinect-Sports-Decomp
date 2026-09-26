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
#define CONCAT44(h,l) ((U64)((((U32)(h)) << 32) | ((U32)(l))))
extern int fn_8264B4A0();
extern unsigned int uStack_40;


void fn_82639F78(int param_1,longlong param_2,int param_3,int param_4,ulonglong param_5,
                  ulonglong param_6)

{
  int iVar1;
  uint *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uStack_40;
  
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x1c);
    uVar6 = *(int *)(param_3 + 0x18) + param_4;
    *(uint *)((int)((-param_2 + 0xefU & 0xffffffff) << 3) + param_1) =
         ((uVar6 >> 0x14) + 0x200 & 0x1000) + (uVar6 & 0x1fffffff);
    *(int *)((int)((-param_2 + 0x11U & 0xffffffff) << 3) + param_1 + 0x6f4) = iVar1 - param_4;
    *(ulonglong *)(param_1 + 0x18) = *(ulonglong *)(param_1 + 0x18) | param_6;
  }
  iVar1 = (int)((param_2 + 0xc57U & 0xffffffff) << 2);
  puVar2 = *(uint **)(iVar1 + param_1);
  if (puVar2 != (uint *)0x0) {
    if (*(uint *)(param_1 + 0x2a9c) == 0) {
      if ((*(uint *)(param_1 + 0x2aa0) & *puVar2) != 0) {
        puVar5 = *(undefined8 **)(param_1 + 0x35a8);
        if (*(undefined8 **)(param_1 + 0x35ac) <= puVar5) {
          puVar5 = (undefined8 *)fn_8264B4A0(param_1);
        }
        *puVar5 = CONCAT44((uint)puVar2 >> 2 | uStack_40 & 0x80000000,0xffffffff);
        *(undefined8 **)(param_1 + 0x35a8) = puVar5 + 1;
      }
    }
    else {
      puVar2[2] = *(uint *)(param_1 + 0x2a9c);
    }
  }
  iVar4 = param_1 + (int)param_2;
  *(int *)(iVar1 + param_1) = param_3;
  uVar3 = (param_5 & 0xffffffff) >> 2;
  *(char *)(iVar4 + 0x31a0) = (char)((param_5 & 0xffffffff) >> 2);
  if ((uVar3 != 0) && (uVar3 != *(byte *)(iVar4 + 0x2ee8))) {
    *(ulonglong *)(param_1 + 0x10) = *(ulonglong *)(param_1 + 0x10) | 0x80000;
  }
  return;
}

