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
extern int fn_82460D38();


void fn_8245FDA0(int param_1,int param_2,undefined4 *param_3,int *param_4,undefined4 *param_5,
                  undefined4 *param_6,undefined8 param_7)

{
  float fVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0x10;
  do {
    if (*(int *)(iVar4 + *(int *)(param_1 + 0x28)) == param_2) goto LAB_8245fde0;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar4 < 0x18);
  iVar3 = -1;
LAB_8245fde0:
  iVar4 = *(int *)(param_1 + 0x50);
  *param_4 = (int)*(float *)(iVar4 + 0xd8);
  if (iVar3 == 0) {
    fVar1 = *(float *)(iVar4 + 0xdc);
  }
  else if (iVar3 == 1) {
    fVar1 = *(float *)(iVar4 + 0xe0);
  }
  else {
    fVar1 = *(float *)(iVar4 + 0xe4);
  }
  *param_5 = (int)(longlong)fVar1;
  *param_3 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x11c + 0x108);
  *param_6 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x11c + 0x10c);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff821bbcc4;
  }
  else {
    uVar2 = 0xffffffff821bbcd4;
  }
  fn_82460D38(param_1,uVar2,param_7,0x20);
  return;
}

