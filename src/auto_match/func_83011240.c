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
extern int fn_83010770();
extern int fn_83013400();
extern int fn_83032FE8();
extern unsigned int lbl_83264304;
extern unsigned int uStack_100;


undefined8 fn_83011240(int param_1,ulonglong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  char cVar6;
  longlong *plVar5;
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined4 auStack_f0 [20];
  undefined4 auStack_a0 [40];
  
  uStack_100 = ZEXT48(*(uint **)(param_1 + 0x50)) << 0x20;
  puVar4 = *(uint **)(param_1 + 0x50);
  while (puVar4 != (uint *)0x0) {
    uVar1 = puVar4[2];
    iVar2 = *(int *)(uVar1 + 8);
    if (((((param_2 & 0xffffffff) == 0) ||
         (cVar6 = fn_83010770(param_1,param_2,*(undefined4 *)(iVar2 + 0x10)), cVar6 != '\0'))
        && ((param_3 == 0 || (*(int *)(uVar1 + 0x34) == param_3)))) &&
       ((*(uint *)(iVar2 + 0x14) & 0xffffff00) != 0x5010000)) {
      auStack_f0[0] = 0;
      uVar3 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
      if (uVar3 == 0x4011) {
LAB_830112f0:
        (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_f0);
      }
      else if (uVar3 == 0x5011) {
        fn_83032FE8();
        goto LAB_830112f0;
      }
      fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
      plVar5 = (longlong *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x50,uStack_100);
      uStack_100 = ((((U64)(uStack_100)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint *)((ulonglong)*plVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
      puVar4 = (((U64)(uStack_100) >> 0) & 0xFFFFFFFF);
      uStack_100 = *plVar5;
    }
    else {
      uStack_100 = CONCAT44((uint *)*puVar4,puVar4);
      puVar4 = (uint *)*puVar4;
    }
  }
  uStack_100 = ZEXT48(*(uint **)(param_1 + 0x70)) << 0x20;
  puVar4 = *(uint **)(param_1 + 0x70);
  do {
    while( true ) {
      if (puVar4 == (uint *)0x0) {
        return 1;
      }
      uVar1 = puVar4[2];
      iVar2 = *(int *)(uVar1 + 8);
      if ((((param_2 & 0xffffffff) == 0) ||
          (cVar6 = fn_83010770(param_1,param_2,*(undefined4 *)(iVar2 + 0x10)), cVar6 != '\0'))
         && (((param_3 == 0 || (*(int *)(uVar1 + 0x34) == param_3)) &&
             ((*(uint *)(iVar2 + 0x14) & 0xffffff00) != 0x5010000)))) break;
      uStack_100 = CONCAT44((uint *)*puVar4,puVar4);
      puVar4 = (uint *)*puVar4;
    }
    auStack_a0[0] = 0;
    uVar3 = *(uint *)(*(int *)(uVar1 + 8) + 0x14) >> 8;
    if (uVar3 == 0x4011) {
LAB_830113dc:
      (**(code **)(**(int **)(uVar1 + 8) + 0x28))(*(int **)(uVar1 + 8),auStack_a0);
    }
    else if (uVar3 == 0x5011) {
      fn_83032FE8();
      goto LAB_830113dc;
    }
    fn_82FF5198(lbl_83264304,*(undefined4 *)(uVar1 + 0x28));
    plVar5 = (longlong *)fn_83013400(auStack_f8,param_1,uVar1,param_1 + 0x70,uStack_100);
    uStack_100 = ((((U64)(uStack_100)) & (~(((U64)0xFFFFFFFF) << 0))) | ((((U64)((uint *)((ulonglong)*plVar5 >> 0x20))) & ((U64)0xFFFFFFFF)) << 0));
    puVar4 = (((U64)(uStack_100) >> 0) & 0xFFFFFFFF);
    uStack_100 = *plVar5;
  } while( true );
}

