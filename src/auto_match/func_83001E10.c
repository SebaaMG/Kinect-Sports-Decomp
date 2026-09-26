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
extern int fn_830177C8();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


ulonglong fn_83001E10(int param_1,ulonglong param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  uint *puVar4;
  int *piVar5;
  double dVar6;
  
  if (((*(byte *)(param_1 + 0x3e) & 0x80) == 0) &&
     (piVar5 = *(int **)(param_1 + 0x10), piVar5 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar5 + 0xec))(piVar5);
    return uVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  bVar1 = *(byte *)(*(int *)(param_1 + 0x28) + 0x3c);
  if ((*(uint *)(param_1 + 0x40) >> 0x1c & 1) == 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x54);
    if (puVar2 != (undefined4 *)0x0) {
      for (puVar4 = (uint *)*puVar2;
          (puVar4 != (uint *)puVar2[1] && ((ulonglong)*puVar4 != (param_2 & 0xffffffff)));
          puVar4 = puVar4 + 2) {
      }
      piVar5 = (int *)(-(uint)((uint *)puVar2[1] != puVar4) & (uint)(puVar4 + 1));
      if (piVar5 != (int *)0x0) {
        return (ulonglong)(*(byte *)(*piVar5 + 0x3d) >> 4) & 1;
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 0x3d);
    }
    return (ulonglong)(bVar1 >> 4) & 1;
  }
  dVar6 = (double)fn_830177C8(lbl_832642FC,param_1,0x1c,param_2);
  return (ulonglong)(dVar6 != (double)lbl_821AAD20);
}

