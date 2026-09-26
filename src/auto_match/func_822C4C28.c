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
extern int fn_8225F160();
extern int fn_822ABBF0();
extern unsigned int iStack_28;
extern unsigned int lbl_821ACF84;
extern unsigned int uStack_24;


void fn_822C4C28(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined **ppuStack_30;
  int *piStack_2c;
  int iStack_28;
  uint uStack_24;
  
  if ((param_3 != 0) || ((param_2 != 0 && (*(char *)(param_2 + 0xe0) != '\0')))) {
    iVar1 = fn_8225F160();
    uStack_24 = (uint)LZCOUNT(*(undefined4 *)(iVar1 + 0x40)) >> 5;
    ppuStack_30 = &lbl_821ACF84;
    piStack_2c = param_1;
    iStack_28 = param_2;
    fn_822ABBF0(*(undefined4 *)(((int *)param_1[7])[4] * 4 + *(int *)param_1[7]),&ppuStack_30)
    ;
    if (param_1[9] != param_2) {
      param_1[9] = param_2;
      *(uint *)(*(int *)(param_1[5] + 0x8c0) + 0x90) = (uint)(param_2 != 0);
      (**(code **)(*param_1 + 0x24))(param_1,param_2);
    }
  }
  return;
}

