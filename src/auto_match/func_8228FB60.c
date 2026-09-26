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
extern int fn_8228F078();
extern int fn_8228F478();
extern int fn_8228F648();
extern int fn_82672C20();
extern unsigned int lbl_821CC160;


void fn_8228FB60(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 8) == iVar1) {
    return;
  }
  if (iVar1 == 1) {
    fn_8228F478(param_1,0xffffffff821a9a18);
    *(undefined4 *)(param_1 + 0x68) = 1;
    goto LAB_8228fc1c;
  }
  if (iVar1 != 3) {
    if (iVar1 == 5) {
      fn_82672C20(*(undefined4 *)(param_1 + 0x14),0xffffffff821a9bb4,0,0);
      goto LAB_8228fc1c;
    }
    if (iVar1 != 7) {
      if (iVar1 == 9) {
        *(undefined4 *)(param_1 + 0x94) = lbl_821CC160;
        fn_8228F648(param_1,0);
      }
      else if (iVar1 == 10) {
        fn_8228F078();
      }
      goto LAB_8228fc1c;
    }
  }
  *(undefined4 *)(param_1 + 0x94) = lbl_821CC160;
LAB_8228fc1c:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  return;
}

