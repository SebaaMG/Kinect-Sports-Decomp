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
extern int fn_82539560();
extern int fn_82560100();
extern unsigned int lbl_83282260;


undefined8 fn_825C2178(int param_1,int *param_2,uint param_3,int param_4)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  
  pfVar1 = *(float **)(*(int *)(param_1 + 0x4c) + 0x228);
  iVar2 = (param_3 & 0xff) * 0x18 + *(int *)(*(int *)(param_1 + 0x4c) + 0x220);
  piVar3 = (int *)(iVar2 + 4);
  if ((double)pfVar1[1] <= (double)*(float *)(param_4 + 0xa4)) {
    piVar3 = (int *)(iVar2 + 8);
  }
  if (*piVar3 != 0) {
    fn_82539560((double)*(float *)(param_4 + 0xa4),(double)*pfVar1,(double)pfVar1[2],
                 (double)pfVar1[3],(double)pfVar1[4]);
    iVar2 = fn_82560100();
    *param_2 = iVar2;
    if (iVar2 != 0) {
      lbl_83282260 = lbl_83282260 + 1;
      return 1;
    }
  }
  return 0;
}

