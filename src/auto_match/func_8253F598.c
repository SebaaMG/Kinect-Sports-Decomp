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
extern int fn_8253D898();
extern int fn_825A7BE8();
extern int fn_825A7F68();
extern int fn_825A88B8();
extern unsigned int lbl_82005748;
extern unsigned int lbl_821922D4;


void fn_8253F598(int param_1)

{
  float fVar1;
  int iVar2;
  
  fn_8253D898();
  iVar2 = *(int *)(param_1 + 0x7c0);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x604) != 0) {
      fVar1 = lbl_82005748;
      if (*(int *)(param_1 + 0x608) == 0) {
        fVar1 = lbl_821922D4;
      }
      fn_825A7BE8((double)fVar1,param_1 + 0x600,iVar2);
      *(undefined4 *)(param_1 + 0x604) = 0;
    }
    fn_825A7F68(param_1 + 0x600,iVar2,param_1);
  }
  if ((*(int *)(param_1 + 0x8c0) != 0) && ((*(uint *)(param_1 + 2000) & 8) != 0)) {
    fn_825A88B8(param_1);
  }
  return;
}

