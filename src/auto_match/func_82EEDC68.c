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
extern int fn_82E5AEC8();
extern int fn_82F40C90();
extern unsigned int lbl_82160240;
extern unsigned int lbl_82160294;
extern unsigned int lbl_821602C0;


undefined4 * fn_82EEDC68(undefined4 *param_1,int param_2)

{
  if (param_2 != 0) {
    param_1[1] = &lbl_821602C0;
    fn_82F40C90(param_1 + 0x1f);
  }
  *param_1 = &lbl_82160294;
  *(undefined ***)((int)param_1 + *(int *)(param_1[1] + 4) + 4) = &lbl_82160240;
  *(int *)(*(int *)(param_1[1] + 4) + (int)param_1) = *(int *)(param_1[1] + 4) + -0x78;
  fn_82E5AEC8(param_1 + 2);
  param_1[0x1d] = 0;
  return param_1;
}

