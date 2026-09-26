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


bool fn_83001CB8(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  double dVar5;
  
  iVar2 = *(int *)(param_1 + 0x28);
  if (iVar2 == 0) {
    return false;
  }
  if ((*(int *)((param_2 + 1) * 0xc + iVar2) != -1) &&
     ((1 << (param_2 + 0x18 & 0x3f) & *(uint *)(param_1 + 0x40)) != 0)) {
    dVar5 = (double)fn_830177C8(lbl_832642FC,param_1,param_2 + 0x18);
    return dVar5 != (double)lbl_821AAD20;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x54);
  if (puVar3 != (undefined4 *)0x0) {
    for (piVar4 = (int *)*puVar3; (piVar4 != (int *)puVar3[1] && (*piVar4 != param_3));
        piVar4 = piVar4 + 2) {
    }
    piVar4 = (int *)(-(uint)((int *)puVar3[1] != piVar4) & (uint)(piVar4 + 1));
    if (piVar4 != (int *)0x0) {
      return (bool)(*(byte *)(*piVar4 + 0x3d) >> (param_2 & 0x3f) & 1);
    }
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    bVar1 = *(byte *)(iVar2 + 0x3c);
  }
  else {
    bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 0x3d);
  }
  return (bool)(bVar1 >> (param_2 & 0x3f) & 1);
}

