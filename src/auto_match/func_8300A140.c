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
extern int fn_83006E68();
extern int fn_830177C8();
extern int fn_8302AF48();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


double fn_8300A140(int param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  bVar2 = false;
  dVar5 = (double)lbl_821AAD20;
  dVar6 = dVar5;
  if (((*(byte *)(param_1 + 0x3d) & 4) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    iVar3 = fn_83006E68();
    if ((iVar3 != 0) && (iVar3 = fn_8302AF48(), iVar3 == 1)) {
      bVar2 = true;
    }
    dVar6 = (double)*(float *)(*(int *)(param_1 + 0x20) + 4);
  }
  if ((!bVar2) &&
     (dVar6 = (double)(float)((double)(longlong)*(short *)(param_1 + 0x2c) * (double)lbl_82186E6C +
                             dVar6), (*(uint *)(param_1 + 0x40) & 1) != 0)) {
    dVar4 = (double)fn_830177C8(lbl_832642FC,param_1,0,0);
    dVar6 = (double)(float)(dVar4 + dVar6);
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    dVar6 = (double)(float)((double)*(float *)(*(int *)(param_1 + 0x24) + 0x28) + dVar6);
  }
  for (puVar1 = *(undefined4 **)(param_1 + 0x7c); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    dVar5 = (double)(float)((double)(float)puVar1[5] + dVar5);
  }
  if (dVar5 < (double)*(float *)(param_1 + 0x58)) {
    dVar5 = (double)*(float *)(param_1 + 0x58);
  }
  dVar5 = (double)(float)(dVar5 + dVar6);
  if (*(int *)(param_1 + 0x14) != 0) {
    dVar6 = (double)((int (*)())fn_8300A140)();
    dVar5 = (double)(float)(dVar6 + dVar5);
  }
  return dVar5;
}

