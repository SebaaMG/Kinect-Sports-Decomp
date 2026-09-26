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
extern int fn_82958638();
extern int fn_82A9A278();
extern int fn_82A9ECB8();


void fn_82A9F458(int param_1,uint param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  
  piVar3 = (int *)(param_1 + 0x90);
  if (-1 < *(int *)(param_1 + 0x90)) {
    iVar2 = *(int *)(param_1 + 0x48);
    if (*(uint *)(iVar2 + 4) <= param_2) {
      uVar1 = param_2 + 1;
      if (*(uint *)(iVar2 + 8) < uVar1) {
        fn_82A9A278(iVar2,uVar1,piVar3);
      }
      *(uint *)(iVar2 + 4) = uVar1;
      if (*piVar3 < 0) {
        return;
      }
    }
    if (param_3 != 0) {
      puVar4 = (uint *)(param_2 * 0x10 + **(int **)(param_1 + 0x48));
      puVar4[2] = param_6;
      puVar4[3] = param_7;
      uVar1 = fn_82A9ECB8(param_1,*(undefined4 *)(*(int *)(param_3 + 0x14) + 0x18));
      *puVar4 = *puVar4 & 0x80000000 | uVar1 & 0x7fffffff;
      iVar2 = fn_82958638(*(undefined4 *)(param_1 + 0x60),param_4,1,0,puVar4 + 1);
      *piVar3 = iVar2;
    }
  }
  return;
}

