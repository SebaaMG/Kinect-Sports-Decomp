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
extern int fn_82575DF0();
extern int iRam83282260;
extern unsigned int lbl_821CC160;
extern unsigned int lbl_83282264;
extern unsigned int uRam8328226c;


void fn_825C16D8(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  uRam8328226c = 1;
  if (*param_1 != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(iVar2 + *param_1 + 0x10) != 0) {
        fn_82575DF0(*(undefined4 *)(param_2 + 0x93c));
        iRam83282260 = iRam83282260 + -1;
        *(undefined4 *)(iVar2 + *param_1 + 0x10) = 0;
      }
      if (*(int *)(iVar2 + *param_1 + 0x14) != 0) {
        fn_82575DF0(*(undefined4 *)(param_2 + 0x93c));
        iRam83282260 = iRam83282260 + -1;
        *(undefined4 *)(iVar2 + *param_1 + 0x14) = 0;
      }
      iVar2 = iVar2 + 0x20;
    } while (iVar2 < 0x140);
  }
  if (param_1[1] != 0) {
    iVar2 = 0;
    dVar3 = (double)lbl_821CC160;
    do {
      if (*(int *)(iVar2 + param_1[1] + 0x18) != 0) {
        fn_82575DF0(*(undefined4 *)(param_2 + 0x93c));
        lbl_83282264 = lbl_83282264 + -1;
        *(undefined4 *)(iVar2 + param_1[1] + 0x18) = 0;
      }
      if (*(int *)(iVar2 + param_1[1] + 0x1c) != 0) {
        fn_82575DF0(*(undefined4 *)(param_2 + 0x93c));
        lbl_83282264 = lbl_83282264 + -1;
        *(undefined4 *)(iVar2 + param_1[1] + 0x1c) = 0;
      }
      *(float *)(iVar2 + param_1[1] + 0x14) = (float)dVar3;
      iVar1 = iVar2 + param_1[1];
      iVar2 = iVar2 + 0x30;
      *(undefined4 *)(iVar1 + 0x10) = 0;
    } while (iVar2 < 0xf0);
  }
  uRam8328226c = 0;
  return;
}

