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
extern int fn_82BE50B0();
extern int fn_82F68CC0();


undefined8 fn_82BEFB38(int param_1,int param_2,int param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 == 0) {
    uVar2 = *(ushort *)(param_1 + 0x60);
  }
  else {
    uVar2 = *(ushort *)(iVar3 + 0x5a);
  }
  if (iVar3 == 0) {
    fVar1 = *(float *)(param_1 + 100);
  }
  else {
    fVar1 = *(float *)(iVar3 + 0x5c);
  }
  dVar5 = (double)fVar1;
  iVar3 = *(int *)(param_2 + 8);
  iVar4 = fn_82BE50B0(iVar3,1);
  *(undefined4 *)(iVar3 + 0x60) = 3;
  if ((((iVar4 != 0) && (*(int *)(iVar4 + 0xc) != 0)) &&
      (*(undefined4 *)(iVar3 + 0x60) = 1,
      (float)*(uint *)(param_3 + 0x14) * *(float *)(param_3 + 0x18) <=
      (float)*(uint *)(iVar4 + 0x14) * *(float *)(iVar4 + 0x18))) &&
     ((fn_82F68CC0(param_3,iVar4,0x24), dVar5 <= (double)*(float *)(iVar4 + 0x18) &&
      ((uint)uVar2 <= *(uint *)(iVar4 + 0x14))))) {
    *(undefined4 *)(iVar3 + 0x60) = 2;
    return 1;
  }
  return 0;
}

