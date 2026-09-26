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
extern int fn_82A9F6F8();
extern unsigned int iStack_34;
extern unsigned int lbl_820D28A4;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;


undefined4 fn_82A9F978(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined **ppuStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (-1 < *(int *)(param_1 + 0x90)) {
    if (*(int *)(param_1 + 0x94) == 1) {
      return 0;
    }
    if (*(int *)(param_1 + 0x94) == 3) {
      uStack_3c = 0;
      ppuStack_40 = &lbl_820D28A4;
      uStack_38 = 1;
      uStack_28 = 0;
      iStack_34 = 0;
      uStack_30 = param_2;
      uStack_2c = param_3;
      fn_82A9F6F8(param_1,&ppuStack_40);
      if (-1 < iStack_34) {
        *param_4 = uStack_28;
      }
    }
    else {
      iStack_34 = -0x7fffbffb;
    }
    *(int *)(param_1 + 0x90) = iStack_34;
  }
  return *(undefined4 *)(param_1 + 0x90);
}

