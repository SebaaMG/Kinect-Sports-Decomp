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
extern int fn_8243CD40();
extern int fn_82586B60();
extern int fn_8288B760();
extern unsigned int lbl_8327F87D;
extern unsigned int lbl_83281140;


undefined8 fn_8251E608(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  char cVar3;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x88);
  uVar1 = fn_82586B60(param_2 + 2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(param_1 + 0x20) == 0) {
      cVar3 = *(int *)(param_1 + 0x24) != 0;
    }
    else {
      cVar3 = fn_8288B760();
    }
    if ((cVar3 != '\0') && (lbl_8327F87D != '\0')) {
      *(undefined4 *)(param_1 + 0x28) = 1;
      *(int *)(param_1 + 0x2c) = lbl_83281140;
      piVar2 = (int *)fn_8243CD40(0xffffffff83296ff4,0xffffffff83281140);
      *piVar2 = *piVar2 + 1;
      lbl_83281140 = lbl_83281140 + 1;
    }
  }
  return 1;
}

