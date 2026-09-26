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
extern int fn_8300A140();
extern int fn_830177C8();
extern int fn_8302AF48();
extern unsigned int lbl_82186E6C;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_832642FC;


double fn_830251B0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    bVar3 = false;
    dVar6 = (double)lbl_821AAD20;
    dVar7 = dVar6;
    if (((*(byte *)(iVar2 + 0x3d) & 4) != 0) && (*(int *)(iVar2 + 0x20) != 0)) {
      iVar4 = fn_83006E68();
      if ((iVar4 != 0) && (iVar4 = fn_8302AF48(), iVar4 == 1)) {
        bVar3 = true;
      }
      dVar7 = (double)*(float *)(*(int *)(iVar2 + 0x20) + 4);
    }
    if ((!bVar3) &&
       (dVar7 = (double)(float)((double)(longlong)*(short *)(iVar2 + 0x2c) * (double)lbl_82186E6C +
                               dVar7), (*(uint *)(iVar2 + 0x40) & 1) != 0)) {
      dVar5 = (double)fn_830177C8(lbl_832642FC,iVar2,0,0);
      dVar7 = (double)(float)(dVar5 + dVar7);
    }
    if (*(int *)(iVar2 + 0x24) != 0) {
      dVar7 = (double)(float)((double)*(float *)(*(int *)(iVar2 + 0x24) + 0x28) + dVar7);
    }
    for (puVar1 = *(undefined4 **)(iVar2 + 0x7c); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      dVar6 = (double)(float)((double)(float)puVar1[5] + dVar6);
    }
    if (dVar6 < (double)*(float *)(iVar2 + 0x58)) {
      dVar6 = (double)*(float *)(iVar2 + 0x58);
    }
    dVar6 = (double)(float)(dVar6 + dVar7);
    if (*(int *)(iVar2 + 0x14) != 0) {
      dVar7 = (double)fn_8300A140();
      dVar6 = (double)(float)(dVar7 + dVar6);
    }
    return dVar6;
  }
  return (double)lbl_821AAD20;
}

