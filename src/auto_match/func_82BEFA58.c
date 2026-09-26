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
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820069B4;
extern unsigned int lbl_8201DCBC;


undefined8 fn_82BEFA58(int param_1,int param_2,int param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
  if (*(float *)(param_3 + 0x20) < lbl_820069B4) {
    *(undefined4 *)(param_3 + 0x20) = lbl_82002AE0;
  }
  iVar2 = *(int *)(param_2 + 8);
  iVar3 = fn_82BE50B0(iVar2,1);
  if (*(int *)(param_1 + 0x2c) == 0) {
    fVar1 = *(float *)(param_1 + 0x5c);
  }
  else {
    fVar1 = *(float *)(*(int *)(param_1 + 0x2c) + 0x60);
  }
  dVar4 = (double)fVar1;
  *(undefined4 *)(iVar2 + 0x60) = 3;
  if (((*(int *)(iVar3 + 0x1c) != 0) && (*(float *)(iVar3 + 0x20) <= *(float *)(param_3 + 0x20))) &&
     (lbl_8201DCBC < *(float *)(iVar3 + 0x20))) {
    *(undefined4 *)(iVar2 + 0x60) = 1;
    fn_82F68CC0(param_3,iVar3,0x24);
    if ((double)*(float *)(iVar3 + 0x20) <= dVar4) {
      *(undefined4 *)(iVar2 + 0x60) = 2;
      return 1;
    }
  }
  return 0;
}

