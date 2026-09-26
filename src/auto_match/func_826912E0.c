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
extern unsigned int *auStack_2c;
extern int fn_82691128();
extern int fn_8270AAF8();
extern unsigned int iStack_30;


void fn_826912E0(int param_1,ulonglong param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint *puVar3;
  ulonglong uVar4;
  int iStack_30;
  undefined1 auStack_2c [44];
  
  if ((param_2 & 0xffffffff) < 0x10) {
    param_2 = 0x10;
  }
  puVar3 = (uint *)(param_1 + 0x10);
  uVar4 = *(uint *)(param_1 + 0x14) + param_2 & ~(ulonglong)*(uint *)(param_1 + 0x14);
  iVar1 = fn_8270AAF8(puVar3,uVar4,&iStack_30);
  if (iVar1 == 0) {
    uVar2 = (ulonglong)*(uint *)(param_1 + 4);
    trapWord(6,uVar2,0);
    uVar2 = (longlong)(int)(((uVar2 + uVar4) - 1 & 0xffffffff) / uVar2) *
            (longlong)(int)*(uint *)(param_1 + 4);
    if ((uVar2 & 0xffffffff) <
        (((((ulonglong)((uint)(*(int *)(param_1 + 0x14) + (int)uVar2) >> (*puVar3 & 0x3f)) + 0x1f &
           0xffffffff) >> 3 & 0x1ffffffc) + 0x2f & 0xfffffff0) + uVar4 & 0xffffffff)) {
      do {
        uVar2 = *(uint *)(param_1 + 4) + uVar2;
      } while ((uVar2 & 0xffffffff) <
               (((((ulonglong)((uint)(*(int *)(param_1 + 0x14) + (int)uVar2) >> (*puVar3 & 0x3f)) +
                   0x1f & 0xffffffff) >> 3 & 0x1ffffffc) + 0x2f & 0xfffffff0) + uVar4 & 0xffffffff))
      ;
    }
    iStack_30 = fn_82691128(param_1);
    if (iStack_30 == 0) {
      return;
    }
    fn_8270AAF8(puVar3,uVar4,auStack_2c);
  }
  *(int *)(iStack_30 + 0x10) = *(int *)(iStack_30 + 0x10) + 1;
  return;
}

