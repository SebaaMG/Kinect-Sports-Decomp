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
extern int fn_825089A0();
extern int fn_828EA790();
extern int fn_828EB278();
extern int fn_82F63EC8();
extern unsigned int lbl_83214508;
extern unsigned int lbl_83214514;
extern unsigned int uRam8321450c;


int fn_828EB518(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int aiStack_40 [16];
  
  iVar1 = fn_828EB278();
  aiStack_40[0] = **(int **)(iVar1 + 4);
  uVar3 = lbl_83214514;
  while( true ) {
    iVar1 = aiStack_40[0];
    if ((uVar3 & 1) == 0) {
      lbl_83214514 = uVar3 | 1;
      uRam8321450c = 0;
      piVar2 = (int *)fn_825089A0();
      lbl_83214508 = (**(code **)(*piVar2 + 0x24))(piVar2,0x18,0);
      *(int *)lbl_83214508 = lbl_83214508;
      *(int *)(lbl_83214508 + 4) = lbl_83214508;
      *(int *)(lbl_83214508 + 8) = lbl_83214508;
      *(undefined1 *)(lbl_83214508 + 0x14) = 1;
      *(undefined1 *)(lbl_83214508 + 0x15) = 1;
      fn_82F63EC8(0xffffffff831418a0);
      uVar3 = lbl_83214514;
    }
    if (iVar1 == lbl_83214508) break;
    iVar1 = *(int *)(iVar1 + 0x10);
    if (*(int *)(iVar1 + 0x70) == param_1) {
      return iVar1;
    }
    fn_828EA790(aiStack_40);
  }
  return 0;
}

