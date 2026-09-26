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
extern int fn_82A1E810();
extern int fn_82A20688();
extern int fn_82A247C0();
extern int fn_82A250F8();
extern unsigned int lbl_83219BC4;
extern unsigned int lbl_83219C18;
extern unsigned int *lbl_83219C1C;
extern unsigned int lbl_83219C4C;
extern unsigned int lbl_83219C60;


void fn_82A25330(undefined4 *param_1)

{
  int iVar1;
  
  RtlEnterCriticalSection(0xffffffff83219ba0);
  if (lbl_83219C4C != 0) {
    param_1[5] = 0xc0000001;
  }
  if ((*(uint *)(*(int *)param_1[3] + 0x1c) & 1) != 0) {
    param_1[5] = 0xc0000120;
  }
  if ((param_1[5] & 0xc0000000) == 0xc0000000) {
    fn_82A247C0(param_1);
  }
  else {
    iVar1 = param_1[0xf];
    if (iVar1 != 0) {
      param_1[0xf] = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = param_1[3];
      *(code **)(iVar1 + 0x10) = fn_82A25330;
      *(ulonglong *)(iVar1 + 0x28) =
           (ulonglong)*(uint *)(param_1[8] + 0x24) + *(longlong *)(param_1 + 10);
      **(int **)(iVar1 + 0x40) = **(int **)(iVar1 + 0x40) + 1;
      fn_82A20688();
    }
    param_1[2] = 1;
    param_1[4] = fn_82A250F8;
    RtlEnterCriticalSection(0xffffffff83219ba0);
    *param_1 = &lbl_83219C18;
    param_1[1] = lbl_83219C1C;
    *lbl_83219C1C = param_1;
    lbl_83219C60 = lbl_83219C60 | 1;
    lbl_83219C1C = param_1;
    RtlLeaveCriticalSection(0xffffffff83219ba0);
    fn_82A1E810(lbl_83219BC4);
  }
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  return;
}

