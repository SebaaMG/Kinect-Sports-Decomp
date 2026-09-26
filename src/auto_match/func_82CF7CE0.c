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
extern int fn_82CE3E28();
extern int fn_82CE3E48();
extern int fn_82D00DD8();
extern unsigned int lbl_8323B50C;


void fn_82CF7CE0(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5
                  )

{
  int iVar1;
  undefined4 *puVar2;
  
  *(undefined4 *)(param_1 + 0x34) = param_2;
  *(int **)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar1 = lbl_8323B50C;
  if ((lbl_8323B50C == 0) && (iVar1 = fn_82D00DD8(), lbl_8323B50C != 0)) {
    fn_82CE3E48(lbl_8323B50C);
  }
  lbl_8323B50C = iVar1;
  iVar1 = lbl_8323B50C;
  *(int *)(param_1 + 4) = lbl_8323B50C;
  fn_82CE3E28(iVar1);
  puVar2 = (undefined4 *)(**(code **)(*param_3 + 4))(param_3,0xc);
  if (puVar2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(int **)(param_1 + 0x14) = param_3;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0xffffffff;
    *(undefined4 **)(param_1 + 0x44) = puVar2;
    *(int **)(param_1 + 0x14) = param_3;
  }
  return;
}

