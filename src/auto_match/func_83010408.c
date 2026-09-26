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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_130;
extern unsigned int *auStack_180;
extern unsigned int *auStack_188;
extern unsigned int *auStack_90;
extern unsigned int *auStack_e0;
extern int fn_82FF5198();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_190;


void fn_83010408(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint *puVar4;
  char cVar6;
  longlong *plVar5;
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined4 auStack_180 [20];
  undefined4 auStack_130 [20];
  undefined4 auStack_e0 [20];
  undefined4 auStack_90 [36];
  
  bVar3 = true;
  uStack_190 = ZEXT48(*(uint **)(param_1 + 0x50)) << 0x20;
  puVar4 = *(uint **)(param_1 + 0x50);
  while (puVar4 != (uint *)0x0) {
    uVar1 = puVar4[2];
    if (*(int *)(uVar1 + 0x28) == param_2) {
      if (bVar3) {
        auStack_180[0] = 0;
        uVar2 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
        if ((uVar2 == 0x4011) || ((uVar2 == 0x5011 && (cVar6 = fn_83032FE8(), cVar6 != '\0')))) {
          (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_180);
        }
        fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
        bVar3 = false;
      }
      else {
        auStack_e0[0] = 0;
        uVar2 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
        if (uVar2 == 0x4011) {
LAB_830104dc:
          (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_e0);
        }
        else if (uVar2 == 0x5011) {
          fn_83032FE8();
          goto LAB_830104dc;
        }
        fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
      }
      plVar5 = (longlong *)fn_83013400(auStack_188,param_1,uVar1,param_1 + 0x50,uStack_190);
      uStack_190 = ((((U64)(uStack_190)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint *)((ulonglong)*plVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      puVar4 = (((U64)(uStack_190) >> 0) & 0xFFFFFFFF);
      uStack_190 = *plVar5;
    }
    else {
      uStack_190 = CONCAT44((uint *)*puVar4,puVar4);
      puVar4 = (uint *)*puVar4;
    }
  }
  uStack_190 = ZEXT48(*(uint **)(param_1 + 0x70)) << 0x20;
  puVar4 = *(uint **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar4 == (uint *)0x0) {
        return;
      }
      uVar1 = puVar4[2];
      if (*(int *)(uVar1 + 0x28) == param_2) break;
      uStack_190 = CONCAT44((uint *)*puVar4,puVar4);
      puVar4 = (uint *)*puVar4;
    }
    if (bVar3) {
      auStack_130[0] = 0;
      uVar2 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if ((uVar2 == 0x4011) || ((uVar2 == 0x5011 && (cVar6 = fn_83032FE8(), cVar6 != '\0')))) {
        (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_130);
      }
      fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
      bVar3 = false;
    }
    else {
      auStack_90[0] = 0;
      uVar2 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_830105f0:
        (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_90);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_830105f0;
      }
      fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
    }
    plVar5 = (longlong *)fn_83013400(auStack_188,param_1,uVar1,param_1 + 0x70,uStack_190);
    uStack_190 = ((((U64)(uStack_190)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint *)((ulonglong)*plVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    puVar4 = (((U64)(uStack_190) >> 0) & 0xFFFFFFFF);
    uStack_190 = *plVar5;
  } while( true );
}

