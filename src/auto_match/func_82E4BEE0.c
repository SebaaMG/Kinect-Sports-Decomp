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
extern int fn_82E99CD0();
extern int fn_82E99D70();
extern int fn_82F174E0();
extern int fn_82F68CC0();


undefined8 fn_82E4BEE0(int param_1,undefined4 *param_2,undefined8 param_3,int param_4,int param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  int aiStack_50 [20];
  
  if ((*(int *)(param_4 + 0x10) == 0x56555949) || (*(int *)(param_4 + 0x10) == 0x30323449)) {
    puVar5 = (undefined4 *)(param_4 + -4);
    puVar4 = param_2 + 1;
    lVar6 = 10;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    fn_82F68CC0(*param_2,param_3,*(undefined4 *)(param_4 + 0x14));
  }
  else {
    if (*(int *)(param_1 + 0x5c) == 0) {
      puVar5 = (undefined4 *)(param_4 + -4);
      aiStack_50[0] = 1;
      puVar4 = (undefined4 *)(param_1 + 0x60);
      lVar6 = 10;
      do {
        puVar5 = puVar5 + 1;
        puVar4 = puVar4 + 1;
        *puVar4 = *puVar5;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      *(undefined4 *)(param_1 + 100) = 0x28;
      *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_4 + 4);
      uVar2 = *(undefined4 *)(param_4 + 8);
      *(undefined2 *)(param_1 + 0x72) = 0xc;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      *(undefined2 *)(param_1 + 0x70) = 1;
      *(undefined4 *)(param_1 + 0x74) = 0x30323449;
      uVar1 = *(int *)(param_4 + 8) * *(int *)(param_4 + 4) * 3;
      *(uint *)(param_1 + 0x78) = ((int)uVar1 >> 1) + (uint)((int)uVar1 < 0 && (uVar1 & 1) != 0);
      if (*(int *)(param_1 + 0x8c) != 0) {
        fn_82F174E0();
      }
      if ((*(int *)(*(int *)(param_1 + 0xc) + 4) != 8) || (uVar3 = 2, param_5 != 0)) {
        uVar3 = 0;
      }
      uVar2 = fn_82E99D70(aiStack_50,param_4,(undefined4 *)(param_1 + 100),0,uVar3);
      *(undefined4 *)(param_1 + 0x8c) = uVar2;
      if (aiStack_50[0] != 0) {
        if (((aiStack_50[0] != 3) && (aiStack_50[0] != 4)) && (aiStack_50[0] != 5)) {
          if (aiStack_50[0] == 2) {
            return 0xfffffffffffffffd;
          }
          return 0xffffffffffffff9c;
        }
        return 0xfffffffffffffffe;
      }
      *(undefined4 *)(param_1 + 0x5c) = 1;
    }
    puVar5 = (undefined4 *)(param_1 + 0x60);
    puVar4 = param_2 + 1;
    lVar6 = 10;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if ((*(int *)(*(int *)(param_1 + 0xc) + 4) != 8) || (uVar3 = 2, param_5 != 0)) {
      uVar3 = 0;
    }
    fn_82E99CD0(*(undefined4 *)(param_1 + 0x8c),param_3,*param_2,uVar3,1);
  }
  return 0;
}

