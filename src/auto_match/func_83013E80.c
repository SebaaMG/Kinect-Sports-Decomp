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
extern int fn_82A1E968();
extern int fn_83014128();


undefined8 fn_83013E80(int param_1,ulonglong param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  
  for (puVar4 = *(uint **)(param_1 + 4);
      (puVar4 != *(uint **)(param_1 + 8) && ((ulonglong)*puVar4 != (param_2 & 0xffffffff)));
      puVar4 = puVar4 + 10) {
  }
  iVar5 = param_1 + 0x10;
  uVar1 = (uint)(*(uint **)(param_1 + 8) != puVar4);
  uVar2 = -(uint)(uVar1 != 0);
  puVar3 = (undefined4 *)(uVar2 & (uint)(puVar4 + 2));
  RtlEnterCriticalSection(iVar5,uVar2,param_3,-uVar1);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)fn_83014128((int *)(param_1 + 4),param_2);
    if (puVar3 != (undefined4 *)0x0) {
      if (*(int *)(param_1 + 8) != *(int *)(param_1 + 4)) {
        fn_82A1E968(param_1 + 0x30);
      }
      puVar3[6] = param_4;
LAB_83013f50:
      *puVar3 = *param_3;
      puVar3[1] = param_3[1];
      puVar3[2] = param_3[2];
      puVar3[3] = param_3[3];
      *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(param_1 + 0x30);
      RtlLeaveCriticalSection(iVar5);
      return 1;
    }
  }
  else if (param_4 == puVar3[6]) goto LAB_83013f50;
  RtlLeaveCriticalSection(iVar5);
  return 2;
}

