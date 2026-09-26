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
extern int fn_82799C20();
extern int fn_8279C588();
extern int fn_827AEE00();
extern int fn_827AFE68();
extern int fn_82F68B78();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_8279A588(int param_1)

{
  int iVar2;
  undefined8 uVar1;
  int *piVar3;
  char in_r7;
  ushort uVar4;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 uStack_2c;
  
  if (*(int *)(param_1 + 0x114) == 0) {
    return;
  }
  if (in_r7 == '\0') {
    return;
  }
  iVar2 = fn_82F68B78();
  if (((*(ushort *)(iVar2 + 0x68) & 1) == 0) && ((*(ushort *)(iVar2 + 0x68) >> 8 & 1) != 0)) {
    uVar1 = fn_8279C588(*(undefined4 *)(iVar2 + 8));
    piVar3 = (int *)fn_827AEE00(uVar1,0x7ffffffe);
    if (piVar3 == (int *)0x0) {
      uVar4 = 0;
      uStack_3c = 0x7ffffffe;
      uStack_44 = 0;
      uStack_40 = 0;
      uStack_30 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_48 = 0;
      uStack_38 = 0xff000000;
      uStack_2c = 0x18;
      uStack_34 = 0xffffffff;
      piVar3 = (int *)fn_827AFE68(uVar1,&uStack_50);
    }
    else {
      uVar4 = (ushort)(piVar3[1] != 0);
    }
    if ((*piVar3 != *(int *)(iVar2 + 0x18)) || (uVar4 != (*(ushort *)(iVar2 + 0x68) >> 3 & 1))) {
      *piVar3 = *(int *)(iVar2 + 0x18);
      piVar3[1] = *(ushort *)(iVar2 + 0x68) >> 3 & 1;
      fn_82799C20(*(undefined4 *)(iVar2 + 8),piVar3);
    }
  }
  return;
}

