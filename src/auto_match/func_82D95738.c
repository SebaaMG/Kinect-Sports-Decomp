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
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CED5B8();
extern unsigned int lbl_8212FC60;
extern unsigned int lbl_8213A774;
extern unsigned int lbl_82141714;


undefined4 * fn_82D95738(undefined4 *param_1,ulonglong param_2)

{
  int iVar1;
  
  *param_1 = &lbl_82141714;
  if (param_1[6] != 0) {
    fn_82CE4118();
    param_1[6] = 0;
  }
  *param_1 = &lbl_8213A774;
  fn_82CED5B8(param_1 + 5);
  *param_1 = &lbl_8212FC60;
  if ((param_2 & 1) != 0) {
    iVar1 = fn_82CE5410();
    (**(code **)(**(int **)(iVar1 + 0x10) + 8))
              (*(int **)(iVar1 + 0x10),param_1,*(undefined2 *)(param_1 + 1));
  }
  return param_1;
}

