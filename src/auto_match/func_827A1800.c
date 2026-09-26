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
extern int fn_82799C40();
extern int fn_827A0BD0();


undefined8 fn_827A1800(int param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  double dVar5;
  
  if (param_3 != (uint *)0x0) {
    fn_827A0BD0();
    if ((((int *)(param_1 + 0x24) == (int *)0x0) || (*(uint *)(param_1 + 0x28) <= param_2)) ||
       (bVar3 = false, (int)param_2 < 0)) {
      bVar3 = true;
    }
    if (!bVar3) {
      piVar2 = *(int **)(param_2 * 4 + *(int *)(param_1 + 0x24));
      if (*piVar2 < 0) {
        uVar1 = *(ushort *)((int)piVar2 + 0x1a);
      }
      else {
        uVar1 = *(ushort *)((int)piVar2 + 0x26);
      }
      param_3[2] = (uint)(longlong)(float)uVar1;
      dVar5 = (double)fn_82799C40(piVar2);
      param_3[3] = (uint)(longlong)dVar5;
      if (*piVar2 < 0) {
        uVar4 = (uint)*(ushort *)(piVar2 + 5);
      }
      else {
        uVar4 = piVar2[5];
      }
      *param_3 = uVar4;
      if (*piVar2 < 0) {
        uVar4 = (uint)*(ushort *)((int)piVar2 + 0x16);
      }
      else {
        uVar4 = piVar2[6];
      }
      param_3[1] = uVar4;
      if (*piVar2 < 0) {
        uVar4 = (uint)*(char *)((int)piVar2 + 0x1d);
      }
      else {
        uVar4 = (uint)*(short *)(piVar2 + 10);
      }
      param_3[5] = uVar4;
      param_3[4] = piVar2[3];
      return 1;
    }
  }
  return 0;
}

