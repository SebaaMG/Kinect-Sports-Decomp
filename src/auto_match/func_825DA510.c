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
extern unsigned int *auStack_5a5;
extern unsigned int *auStack_5f0;
extern int fn_82529320();
extern int fn_82529A38();
extern int fn_8255FA88();
extern int fn_82587AC0();
extern int fn_82592430();
extern int fn_825D9FB0();
extern unsigned int lbl_821CC160;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_5f9;


void fn_825DA510(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  undefined1 uStack_5f9;
  undefined1 auStack_5f0 [75];
  undefined1 auStack_5a5 [1421];
  undefined1 uStack_18;
  undefined4 uStack_14;
  
  fn_82592430();
  if ((*(int *)(param_1 + 400) == 0) ||
     (*(int *)(**(int **)(*(int *)(param_1 + 400) + 400) + 0x114) == 0)) {
    iVar2 = 1;
  }
  else {
    iVar2 = fn_8255FA88();
  }
  if (iVar2 != 0) {
    if (lbl_821CC160 < *(float *)(param_1 + 0xb60)) {
      fn_825D9FB0(auStack_5f0,param_1);
      uStack_14 = 0;
      uStack_5f9 = (undefined1)(longlong)*(float *)(param_1 + 0x1fc);
      uStack_18 = uStack_5f9;
      uVar1 = fn_82587AC0(auStack_5a5);
      fn_82529A38(uVar1,auStack_5f0,0);
    }
    fn_82529320(param_1,0);
  }
  return;
}

