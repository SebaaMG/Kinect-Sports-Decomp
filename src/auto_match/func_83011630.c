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
extern unsigned int *auStack_a0;
extern unsigned int *auStack_f0;
extern unsigned int *auStack_f8;
extern int fn_82FF5198();
extern int fn_83010658();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_100;


undefined8 fn_83011630(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  char cVar5;
  longlong *plVar4;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined4 auStack_f0 [20];
  undefined4 auStack_a0 [40];
  
  uStack_100 = ZEXT48(*(uint **)(param_1 + 0x50)) << 0x20;
  puVar3 = *(uint **)(param_1 + 0x50);
  while (puVar3 != (uint *)0x0) {
    uVar1 = puVar3[2];
    if ((((param_2 == 0) || (*(int *)(uVar1 + 0x34) == param_2)) &&
        (cVar5 = fn_83010658(param_1,*(undefined4 *)(uVar1 + 8),param_3), cVar5 == '\0')) &&
       ((*(uint *)(*(int *)(uVar1 + 8) + 0x14) & 0xffffff00) != 0x5010000)) {
      auStack_f0[0] = 0;
      uVar2 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if (uVar2 == 0x4011) {
LAB_830116d8:
        (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_f0);
      }
      else if (uVar2 == 0x5011) {
        fn_83032FE8();
        goto LAB_830116d8;
      }
      fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
      plVar4 = (longlong *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x50,uStack_100);
      uStack_100 = ((((U64)(uStack_100)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint *)((ulonglong)*plVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      puVar3 = (((U64)(uStack_100) >> 0) & 0xFFFFFFFF);
      uStack_100 = *plVar4;
    }
    else {
      uStack_100 = CONCAT44((uint *)*puVar3,puVar3);
      puVar3 = (uint *)*puVar3;
    }
  }
  uStack_100 = ZEXT48(*(uint **)(param_1 + 0x70)) << 0x20;
  puVar3 = *(uint **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar3 == (uint *)0x0) {
        return 1;
      }
      uVar1 = puVar3[2];
      if (((param_2 == 0) || (*(int *)(uVar1 + 0x34) == param_2)) &&
         ((cVar5 = fn_83010658(param_1,*(undefined4 *)(uVar1 + 8),param_3), cVar5 == '\0' &&
          ((*(uint *)(*(int *)(uVar1 + 8) + 0x14) & 0xffffff00) != 0x5010000)))) break;
      uStack_100 = CONCAT44((uint *)*puVar3,puVar3);
      puVar3 = (uint *)*puVar3;
    }
    auStack_a0[0] = 0;
    uVar2 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
    if (uVar2 == 0x4011) {
LAB_830117bc:
      (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_a0);
    }
    else if (uVar2 == 0x5011) {
      fn_83032FE8();
      goto LAB_830117bc;
    }
    fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
    plVar4 = (longlong *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x70,uStack_100);
    uStack_100 = ((((U64)(uStack_100)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint *)((ulonglong)*plVar4 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    puVar3 = (((U64)(uStack_100) >> 0) & 0xFFFFFFFF);
    uStack_100 = *plVar4;
  } while( true );
}

