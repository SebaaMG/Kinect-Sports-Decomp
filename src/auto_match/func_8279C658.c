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
extern unsigned int *auStack_30;
extern int fn_8267BED0();
extern int fn_8279C4B8();
extern int fn_8279C5F0();


void fn_8279C658(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 auStack_30 [12];
  
  *(uint *)(param_1 + 0x1c) = param_2;
  *(uint *)(param_1 + 0x20) = param_3;
  if (*(int *)(param_1 + 0x14) == 0) {
    auStack_30[0] = 0x144;
    iVar1 = fn_8267BED0(param_1,0xb0,auStack_30);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = fn_8279C4B8();
    }
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  uVar4 = param_2;
  if (param_3 < param_2) {
    uVar4 = param_3;
    param_3 = param_2;
  }
  puVar3 = (uint *)fn_8279C5F0(param_1);
  if ((*puVar3 != uVar4) || (puVar3[1] != param_3 - uVar4)) {
    *puVar3 = uVar4;
    puVar3[1] = param_3 - uVar4;
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x19) = 0;
  }
  return;
}

