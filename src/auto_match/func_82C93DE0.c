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
extern int fn_82CBA280();
extern int fn_82CBA370();
extern int fn_82CBA440();
extern unsigned int iStack_30;


void fn_82C93DE0(int param_1,int param_2,ulonglong param_3,int param_4,undefined8 param_5,
                  undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong lVar4;
  int iStack_30;
  int aiStack_2c [11];
  
  iVar1 = (*(int *)(param_1 + 0x88) * (int)param_5 + param_4) * 2;
  iVar2 = (int)*(short *)(*(int *)(param_1 + 0x6f8) + iVar1);
  if (iVar2 == 0x4000) {
    iVar1 = 0;
    do {
      lVar4 = 8;
      puVar3 = (undefined1 *)(*(int *)(param_1 + 0xd0) * iVar1 + param_2 + -1);
      do {
        puVar3 = puVar3 + 1;
        *puVar3 = 0x80;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
  }
  else {
    iStack_30 = (int)*(short *)(*(int *)(param_1 + 0x6fc) + iVar1);
    aiStack_2c[0] = iVar2;
    if (*(int *)(param_1 + 0x3cb0) == 7) {
      if (*(int *)(param_1 + 0x56a8) == 0) {
        fn_82CBA370(param_1,param_4,param_5,aiStack_2c,&iStack_30);
      }
      else {
        fn_82CBA280();
      }
    }
    fn_82CBA440(param_1,param_6,*(undefined4 *)(param_1 + 0xd0),param_2,
                      *(undefined4 *)(param_1 + 0xd0),aiStack_2c[0],iStack_30,0);
  }
  if ((param_3 & 0xffffffff) != 0) {
    (**(code **)(param_1 + 0xc70))
              (param_2,param_2,param_3,*(undefined4 *)(param_1 + 0xd0),
               *(undefined4 *)(param_1 + 0x108));
  }
  return;
}

