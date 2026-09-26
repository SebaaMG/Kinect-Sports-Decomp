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
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82FF5198();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;


void fn_83010108(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lStack_90;
  undefined1 auStack_88 [8];
  undefined4 auStack_80 [32];
  
  if (*(int *)(param_1 + 0x80) != 0) {
    lStack_90 = (ulonglong)*(uint *)(param_1 + 0x70) << 0x20;
    uVar2 = *(uint *)(param_1 + 0x70);
    lVar4 = lStack_90;
    while (uVar2 != 0) {
      iVar1 = *(int *)(uVar2 + 8);
      auStack_80[0] = 0;
      uVar2 = *(uint *)(*(int *)(iVar1 + 8) + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_83010170:
        (**(code **)(**(int **)(iVar1 + 8) + 0x28))(*(int **)(iVar1 + 8),auStack_80);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_83010170;
      }
      fn_82FF5198(lbl_83264304,*(undefined4 *)(iVar1 + 0x28));
      plVar3 = (longlong *)fn_83013400(auStack_88,param_1,iVar1,param_1 + 0x70,lVar4);
      lVar4 = *plVar3;
      lStack_90 = ((((U64)(lStack_90)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint)((ulonglong)lVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      uVar2 = (((U64)(lStack_90) >> 0) & 0xFFFFFFFF);
    }
  }
  return;
}

