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
extern int fn_826944C8();
extern int fn_82696958();
extern int fn_82696D38();


void fn_8273CB00(int param_1,int *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  int aiStack_20 [4];
  
  iVar2 = *(int *)(*param_2 + 0x10) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2;
  bVar1 = *param_3;
  if (2 < bVar1) {
    if (bVar1 < 5) {
      *(int *)(param_1 + 8) = iVar2 + 4;
    }
    else if (bVar1 == 5) {
      fn_82696D38(aiStack_20,param_3,*(undefined4 *)(param_1 + 4),0xffffffffffffffff,0);
      *(int *)(param_1 + 8) = *(int *)(aiStack_20[0] + 0x10) + *(int *)(param_1 + 8);
      lVar3 = (ulonglong)*(uint *)(aiStack_20[0] + 8) - 1;
      *(int *)(aiStack_20[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_20[0]);
      }
    }
    else if (bVar1 == 6) {
      iVar2 = fn_82696958(param_3,*(undefined4 *)(param_1 + 4));
      (**(code **)(*(int *)(iVar2 + 0x10) + 0x20))
                (iVar2 + 0x10,(ulonglong)*(uint *)(param_1 + 4) + 0x78,param_1,0,0);
    }
  }
  return;
}

