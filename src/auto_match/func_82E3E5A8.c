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
extern int fn_82E3C8C0();


undefined8 fn_82E3E5A8(int *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar3;
  undefined8 uVar2;
  uint *puVar4;
  uint *puVar5;
  longlong lVar6;
  int aiStack_30 [12];
  
  iVar3 = fn_82E3C8C0(param_1 + 4,aiStack_30);
  if (iVar3 < 0) {
    uVar2 = 0xffffffff8007000e;
  }
  else {
    puVar5 = param_2 + -1;
    puVar4 = (uint *)(aiStack_30[0] + -4);
    lVar6 = 5;
    do {
      puVar5 = puVar5 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = *puVar5;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = 0;
    *(undefined4 *)(aiStack_30[0] + 0x14) = *param_3;
    uVar1 = (uint)param_1[1] >> 1;
    trapWord(6,(ulonglong)uVar1,0);
    iVar3 = (int)((((ulonglong)*(ushort *)(param_2 + 4) ^ (ulonglong)*param_2) -
                   (longlong)
                   (int)(((ulonglong)*(ushort *)(param_2 + 4) ^ (ulonglong)*param_2) /
                        (ulonglong)uVar1) * (longlong)(int)uVar1 & 0xffffffff) << 2);
    *(undefined4 *)(aiStack_30[0] + 0x18) = *(undefined4 *)(iVar3 + *param_1);
    *(int *)(iVar3 + *param_1) = aiStack_30[0];
    param_1[2] = param_1[2] + 1;
  }
  return uVar2;
}

