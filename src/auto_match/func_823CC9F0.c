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
extern int fn_82359698();
extern int fn_8236C428();
extern int fn_823E69D0();
extern int fn_824FFDC8();
extern unsigned int lbl_821CC160;


void fn_823CC9F0(int param_1,char param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  fn_82359698(param_1,2);
  if (param_2 != '\0') {
    fn_8236C428(param_1);
    if ((*(int *)(param_1 + 0x41c) != 0) || (*(int *)(param_1 + 0x420) != -1)) {
      *(undefined4 *)(param_1 + 0x420) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x41c) = 0;
      uVar1 = lbl_821CC160;
      *(undefined4 *)(param_1 + 0x424) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x428) = uVar1;
    }
    fn_823E69D0(param_1,param_3);
  }
  uVar1 = *(undefined4 *)(param_1 + 0xe10);
  fn_824FFDC8(uVar1,0,0);
  fn_824FFDC8(uVar1,1,0);
  return;
}

